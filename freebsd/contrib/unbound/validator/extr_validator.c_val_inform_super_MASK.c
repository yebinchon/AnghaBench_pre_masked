
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct val_qstate {scalar_t__ wait_prime_ta; } ;
struct TYPE_5__ {scalar_t__ qtype; } ;
struct module_qstate {TYPE_1__ qinfo; int return_msg; int return_rcode; int reply_origin; scalar_t__* minfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (struct module_qstate*,struct val_qstate*,int,int ,int ,TYPE_1__*) ;
 int FUNC_3 (struct module_qstate*,struct val_qstate*,int,int ,int ,TYPE_1__*,int ) ;
 int FUNC_4 (struct module_qstate*,struct val_qstate*,int,int ,int ,TYPE_1__*,int ) ;
 int FUNC_5 (struct module_qstate*,struct val_qstate*,int,int ,int ,int ) ;
 int FUNC_6 (int ,char*) ;

void
FUNC_7(struct module_qstate* VAR_4, int VAR_5,
 struct module_qstate* VAR_6)
{
 struct val_qstate* VAR_7 = (struct val_qstate*)VAR_6->minfo[VAR_5];
 FUNC_1(VAR_3, "validator: inform_super, sub is",
  &VAR_4->qinfo);
 FUNC_1(VAR_3, "super is", &VAR_6->qinfo);
 if(!VAR_7) {
  FUNC_6(VAR_3, "super: has no validator state");
  return;
 }
 if(VAR_7->wait_prime_ta) {
  VAR_7->wait_prime_ta = 0;
  FUNC_5(VAR_6, VAR_7, VAR_5, VAR_4->return_rcode,
   VAR_4->return_msg, VAR_4->reply_origin);
  return;
 }
 if(VAR_4->qinfo.qtype == VAR_2) {
  FUNC_4(VAR_6, VAR_7, VAR_5, VAR_4->return_rcode,
   VAR_4->return_msg, &VAR_4->qinfo,
   VAR_4->reply_origin);
  return;
 } else if(VAR_4->qinfo.qtype == VAR_1) {
  FUNC_3(VAR_6, VAR_7, VAR_5, VAR_4->return_rcode,
   VAR_4->return_msg, &VAR_4->qinfo,
   VAR_4->reply_origin);
  return;
 } else if(VAR_4->qinfo.qtype == VAR_0) {
  FUNC_2(VAR_6, VAR_7, VAR_5, VAR_4->return_rcode,
   VAR_4->return_msg, &VAR_4->qinfo);
  return;
 }
 FUNC_0("internal error in validator: no inform_supers possible");
}
