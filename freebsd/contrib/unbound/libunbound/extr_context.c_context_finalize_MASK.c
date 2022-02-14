
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ub_ctx {int finalized; TYPE_1__* env; int local_zones; int mods; int log_out; scalar_t__ logfile_override; } ;
struct config_file {int msg_cache_size; int msg_cache_slabs; int module_conf; int use_syslog; int logfile; int verbosity; } ;
struct TYPE_3__ {int infra_cache; int rrset_cache; int alloc; struct config_file* cfg; int msg_cache; int auth_zones; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct config_file*,int) ;
 int FUNC_1 (struct config_file*) ;
 int FUNC_2 (int ,struct config_file*) ;
 int FUNC_3 (int ,struct config_file*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int *,int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,struct config_file*,int ) ;
 int FUNC_10 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_9 ;

int
FUNC_13(struct ub_ctx* VAR_10)
{
 struct config_file* VAR_11 = VAR_10->env->cfg;
 VAR_9 = VAR_11->verbosity;
 if(VAR_10->logfile_override)
  FUNC_6(VAR_10->log_out);
 else FUNC_7(VAR_11->logfile, VAR_11->use_syslog, ((void*)0));
 FUNC_1(VAR_11);
 if(!FUNC_8(&VAR_10->mods, VAR_11->module_conf, VAR_10->env))
  return VAR_1;
 FUNC_5(VAR_4, VAR_10->env);
 VAR_10->local_zones = FUNC_4();
 if(!VAR_10->local_zones)
  return VAR_3;
 if(!FUNC_3(VAR_10->local_zones, VAR_11))
  return VAR_1;
 if(!FUNC_0(VAR_10->env->auth_zones, VAR_11, 1))
  return VAR_1;
 if(!FUNC_12(VAR_10->env->msg_cache, VAR_11->msg_cache_size,
  VAR_11->msg_cache_slabs)) {
  FUNC_11(VAR_10->env->msg_cache);
  VAR_10->env->msg_cache = FUNC_10(VAR_11->msg_cache_slabs,
   VAR_0, VAR_11->msg_cache_size,
   VAR_5, VAR_7,
   VAR_6, VAR_8, ((void*)0));
  if(!VAR_10->env->msg_cache)
   return VAR_3;
 }
 VAR_10->env->rrset_cache = FUNC_9(VAR_10->env->rrset_cache,
  VAR_10->env->cfg, VAR_10->env->alloc);
 if(!VAR_10->env->rrset_cache)
  return VAR_3;
 VAR_10->env->infra_cache = FUNC_2(VAR_10->env->infra_cache, VAR_11);
 if(!VAR_10->env->infra_cache)
  return VAR_3;
 VAR_10->finalized = 1;
 return VAR_2;
}
