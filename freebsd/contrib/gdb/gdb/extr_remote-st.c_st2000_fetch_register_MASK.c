
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6 (int VAR_0)
{
  if (VAR_0 == -1)
    FUNC_5 ();
  else
    {
      char *VAR_1 = FUNC_3 (VAR_0);
      FUNC_4 ("DR %s\r", VAR_1);
      FUNC_0 (VAR_1, 1);
      FUNC_0 (" : ", 1);
      FUNC_2 (1, VAR_0);
      FUNC_1 (1);
    }
  return;
}
