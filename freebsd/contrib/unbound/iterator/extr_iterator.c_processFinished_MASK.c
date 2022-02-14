
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct module_qstate {int query_flags; TYPE_4__* return_msg; int return_rcode; int region; int prefetch_leeway; int qinfo; int env; int no_cache_store; int * ext_state; } ;
struct iter_qstate {TYPE_4__* response; TYPE_2__* dp; scalar_t__ ns_prepend_list; scalar_t__ an_prepend_list; TYPE_1__* deleg_msg; int pside_glue; scalar_t__ query_for_pside_glue; } ;
struct TYPE_9__ {TYPE_3__* rep; int qinfo; } ;
struct TYPE_8__ {int security; int flags; } ;
struct TYPE_7__ {scalar_t__ has_parent_side_NS; } ;
struct TYPE_6__ {TYPE_3__* rep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct module_qstate*,char*) ;
 int FUNC_1 (struct module_qstate*,int,int ) ;
 int FUNC_2 (int ,int *,TYPE_3__*,int ,int ,int,int ,int) ;
 int FUNC_3 (struct iter_qstate*,TYPE_4__*,int ) ;
 int FUNC_4 (int ,int *,TYPE_3__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct module_qstate* VAR_10, struct iter_qstate* VAR_11,
 int VAR_12)
{
 FUNC_6(VAR_7, "finishing processing for",
  &VAR_10->qinfo);


 if(!VAR_10->no_cache_store && VAR_11->query_for_pside_glue
  && !VAR_11->pside_glue)
   FUNC_4(VAR_10->env, &VAR_10->qinfo,
    VAR_11->deleg_msg?VAR_11->deleg_msg->rep:
    (VAR_11->response?VAR_11->response->rep:((void*)0)));
 if(!VAR_11->response) {
  FUNC_7(VAR_6, "No response is set, servfail");
  FUNC_0(VAR_10, "(no response found at query finish)");
  return FUNC_1(VAR_10, VAR_12, VAR_5);
 }



 VAR_11->response->rep->flags |= VAR_2;



 VAR_11->response->rep->flags &= ~VAR_0;


 VAR_11->response->rep->flags |= VAR_1;


 VAR_10->ext_state[VAR_12] = VAR_8;





 if(VAR_11->an_prepend_list || VAR_11->ns_prepend_list) {
  if(!FUNC_3(VAR_11, VAR_11->response, VAR_10->region)) {
   FUNC_5("prepend rrsets: out of memory");
   return FUNC_1(VAR_10, VAR_12, VAR_5);
  }

  VAR_11->response->qinfo = VAR_10->qinfo;

  VAR_11->response->rep->security = VAR_9;



  if(!VAR_10->no_cache_store && VAR_10->query_flags&VAR_3) {
   FUNC_2(VAR_10->env, &VAR_10->qinfo,
    VAR_11->response->rep, 0, VAR_10->prefetch_leeway,
    VAR_11->dp&&VAR_11->dp->has_parent_side_NS,
    VAR_10->region, VAR_10->query_flags);
  }
 }
 VAR_10->return_rcode = VAR_4;
 VAR_10->return_msg = VAR_11->response;
 return 0;
}
