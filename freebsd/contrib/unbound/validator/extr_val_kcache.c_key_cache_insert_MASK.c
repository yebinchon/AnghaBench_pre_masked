
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module_qstate {TYPE_2__* env; scalar_t__ errinf; } ;
struct TYPE_6__ {int data; int hash; } ;
struct key_entry_key {TYPE_3__ entry; } ;
struct key_cache {int slab; } ;
struct TYPE_5__ {TYPE_1__* cfg; } ;
struct TYPE_4__ {int val_log_level; } ;


 int FUNC_0 (struct module_qstate*) ;
 struct key_entry_key* FUNC_1 (struct key_entry_key*) ;
 int FUNC_2 (struct key_entry_key*) ;
 scalar_t__ FUNC_3 (struct key_entry_key*) ;
 int FUNC_4 (struct key_entry_key*,int ) ;
 int FUNC_5 (int ,int ,TYPE_3__*,int ,int *) ;

void
FUNC_6(struct key_cache* VAR_0, struct key_entry_key* VAR_1,
 struct module_qstate* VAR_2)
{
 struct key_entry_key* VAR_3 = FUNC_1(VAR_1);
 if(!VAR_3)
  return;
 if(FUNC_3(VAR_3) && VAR_2->errinf &&
  VAR_2->env->cfg->val_log_level >= 2) {

  FUNC_4(VAR_3, FUNC_0(VAR_2));
 }
 FUNC_2(VAR_3);
 FUNC_5(VAR_0->slab, VAR_3->entry.hash, &VAR_3->entry,
  VAR_3->entry.data, ((void*)0));
}
