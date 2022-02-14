
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl {int acl_maxcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct acl* FUNC_0 (int,int ,int) ;

struct acl *
FUNC_1(int VAR_2)
{
 struct acl *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_1, VAR_2);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->acl_maxcnt = VAR_0;

 return (VAR_3);
}
