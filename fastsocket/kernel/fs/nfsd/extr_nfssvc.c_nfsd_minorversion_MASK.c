
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef enum vers_op { ____Placeholder_vers_op } vers_op ;





 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;

int FUNC_0(u32 VAR_2, enum vers_op VAR_3)
{
 if (VAR_2 > VAR_0)
  return -1;
 switch(VAR_3) {
 case 129:
  VAR_1 = VAR_2;
  break;
 case 130:
  if (VAR_2 == 0)
   return -1;
  VAR_1 = VAR_2 - 1;
  break;
 case 128:
  return VAR_2 <= VAR_1;
 case 131:
  return VAR_2 <= VAR_0;
 }
 return 0;
}
