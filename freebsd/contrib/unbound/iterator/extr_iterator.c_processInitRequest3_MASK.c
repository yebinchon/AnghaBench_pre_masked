
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct module_qstate {int query_flags; TYPE_3__* env; int region; scalar_t__ reply_origin; int qinfo; } ;
struct TYPE_5__ {int qclass; } ;
struct iter_qstate {int chase_flags; scalar_t__ dnssec_expected; TYPE_4__* response; TYPE_4__* deleg_msg; TYPE_1__ qchase; int dp; } ;
struct TYPE_8__ {int rep; int qinfo; } ;
struct TYPE_7__ {int (* detach_subs ) (struct module_qstate*) ;TYPE_2__* cfg; } ;
struct TYPE_6__ {scalar_t__ prefetch_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iter_qstate*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int (*) (struct module_qstate*)) ;
 int FUNC_3 (struct module_qstate*,struct iter_qstate*,int) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int ,TYPE_4__*,int ) ;
 int FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (struct iter_qstate*,int ) ;
 int FUNC_8 (scalar_t__*,int *,int ,int ) ;
 int FUNC_9 (struct module_qstate*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_10(struct module_qstate* VAR_6, struct iter_qstate* VAR_7,
 int VAR_8)
{
 FUNC_6(VAR_4, "resolving (init part 3): ",
  &VAR_6->qinfo);


 VAR_7->dnssec_expected = FUNC_4(VAR_6->env, VAR_7->dp,
  VAR_7->deleg_msg, VAR_7->qchase.qclass);



 if(!(VAR_6->query_flags & VAR_1) && VAR_7->deleg_msg) {
  VAR_7->response = VAR_7->deleg_msg;
  if(VAR_5 >= VAR_3 && VAR_7->response)
   FUNC_5("no RD requested, using delegation msg",
    &VAR_7->response->qinfo, VAR_7->response->rep);
  if(VAR_6->reply_origin)
   FUNC_8(&VAR_6->reply_origin, ((void*)0), 0, VAR_6->region);
  return FUNC_0(VAR_7);
 }


 VAR_7->chase_flags &= ~VAR_1;


 if(VAR_7->dnssec_expected && VAR_6->env->cfg->prefetch_key &&
  !(VAR_6->query_flags&VAR_0)) {
  FUNC_3(VAR_6, VAR_7, VAR_8);
  FUNC_1(FUNC_2(
   VAR_6->env->detach_subs));
  (*VAR_6->env->detach_subs)(VAR_6);
 }


 return FUNC_7(VAR_7, VAR_2);
}
