
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int *,int ,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;

void
FUNC_8 (char *VAR_2, int VAR_3)
{
  int VAR_4;
  FUNC_1 ();

  if (VAR_2 == ((void*)0))
    FUNC_2 ("dll-symbols requires a file name");

  VAR_4 = FUNC_7 (VAR_2);
  if (VAR_4 > 4 && FUNC_4 (VAR_2 + VAR_4 - 4, ".dll") != 0)
    {
      char *VAR_5 = (char *) FUNC_0 (VAR_4 + 4 + 1);
      FUNC_6 (VAR_5, VAR_2);
      FUNC_5 (VAR_5, ".dll");
      VAR_2 = VAR_5;
    }

  FUNC_3 (VAR_2, VAR_3, ((void*)0), 0, VAR_0 | VAR_1);
}
