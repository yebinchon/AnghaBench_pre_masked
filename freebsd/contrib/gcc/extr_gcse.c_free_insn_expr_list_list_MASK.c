
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4 (rtx *VAR_1)
{
  rtx VAR_2, VAR_3;

  for (VAR_2 = *VAR_1; VAR_2 ; VAR_2 = VAR_3)
    {
      VAR_3 = FUNC_1 (VAR_2, 1);
      if (FUNC_0 (VAR_2) == VAR_0)
 FUNC_2 (VAR_2);
      else
 FUNC_3 (VAR_2);
    }

  *VAR_1 = ((void*)0);
}
