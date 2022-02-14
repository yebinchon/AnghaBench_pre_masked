
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {int queries; int mods; scalar_t__ need_to_validate; struct ub_ctx* env; int * worker; int superalloc; int * alloc; int seed_rnd; int cfg; int auth_zones; int cfglock; int rrpipe_lock; int qqpipe_lock; } ;
struct module_env {int queries; int mods; scalar_t__ need_to_validate; struct module_env* env; int * worker; int superalloc; int * alloc; int seed_rnd; int cfg; int auth_zones; int cfglock; int rrpipe_lock; int qqpipe_lock; } ;
typedef int seed ;
typedef int WSADATA ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (struct ub_ctx*) ;
 int FUNC_9 (struct ub_ctx*) ;
 int VAR_2 ;
 int FUNC_10 (unsigned int*,int) ;
 int FUNC_11 (struct ub_ctx*) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,int ,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (unsigned int,int *) ;
 int FUNC_21 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_22 (int) ;

__attribute__((used)) static struct ub_ctx* FUNC_23(void)
{
 struct ub_ctx* VAR_4;
 unsigned int VAR_5;





 FUNC_5();
 FUNC_16(((void*)0), 0, ((void*)0));
 FUNC_15("libunbound");







 VAR_3 = 0;
 FUNC_5();
 VAR_4 = (struct ub_ctx*)FUNC_4(1, sizeof(*VAR_4));
 if(!VAR_4) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }
 FUNC_2(&VAR_4->superalloc, ((void*)0), 0);
 VAR_5 = (unsigned int)FUNC_19(((void*)0)) ^ (unsigned int)FUNC_12();
 if(!(VAR_4->seed_rnd = FUNC_20(VAR_5, ((void*)0)))) {
  FUNC_10(&VAR_5, sizeof(VAR_5));
  FUNC_21(VAR_4->seed_rnd);
  FUNC_11(VAR_4);
  VAR_2 = VAR_0;
  return ((void*)0);
 }
 FUNC_10(&VAR_5, sizeof(VAR_5));
 FUNC_13(&VAR_4->qqpipe_lock);
 FUNC_13(&VAR_4->rrpipe_lock);
 FUNC_13(&VAR_4->cfglock);
 VAR_4->env = (struct module_env*)FUNC_4(1, sizeof(*VAR_4->env));
 if(!VAR_4->env) {
  FUNC_21(VAR_4->seed_rnd);
  FUNC_11(VAR_4);
  VAR_2 = VAR_0;
  return ((void*)0);
 }
 VAR_4->env->cfg = FUNC_6();
 if(!VAR_4->env->cfg) {
  FUNC_11(VAR_4->env);
  FUNC_21(VAR_4->seed_rnd);
  FUNC_11(VAR_4);
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 if(!FUNC_9(VAR_4->env)) {
  FUNC_7(VAR_4->env->cfg);
  FUNC_11(VAR_4->env);
  FUNC_21(VAR_4->seed_rnd);
  FUNC_11(VAR_4);
  VAR_2 = VAR_0;
  return ((void*)0);
 }
 VAR_4->env->auth_zones = FUNC_3();
 if(!VAR_4->env->auth_zones) {
  FUNC_8(VAR_4->env);
  FUNC_7(VAR_4->env->cfg);
  FUNC_11(VAR_4->env);
  FUNC_21(VAR_4->seed_rnd);
  FUNC_11(VAR_4);
  VAR_2 = VAR_0;
  return ((void*)0);
 }
 VAR_4->env->alloc = &VAR_4->superalloc;
 VAR_4->env->worker = ((void*)0);
 VAR_4->env->need_to_validate = 0;
 FUNC_17(&VAR_4->mods);
 FUNC_18(&VAR_4->queries, &VAR_1);
 return VAR_4;
}
