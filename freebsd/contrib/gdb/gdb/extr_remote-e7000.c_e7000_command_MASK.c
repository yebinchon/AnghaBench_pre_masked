
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_3, int VAR_4)
{

  char VAR_5[200];

  VAR_2 = 0;

  if (!VAR_1)
    FUNC_0 ("e7000 target not open.");
  if (!VAR_3)
    {
      FUNC_3 ("\r");
    }
  else
    {
      FUNC_5 (VAR_5, "%s\r", VAR_3);
      FUNC_3 (VAR_5);
    }

  VAR_2++;
  VAR_0 = 2;
  FUNC_1 ();
  VAR_2--;
  VAR_0 = 0;
  FUNC_2 ("\n");


  FUNC_4 ();
}
