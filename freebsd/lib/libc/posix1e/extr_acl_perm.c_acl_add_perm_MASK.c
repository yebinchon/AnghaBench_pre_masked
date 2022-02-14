
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * acl_permset_t ;
typedef int acl_perm_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;

int
FUNC_1(acl_permset_t VAR_2, acl_perm_t VAR_3)
{

 if (VAR_2 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }

 if (FUNC_0(VAR_3))
  return (-1);

 *VAR_2 |= VAR_3;

 return (0);
}
