
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fpregset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int* VAR_2 ;

void
FUNC_1 (fpregset_t *VAR_3)
{
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (VAR_2[VAR_4] != -1)
      FUNC_0 (VAR_1, VAR_4,
      ((char *)VAR_3) + VAR_2[VAR_4]);
}
