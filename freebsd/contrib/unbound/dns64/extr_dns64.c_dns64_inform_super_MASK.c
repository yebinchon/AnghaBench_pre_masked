
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ qtype; } ;
struct module_qstate {scalar_t__ return_rcode; int query_flags; TYPE_1__* return_msg; TYPE_2__ qinfo; int env; int no_cache_store; struct dns64_qstate** minfo; int region; } ;
struct dns64_qstate {int started_no_cache_store; int state; } ;
struct TYPE_4__ {int rep; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct module_qstate*,struct module_qstate*) ;
 int FUNC_1 (struct module_qstate*,struct module_qstate*) ;
 int FUNC_2 (int ,TYPE_2__*,int ,int ,int ,int ,int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,TYPE_2__*) ;
 int FUNC_6 (struct dns64_qstate*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int) ;

void
FUNC_8(struct module_qstate* VAR_5, int VAR_6,
  struct module_qstate* VAR_7)
{
 struct dns64_qstate* VAR_8 = (struct dns64_qstate*)VAR_7->minfo[VAR_6];
 FUNC_5(VAR_4, "dns64: inform_super, sub is",
         &VAR_5->qinfo);
 FUNC_5(VAR_4, "super is", &VAR_7->qinfo);





 if(!VAR_8) {
  VAR_8 = (struct dns64_qstate*)FUNC_7(VAR_7->region,
   sizeof(*VAR_8));
  VAR_7->minfo[VAR_6] = VAR_8;
  FUNC_6(VAR_8, 0, sizeof(*VAR_8));
  VAR_8->started_no_cache_store = VAR_7->no_cache_store;
 }
 VAR_8->state = VAR_0;


 if (VAR_5->return_rcode != VAR_1
     || !VAR_5->return_msg
     || !VAR_5->return_msg->rep) {
  return;
 }


 if (VAR_7->return_rcode != VAR_1)
  VAR_7->return_rcode = VAR_5->return_rcode;


 if (VAR_5->qinfo.qtype == VAR_2) {
  FUNC_0(VAR_6, VAR_7, VAR_5);
 } else {
  FUNC_3(VAR_5->qinfo.qtype == VAR_3);
  FUNC_1(VAR_5, VAR_7);
 }


 if ( (!VAR_8 || !VAR_8->started_no_cache_store) &&
  !FUNC_2(VAR_7->env, &VAR_7->qinfo, VAR_7->return_msg->rep,
  0, 0, 0, ((void*)0), VAR_7->query_flags))
  FUNC_4("out of memory");
}
