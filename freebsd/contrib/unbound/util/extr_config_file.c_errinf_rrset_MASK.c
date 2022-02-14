
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int t ;
struct TYPE_6__ {int dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_3__ rk; } ;
struct module_qstate {TYPE_2__* env; } ;
typedef int c ;
typedef int buf ;
struct TYPE_5__ {TYPE_1__* cfg; } ;
struct TYPE_4__ {int val_log_level; int log_servfail; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct module_qstate*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*,int,char*,char*,char*,char*) ;

void FUNC_6(struct module_qstate* VAR_1, struct ub_packed_rrset_key *VAR_2)
{
 char VAR_3[1024];
 char VAR_4[VAR_0+1];
 char VAR_5[16], VAR_6[16];
 if((VAR_1->env->cfg->val_log_level < 2 && !VAR_1->env->cfg->log_servfail) || !VAR_2)
  return;
 FUNC_4(FUNC_2(VAR_2->rk.type), VAR_5, sizeof(VAR_5));
 FUNC_3(FUNC_2(VAR_2->rk.rrset_class), VAR_6, sizeof(VAR_6));
 FUNC_0(VAR_2->rk.dname, VAR_4);
 FUNC_5(VAR_3, sizeof(VAR_3), "for <%s %s %s>", VAR_4, VAR_5, VAR_6);
 FUNC_1(VAR_1, VAR_3);
}
