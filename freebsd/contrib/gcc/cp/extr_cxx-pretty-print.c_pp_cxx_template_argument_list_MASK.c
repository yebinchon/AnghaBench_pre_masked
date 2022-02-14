
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * tree ;
typedef int cxx_pretty_printer ;


 int * FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void
FUNC_8 (cxx_pretty_printer *VAR_1, tree VAR_2)
{
  int VAR_3;
  if (VAR_2 == ((void*)0))
    return;
  for (VAR_3 = 0; VAR_3 < FUNC_3 (VAR_2); ++VAR_3)
    {
      tree VAR_4 = FUNC_2 (VAR_2, VAR_3);
      if (VAR_3 != 0)
 FUNC_6 (VAR_1, ',');
      if (FUNC_4 (VAR_4) || (FUNC_1 (VAR_4) == VAR_0
      && FUNC_4 (FUNC_0 (VAR_4))))
 FUNC_7 (VAR_1, VAR_4);
      else
 FUNC_5 (VAR_1, VAR_4);
    }
}
