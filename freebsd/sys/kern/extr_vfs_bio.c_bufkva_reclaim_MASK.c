
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_t ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1(vmem_t *VAR_2, int VAR_3)
{
 bool VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = 0;
 for (VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   if (FUNC_0(&VAR_0[VAR_5], 1) != 0)
    VAR_4 = 1;
  if (VAR_4)
   break;
 }
 return;
}
