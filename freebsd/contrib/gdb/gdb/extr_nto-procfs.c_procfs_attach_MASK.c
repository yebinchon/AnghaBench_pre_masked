
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*,...) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_3, int VAR_4)
{
  char *VAR_5;
  int VAR_6;

  if (!VAR_3)
    FUNC_3 ("process-id to attach");

  VAR_6 = FUNC_0 (VAR_3);

  if (VAR_6 == FUNC_6 ())
    FUNC_2 ("Attaching GDB to itself is not a good idea...");

  if (VAR_4)
    {
      VAR_5 = (char *) FUNC_5 (0);

      if (VAR_5)
 FUNC_8 ("Attaching to program `%s', %s\n", VAR_5,
      FUNC_10 (FUNC_7 (VAR_6)));
      else
 FUNC_8 ("Attaching to %s\n",
      FUNC_10 (FUNC_7 (VAR_6)));

      FUNC_4 (VAR_0);
    }
  VAR_1 = FUNC_1 (FUNC_7 (VAR_6));
  FUNC_9 (&VAR_2);
}
