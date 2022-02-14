
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bool_t ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

bool_t
FUNC_0(int VAR_3, void *VAR_4)
{
 int VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = *(int *)VAR_4;
  if (VAR_5 <= 0)
   return VAR_0;
  VAR_2 = VAR_5;
  return VAR_1;
 case 129:
  *(int *)VAR_4 = VAR_2;
  return VAR_1;
 default:
  break;
 }
 return VAR_0;
}
