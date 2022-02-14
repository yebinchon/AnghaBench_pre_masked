
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_funcs {int dummy; } ;
struct uni {int timer399; int timer398; int timer397; int init322; int timer322; int timer317; int timer316; int init316; int timer313; int timer310; int timer308; int init308; int timer303; int init303; int timer301; int cx; int calls; int timer309; int delq; int workq; scalar_t__ sb_tb; int proto; void* arg; struct uni_funcs const* funcs; } ;


 struct uni* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uni*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct uni*) ;
 int FUNC_4 (int *) ;

struct uni *
FUNC_5(void *VAR_20, const struct uni_funcs *VAR_21)
{
 struct uni *VAR_22;

 if ((VAR_22 = FUNC_0()) == ((void*)0))
  return (((void*)0));

 FUNC_3(VAR_22);

 VAR_22->funcs = VAR_21;
 VAR_22->arg = VAR_20;
 VAR_22->proto = VAR_0;
 VAR_22->sb_tb = 0;
 FUNC_1(&VAR_22->workq);
 FUNC_1(&VAR_22->delq);
 FUNC_2(VAR_22, VAR_17);
 VAR_22->timer309 = VAR_6;
 FUNC_1(&VAR_22->calls);
 FUNC_4(&VAR_22->cx);
 FUNC_2(VAR_22, VAR_19);
 FUNC_2(VAR_22, VAR_18);

 VAR_22->timer301 = VAR_1;
 VAR_22->init303 = VAR_2;
 VAR_22->timer303 = VAR_3;
 VAR_22->init308 = VAR_4;
 VAR_22->timer308 = VAR_5;
 VAR_22->timer310 = VAR_7;
 VAR_22->timer313 = VAR_8;
 VAR_22->init316 = VAR_9;
 VAR_22->timer316 = VAR_10;
 VAR_22->timer317 = VAR_11;
 VAR_22->timer322 = VAR_13;
 VAR_22->init322 = VAR_12;
 VAR_22->timer397 = VAR_14;
 VAR_22->timer398 = VAR_15;
 VAR_22->timer399 = VAR_16;

 return (VAR_22);
}
