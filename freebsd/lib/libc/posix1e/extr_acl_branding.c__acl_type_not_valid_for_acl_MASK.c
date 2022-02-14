
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_type_t ;
typedef int acl_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;

int
FUNC_1(const acl_t VAR_3, acl_type_t VAR_4)
{

 switch (FUNC_0(VAR_3)) {
 case 130:
  if (VAR_4 == VAR_2)
   return (0);
  break;

 case 129:
  if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
   return (0);
  break;

 case 128:
  return (0);
 }

 return (-1);
}
