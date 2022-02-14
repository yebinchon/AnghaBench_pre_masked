
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 char* FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,int ) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11 (char *VAR_6, int VAR_7)
{
  int VAR_8 = 0;

  if (VAR_7)
    {
      char *VAR_9 = FUNC_5 (0);
      if (VAR_9 == 0)
 VAR_9 = "";
      FUNC_8 ("Detaching from program: %s %s\n",
    VAR_9, FUNC_9 (VAR_3));
      FUNC_4 (VAR_2);
    }
  if (VAR_6)
    VAR_8 = FUNC_2 (VAR_6);

  if (VAR_8)
    FUNC_1 (FUNC_7(), FUNC_0 (VAR_3), 0, VAR_8, 0, 0);

  FUNC_3 (VAR_1);
  VAR_1 = -1;
  FUNC_6 ();
  VAR_3 = VAR_4;
  VAR_0 = 0;
  FUNC_10 (&VAR_5);
}
