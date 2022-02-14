
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct daemon {TYPE_1__* env; int superalloc; struct config_file* cfg; } ;
struct config_file {int msg_cache_size; int msg_cache_slabs; } ;
struct TYPE_2__ {int infra_cache; int rrset_cache; int msg_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct config_file*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct config_file*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,struct config_file*,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

void FUNC_7(struct daemon* VAR_5, struct config_file* VAR_6)
{
        VAR_5->cfg = VAR_6;
 FUNC_0(VAR_6);
 if(!FUNC_6(VAR_5->env->msg_cache, VAR_6->msg_cache_size,
     VAR_6->msg_cache_slabs)) {
  FUNC_5(VAR_5->env->msg_cache);
  VAR_5->env->msg_cache = FUNC_4(VAR_6->msg_cache_slabs,
   VAR_0, VAR_6->msg_cache_size,
   VAR_1, VAR_3,
   VAR_2, VAR_4, ((void*)0));
  if(!VAR_5->env->msg_cache) {
   FUNC_1("malloc failure updating config settings");
  }
 }
 if((VAR_5->env->rrset_cache = FUNC_3(
  VAR_5->env->rrset_cache, VAR_6, &VAR_5->superalloc)) == 0)
  FUNC_1("malloc failure updating config settings");
 if((VAR_5->env->infra_cache = FUNC_2(VAR_5->env->infra_cache,
  VAR_6))==0)
  FUNC_1("malloc failure updating config settings");
}
