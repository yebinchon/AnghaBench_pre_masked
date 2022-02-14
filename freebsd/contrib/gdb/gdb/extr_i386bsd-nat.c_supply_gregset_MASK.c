
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gregset_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int,int *) ;

void
FUNC_3 (gregset_t *VAR_1)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
    {
      if (FUNC_0 (VAR_2))
 FUNC_2 (VAR_2, ((void*)0));
      else
 FUNC_2 (VAR_2, FUNC_1 (VAR_1, VAR_2));
    }
}
