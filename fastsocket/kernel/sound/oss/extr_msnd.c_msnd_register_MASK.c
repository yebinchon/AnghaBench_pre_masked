
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int multisound_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;

int FUNC_0(multisound_dev_t *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  if (VAR_2[VAR_5] == ((void*)0))
   break;

 if (VAR_5 == VAR_1)
  return -VAR_0;

 VAR_2[VAR_5] = VAR_4;
 ++VAR_3;
 return 0;
}
