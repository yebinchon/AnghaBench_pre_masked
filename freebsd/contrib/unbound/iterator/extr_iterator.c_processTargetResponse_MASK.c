
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dname; int dname_len; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; } ;
struct TYPE_6__ {int qname_len; int qname; } ;
struct module_qstate {scalar_t__ return_rcode; int region; TYPE_1__* return_msg; TYPE_3__ qinfo; scalar_t__* minfo; } ;
struct iter_qstate {int dp; int qchase; struct ub_packed_rrset_key* pside_glue; int num_target_queries; int state; } ;
struct delegpt_ns {int lame; int resolved; } ;
struct TYPE_4__ {int rep; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,struct ub_packed_rrset_key*,int) ;
 struct delegpt_ns* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,TYPE_3__*) ;
 int FUNC_7 (int ,char*,struct ub_packed_rrset_key*) ;
 struct ub_packed_rrset_key* FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,char*) ;

__attribute__((used)) static void
FUNC_10(struct module_qstate* VAR_3, int VAR_4,
 struct module_qstate* VAR_5)
{
 struct iter_qstate* VAR_6 = (struct iter_qstate*)VAR_3->minfo[VAR_4];
 struct iter_qstate* VAR_7 = (struct iter_qstate*)VAR_5->minfo[VAR_4];
 struct ub_packed_rrset_key* VAR_8;
 struct delegpt_ns* VAR_9;
 FUNC_4(VAR_3->return_rcode == VAR_0);

 VAR_7->state = VAR_1;
 FUNC_6(VAR_2, "processTargetResponse", &VAR_3->qinfo);
 FUNC_6(VAR_2, "processTargetResponse super", &VAR_5->qinfo);



 VAR_7->num_target_queries--;


 if(!VAR_7->dp) {
  FUNC_9(VAR_2, "subq: parent not interested, was reset");
  return;
 }
 VAR_9 = FUNC_2(VAR_7->dp, VAR_3->qinfo.qname,
   VAR_3->qinfo.qname_len);
 if(!VAR_9) {

  FUNC_9(VAR_2, "subq: parent not interested anymore");


  return;
 }


 if(VAR_6->pside_glue) {



  FUNC_7(VAR_2, "add parentside glue to dp",
   VAR_6->pside_glue);
  if(!FUNC_1(VAR_7->dp, VAR_5->region,
   VAR_6->pside_glue, 1))
   FUNC_5("out of memory adding pside glue");
 }






 VAR_8 = FUNC_8(&VAR_6->qchase, VAR_3->return_msg->rep);
 if(VAR_8) {


  if(!FUNC_2(VAR_7->dp, VAR_8->rk.dname,
   VAR_8->rk.dname_len)) {

   if(!FUNC_0(VAR_7->dp, VAR_5->region,
    VAR_8->rk.dname, VAR_9->lame))
    FUNC_5("out of memory adding cnamed-ns");
  }

  if(!FUNC_1(VAR_7->dp, VAR_5->region, VAR_8,
   VAR_9->lame))
   FUNC_5("out of memory adding targets");
  FUNC_9(VAR_2, "added target response");
  FUNC_3(VAR_2, VAR_7->dp);
 } else {
  FUNC_9(VAR_2, "iterator TargetResponse failed");
  VAR_9->resolved = 1;
 }
}
