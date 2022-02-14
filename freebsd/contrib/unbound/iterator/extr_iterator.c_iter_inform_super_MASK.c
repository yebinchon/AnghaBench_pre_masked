
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qclass; scalar_t__ qtype; } ;
struct module_qstate {scalar_t__ return_rcode; scalar_t__ is_priming; scalar_t__* minfo; TYPE_1__ qinfo; } ;
struct iter_qstate {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct module_qstate*,int,struct module_qstate*) ;
 int FUNC_1 (struct module_qstate*,int,struct module_qstate*) ;
 int FUNC_2 (struct module_qstate*,int,struct module_qstate*) ;
 int FUNC_3 (struct module_qstate*,int,struct module_qstate*) ;
 int FUNC_4 (struct module_qstate*,int,struct module_qstate*) ;

void
FUNC_5(struct module_qstate* VAR_4, int VAR_5,
 struct module_qstate* VAR_6)
{
 if(!VAR_4->is_priming && VAR_6->qinfo.qclass == VAR_2)
  FUNC_2(VAR_4, VAR_5, VAR_6);
 else if(VAR_6->qinfo.qtype == VAR_3 && ((struct iter_qstate*)
  VAR_6->minfo[VAR_5])->state == VAR_0)
  FUNC_3(VAR_4, VAR_5, VAR_6);
 else if(VAR_4->return_rcode != VAR_1)
  FUNC_0(VAR_4, VAR_5, VAR_6);
 else if(VAR_4->is_priming)
  FUNC_1(VAR_4, VAR_5, VAR_6);
 else FUNC_4(VAR_4, VAR_5, VAR_6);
}
