
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
FUNC_1 (fpregset_t *VAR_3, int VAR_4)
{
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
    if (VAR_2[VAR_5] != -1)
      if (VAR_4 == -1 || VAR_4 == VAR_5)
        FUNC_0 (VAR_1, VAR_5,
         ((char *)VAR_3) + VAR_2[VAR_5]);
}
