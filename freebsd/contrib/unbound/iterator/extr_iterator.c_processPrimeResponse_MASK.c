
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int qclass; int qtype; int qname_len; int qname; } ;
struct module_qstate {int * ext_state; TYPE_4__ qinfo; TYPE_3__* env; TYPE_5__* return_msg; int return_rcode; scalar_t__* minfo; } ;
struct iter_qstate {int chase_flags; TYPE_5__* response; int dp; int qchase; scalar_t__ chase_to_rd; } ;
typedef enum response_type { ____Placeholder_response_type } response_type ;
struct TYPE_10__ {TYPE_1__* rep; } ;
struct TYPE_8__ {TYPE_2__* cfg; } ;
struct TYPE_7__ {scalar_t__ harden_referral_path; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct module_qstate*,char*) ;
 int FUNC_1 (struct module_qstate*,char*,int ) ;
 int FUNC_2 (struct module_qstate*,struct iter_qstate*,int) ;
 int FUNC_3 (int ,int ,int ,int ,struct module_qstate*,int,struct iter_qstate*,int ,int ,struct module_qstate**,int) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (int,TYPE_5__*,int *,int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static int
FUNC_7(struct module_qstate* VAR_9, int VAR_10)
{
 struct iter_qstate* VAR_11 = (struct iter_qstate*)VAR_9->minfo[VAR_10];
 enum response_type VAR_12;
 VAR_11->response->rep->flags &= ~(VAR_1|VAR_0);
 VAR_12 = FUNC_5(
  (int)((VAR_11->chase_flags&VAR_1) || VAR_11->chase_to_rd),
  VAR_11->response, &VAR_11->qchase, VAR_11->dp);
 if(VAR_12 == VAR_6) {
  VAR_9->return_rcode = VAR_4;
  VAR_9->return_msg = VAR_11->response;
 } else {
  FUNC_0(VAR_9, "prime response did not get an answer");
  FUNC_1(VAR_9, "for", VAR_9->qinfo.qname);
  VAR_9->return_rcode = VAR_5;
  VAR_9->return_msg = ((void*)0);
 }





 if(VAR_9->env->cfg->harden_referral_path) {
  struct module_qstate* VAR_13 = ((void*)0);
  FUNC_4(VAR_7, "schedule prime validation",
   VAR_9->qinfo.qname, VAR_9->qinfo.qtype,
   VAR_9->qinfo.qclass);
  if(!FUNC_3(VAR_9->qinfo.qname,
   VAR_9->qinfo.qname_len, VAR_9->qinfo.qtype,
   VAR_9->qinfo.qclass, VAR_9, VAR_10, VAR_11,
   VAR_3, VAR_2, &VAR_13, 1)) {
   FUNC_6(VAR_7, "could not generate prime check");
  }
  FUNC_2(VAR_9, VAR_11, VAR_10);
 }


 VAR_9->ext_state[VAR_10] = VAR_8;
 return 0;
}
