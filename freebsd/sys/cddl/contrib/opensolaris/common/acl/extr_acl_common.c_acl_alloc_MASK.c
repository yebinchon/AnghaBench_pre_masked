
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum acl_type { ____Placeholder_acl_type } acl_type ;
typedef int aclent_t ;
struct TYPE_4__ {int acl_type; int acl_entry_size; scalar_t__ acl_cnt; int * acl_aclp; } ;
typedef TYPE_1__ acl_t ;
typedef int ace_t ;




 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (void**,int) ;

acl_t *
FUNC_2(enum acl_type VAR_0)
{
 acl_t *VAR_1;

 if (FUNC_1((void **)&VAR_1, sizeof (acl_t)) != 0)
  return (((void*)0));

 VAR_1->acl_aclp = ((void*)0);
 VAR_1->acl_cnt = 0;

 switch (VAR_0) {
 case 129:
  VAR_1->acl_type = 129;
  VAR_1->acl_entry_size = sizeof (ace_t);
  break;
 case 128:
  VAR_1->acl_type = 128;
  VAR_1->acl_entry_size = sizeof (aclent_t);
  break;
 default:
  FUNC_0(VAR_1);
  VAR_1 = ((void*)0);
 }
 return (VAR_1);
}
