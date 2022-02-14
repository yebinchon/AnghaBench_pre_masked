
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gregset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int ) ;

void
FUNC_3 (gregset_t *VAR_1, int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if ((VAR_2 == -1 || VAR_2 == VAR_3) && ! FUNC_0 (VAR_3))
      FUNC_2 (VAR_3, FUNC_1 (VAR_1, VAR_3));
}
