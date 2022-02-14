
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct daemon {TYPE_2__* env; TYPE_1__* cfg; int mods; int superalloc; } ;
struct TYPE_5__ {scalar_t__ need_to_validate; int * worker; int * alloc; TYPE_1__* cfg; } ;
struct TYPE_4__ {int module_conf; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct daemon* VAR_1)
{
 VAR_1->env->cfg = VAR_1->cfg;
 VAR_1->env->alloc = &VAR_1->superalloc;
 VAR_1->env->worker = ((void*)0);
 VAR_1->env->need_to_validate = 0;
 if(!FUNC_2(&VAR_1->mods, VAR_1->cfg->module_conf,
  VAR_1->env)) {
  FUNC_0("failed to setup modules");
 }
 FUNC_1(VAR_0, VAR_1->env);
}
