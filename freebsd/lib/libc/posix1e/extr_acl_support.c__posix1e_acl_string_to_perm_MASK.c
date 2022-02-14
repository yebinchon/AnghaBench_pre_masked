
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int acl_perm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(char *VAR_5, acl_perm_t *VAR_6)
{
 acl_perm_t VAR_7 = VAR_1;
 char *VAR_8;

 VAR_8 = VAR_5;
 while (*VAR_8) {
  switch(*VAR_8) {
  case 129:
   VAR_7 |= VAR_2;
   break;
  case 128:
   VAR_7 |= VAR_3;
   break;
  case 131:
   VAR_7 |= VAR_0;
   break;
  case 130:
   break;
  default:
   return (VAR_4);
  }
  VAR_8++;
 }

 *VAR_6 = VAR_7;
 return (0);
}
