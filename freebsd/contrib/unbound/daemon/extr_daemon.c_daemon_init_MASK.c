
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_env {struct module_env* env; int tcl; int acl; int auth_zones; int time_boot; int time_last_stat; int superalloc; int mods; scalar_t__ need_to_exit; } ;
struct daemon {struct daemon* env; int tcl; int acl; int auth_zones; int time_boot; int time_last_stat; int superalloc; int mods; scalar_t__ need_to_exit; } ;
typedef int WSADATA ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (int,int) ;
 int FUNC_15 () ;
 void* VAR_5 ;
 int FUNC_16 (struct module_env*) ;
 int FUNC_17 (struct module_env*) ;
 int VAR_6 ;
 int FUNC_18 (char*,...) ;
 int FUNC_19 (struct module_env*) ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 (int *,int *) ;
 int FUNC_22 (char*,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 (int ) ;
 int FUNC_27 () ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int *) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 (unsigned int) ;
 int FUNC_33 (int) ;

struct daemon*
FUNC_34(void)
{
 struct daemon* VAR_7 = (struct daemon*)FUNC_14(1,
  sizeof(struct daemon));




 if(!VAR_7)
  return ((void*)0);







 FUNC_24();
 FUNC_15();
 FUNC_32((unsigned)FUNC_29(((void*)0))^(unsigned)FUNC_20()^0xe67);
 VAR_7->need_to_exit = 0;
 FUNC_23(&VAR_7->mods);
 if(!(VAR_7->env = (struct module_env*)FUNC_14(1,
  sizeof(*VAR_7->env)))) {
  FUNC_19(VAR_7);
  return ((void*)0);
 }

 if(!FUNC_17(VAR_7->env)) {
  FUNC_19(VAR_7->env);
  FUNC_19(VAR_7);
  return ((void*)0);
 }
 FUNC_12(&VAR_7->superalloc, ((void*)0), 0);
 VAR_7->acl = FUNC_10();
 if(!VAR_7->acl) {
  FUNC_16(VAR_7->env);
  FUNC_19(VAR_7->env);
  FUNC_19(VAR_7);
  return ((void*)0);
 }
 VAR_7->tcl = FUNC_27();
 if(!VAR_7->tcl) {
  FUNC_11(VAR_7->acl);
  FUNC_16(VAR_7->env);
  FUNC_19(VAR_7->env);
  FUNC_19(VAR_7);
  return ((void*)0);
 }
 if(FUNC_21(&VAR_7->time_boot, ((void*)0)) < 0)
  FUNC_22("gettimeofday: %s", FUNC_26(VAR_6));
 VAR_7->time_last_stat = VAR_7->time_boot;
 if((VAR_7->env->auth_zones = FUNC_13()) == 0) {
  FUNC_11(VAR_7->acl);
  FUNC_28(VAR_7->tcl);
  FUNC_16(VAR_7->env);
  FUNC_19(VAR_7->env);
  FUNC_19(VAR_7);
  return ((void*)0);
 }
 return VAR_7;
}
