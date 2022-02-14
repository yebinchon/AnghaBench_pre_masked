
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {int ** modinfo; } ;
struct iter_env {struct iter_env* caps_white; int donotq; int priv; struct iter_env* target_fetch_policy; int queries_ratelimit_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iter_env*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iter_env*,int ,int *) ;

void
FUNC_5(struct module_env* VAR_1, int VAR_2)
{
 struct iter_env* VAR_3;
 if(!VAR_1 || !VAR_1->modinfo[VAR_2])
  return;
 VAR_3 = (struct iter_env*)VAR_1->modinfo[VAR_2];
 FUNC_2(&VAR_3->queries_ratelimit_lock);
 FUNC_1(VAR_3->target_fetch_policy);
 FUNC_3(VAR_3->priv);
 FUNC_0(VAR_3->donotq);
 if(VAR_3->caps_white) {
  FUNC_4(VAR_3->caps_white, VAR_0, ((void*)0));
  FUNC_1(VAR_3->caps_white);
 }
 FUNC_1(VAR_3);
 VAR_1->modinfo[VAR_2] = ((void*)0);
}
