
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct sldns_buffer {int dummy; } ;
struct reply_info {int flags; } ;
struct TYPE_18__ {int qclass; int qtype; } ;
struct TYPE_14__ {scalar_t__ return_rcode; TYPE_8__* env; scalar_t__ is_drop; TYPE_4__ qinfo; TYPE_3__* respip_action_info; TYPE_1__* return_msg; } ;
struct TYPE_20__ {scalar_t__ count; } ;
struct mesh_state {int replies_sent; TYPE_11__ s; TYPE_6__ super_set; struct mesh_cb* cb_list; struct mesh_reply* reply_list; } ;
struct TYPE_13__ {TYPE_5__* c; } ;
struct mesh_reply {TYPE_10__ query_reply; int local_alias; int qname; struct mesh_reply* next; } ;
struct mesh_cb {struct mesh_cb* next; } ;
struct TYPE_23__ {struct sldns_buffer* spool_buffer; } ;
struct TYPE_22__ {TYPE_7__* mesh; TYPE_2__* cfg; } ;
struct TYPE_21__ {int num_detached_states; int num_reply_states; } ;
struct TYPE_19__ {TYPE_9__* tcp_req_info; struct sldns_buffer* buffer; } ;
struct TYPE_17__ {scalar_t__ addrinfo; } ;
struct TYPE_16__ {int val_log_squelch; scalar_t__ log_servfail; } ;
struct TYPE_15__ {struct reply_info* rep; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_10__*) ;
 char* FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (struct mesh_state*,scalar_t__,struct reply_info*,struct mesh_cb*) ;
 int FUNC_6 (struct mesh_state*,scalar_t__,struct reply_info*,struct mesh_reply*,struct sldns_buffer*,struct mesh_reply*,struct sldns_buffer*) ;
 int FUNC_7 (scalar_t__,int ,int ,int ,int ,TYPE_10__*) ;
 int FUNC_8 (TYPE_9__*,struct mesh_state*) ;

void FUNC_9(struct mesh_state* VAR_1)
{
 struct mesh_reply* VAR_2;
 struct mesh_reply* VAR_3 = ((void*)0);
 struct sldns_buffer* VAR_4 = ((void*)0);
 struct mesh_cb* VAR_5;
 struct reply_info* VAR_6 = (VAR_1->s.return_msg?
  VAR_1->s.return_msg->rep:((void*)0));
 if((VAR_1->s.return_rcode == VAR_0 ||
  (VAR_6 && FUNC_0(VAR_6->flags) == VAR_0))
  && VAR_1->s.env->cfg->log_servfail
  && !VAR_1->s.env->cfg->val_log_squelch) {
  char* VAR_7 = FUNC_2(&VAR_1->s);
  if(VAR_7)
   FUNC_4("%s", VAR_7);
  FUNC_3(VAR_7);
 }
 for(VAR_2 = VAR_1->reply_list; VAR_2; VAR_2 = VAR_2->next) {


  if(VAR_1->s.respip_action_info &&
   VAR_1->s.respip_action_info->addrinfo) {
   FUNC_7(VAR_1->s.respip_action_info->addrinfo,
    VAR_2->qname, VAR_1->s.qinfo.qtype,
    VAR_1->s.qinfo.qclass, VAR_2->local_alias,
    &VAR_2->query_reply);
  }



  if(VAR_1->s.is_drop)
   FUNC_1(&VAR_2->query_reply);
  else {
   struct sldns_buffer* VAR_8 = VAR_2->query_reply.c->buffer;
   if(VAR_2->query_reply.c->tcp_req_info) {
    VAR_8 = VAR_2->query_reply.c->tcp_req_info->spool_buffer;
    VAR_4 = ((void*)0);
   }
   FUNC_6(VAR_1, VAR_1->s.return_rcode, VAR_6,
    VAR_2, VAR_8, VAR_3, VAR_4);
   if(VAR_2->query_reply.c->tcp_req_info) {
    FUNC_8(VAR_2->query_reply.c->tcp_req_info, VAR_1);
    VAR_8 = ((void*)0);
   }
   VAR_3 = VAR_2;
   VAR_4 = VAR_8;
  }
 }
 VAR_1->replies_sent = 1;
 while((VAR_5 = VAR_1->cb_list) != ((void*)0)) {


  if(!VAR_1->reply_list && VAR_1->cb_list && !VAR_5->next) {

   VAR_1->s.env->mesh->num_reply_states--;
  }
  VAR_1->cb_list = VAR_5->next;
  if(!VAR_1->reply_list && !VAR_1->cb_list &&
   VAR_1->super_set.count == 0)
   VAR_1->s.env->mesh->num_detached_states++;
  FUNC_5(VAR_1, VAR_1->s.return_rcode, VAR_6, VAR_5);
 }
}
