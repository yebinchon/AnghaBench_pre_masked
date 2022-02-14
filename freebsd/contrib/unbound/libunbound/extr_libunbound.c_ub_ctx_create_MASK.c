
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_ctx {struct ub_ctx* env; int mods; int cfg; int seed_rnd; int * qq_pipe; int * rr_pipe; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ub_ctx*) ;
 int VAR_0 ;
 int FUNC_2 (struct ub_ctx*) ;
 int FUNC_3 (int *,struct ub_ctx*) ;
 void* FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct ub_ctx* FUNC_6 () ;
 int FUNC_7 (int ) ;

struct ub_ctx*
FUNC_8(void)
{
 struct ub_ctx* VAR_1 = FUNC_6();
 if(!VAR_1)
  return ((void*)0);
 if((VAR_1->qq_pipe = FUNC_4()) == ((void*)0)) {
  int VAR_2 = VAR_0;
  FUNC_7(VAR_1->seed_rnd);
  FUNC_0(VAR_1->env->cfg);
  FUNC_3(&VAR_1->mods, VAR_1->env);
  FUNC_1(VAR_1->env);
  FUNC_2(VAR_1->env);
  FUNC_2(VAR_1);
  VAR_0 = VAR_2;
  return ((void*)0);
 }
 if((VAR_1->rr_pipe = FUNC_4()) == ((void*)0)) {
  int VAR_3 = VAR_0;
  FUNC_5(VAR_1->qq_pipe);
  FUNC_7(VAR_1->seed_rnd);
  FUNC_0(VAR_1->env->cfg);
  FUNC_3(&VAR_1->mods, VAR_1->env);
  FUNC_1(VAR_1->env);
  FUNC_2(VAR_1->env);
  FUNC_2(VAR_1);
  VAR_0 = VAR_3;
  return ((void*)0);
 }
 return VAR_1;
}
