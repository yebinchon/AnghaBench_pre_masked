
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_list {int region; } ;


 int FUNC_0 (struct acl_list*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 () ;

struct acl_list*
FUNC_3(void)
{
 struct acl_list* VAR_0 = (struct acl_list*)FUNC_1(1,
  sizeof(struct acl_list));
 if(!VAR_0)
  return ((void*)0);
 VAR_0->region = FUNC_2();
 if(!VAR_0->region) {
  FUNC_0(VAR_0);
  return ((void*)0);
 }
 return VAR_0;
}
