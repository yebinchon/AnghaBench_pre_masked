
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int acl_cnt; int acl_entry_size; struct TYPE_4__* acl_aclp; } ;
typedef TYPE_1__ acl_t ;


 int FUNC_0 (TYPE_1__*,int) ;

void
FUNC_1(acl_t *VAR_0)
{
 int VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->acl_aclp) {
  VAR_1 = VAR_0->acl_cnt * VAR_0->acl_entry_size;
  FUNC_0(VAR_0->acl_aclp, VAR_1);
 }

 FUNC_0(VAR_0, sizeof (acl_t));
}
