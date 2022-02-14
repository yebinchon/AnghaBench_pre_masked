
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct query_info {int qtype; } ;
struct module_qstate {int curmod; int ** minfo; int * ext_state; int query_flags; TYPE_1__* env; struct query_info qinfo; } ;
typedef enum module_ext_state { ____Placeholder_module_ext_state } module_ext_state ;
struct TYPE_2__ {int (* attach_sub ) (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int (*) (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**)) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct module_qstate*,struct query_info*,int ,int ,int ,struct module_qstate**) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static enum module_ext_state
FUNC_4(struct module_qstate* VAR_5, int VAR_6)
{
 struct module_qstate* VAR_7 = ((void*)0);
 struct query_info VAR_8;

 FUNC_3(VAR_1, "dns64: query A record");


 VAR_8 = VAR_5->qinfo;
 VAR_8.qtype = VAR_0;


 FUNC_0(FUNC_1(VAR_5->env->attach_sub));
 if(!(*VAR_5->env->attach_sub)(VAR_5, &VAR_8, VAR_5->query_flags, 0,
           0, &VAR_7))
 {
  FUNC_3(VAR_1, "dns64: sub-query creation failed");
  return VAR_2;
 }
 if (VAR_7) {
  VAR_7->curmod = VAR_6;
  VAR_7->ext_state[VAR_6] = VAR_3;
  VAR_7->minfo[VAR_6] = ((void*)0);
 }

 return VAR_4;
}
