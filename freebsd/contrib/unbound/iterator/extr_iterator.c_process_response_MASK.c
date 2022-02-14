
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct outbound_entry {int dummy; } ;
struct msg_parse {int flags; scalar_t__ opt_list; } ;
struct module_qstate {TYPE_4__* env; TYPE_3__* reply; int qinfo; int region; int edns_opts_back_in; } ;
struct iter_qstate {int sent_count; int caps_fallback; int caps_server; scalar_t__ caps_minimisation_state; scalar_t__ minimisation_state; int outlist; int num_current_queries; void* state; int * caps_reply; TYPE_7__* response; TYPE_7__* caps_response; TYPE_5__* dp; int qinfo_out; } ;
struct iter_env {int dummy; } ;
struct edns_data {int flags; scalar_t__ opt_list; } ;
typedef int sldns_buffer ;
typedef enum module_ev { ____Placeholder_module_ev } module_ev ;
typedef int edns ;
struct TYPE_13__ {int * rep; int qinfo; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int scratch; TYPE_1__* cfg; } ;
struct TYPE_10__ {int addrlen; int addr; TYPE_2__* c; } ;
struct TYPE_9__ {int * buffer; } ;
struct TYPE_8__ {scalar_t__ qname_minimisation; scalar_t__ use_caps_bits_for_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_7__* FUNC_2 (int *,struct msg_parse*,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct module_qstate*,char*) ;
 int FUNC_5 (struct module_qstate*,int,int ) ;
 int FUNC_6 (TYPE_4__*,struct module_qstate*) ;
 int FUNC_7 (struct iter_env*,struct iter_qstate*) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (struct module_qstate*,struct iter_qstate*,struct iter_env*,int) ;
 int FUNC_10 (char*,int *,int *) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__,char*,int ,int *,int ) ;
 int FUNC_13 (scalar_t__,char*,int *) ;
 int FUNC_14 (struct msg_parse*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (int *,struct outbound_entry*) ;
 scalar_t__ FUNC_16 (struct msg_parse*,struct msg_parse*,int ) ;
 scalar_t__ FUNC_17 (int *,struct msg_parse*,int ) ;
 scalar_t__ FUNC_18 (int ,int) ;
 int FUNC_19 (int *,int *,int ) ;
 int FUNC_20 (int *,struct msg_parse*,int *,int ,int ,TYPE_4__*,struct iter_env*) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (scalar_t__,char*) ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static void
FUNC_23(struct module_qstate* VAR_14, struct iter_qstate* VAR_15,
 struct iter_env* VAR_16, int VAR_17, struct outbound_entry* VAR_18,
 enum module_ev VAR_19)
{
 struct msg_parse* VAR_20;
 struct edns_data VAR_21;
 sldns_buffer* VAR_22;

 FUNC_22(VAR_7, "process_response: new external response event");
 VAR_15->response = ((void*)0);
 VAR_15->state = VAR_5;
 if(VAR_19 == VAR_11 || VAR_19 == VAR_10) {
  if(VAR_19 == VAR_11 && VAR_15->sent_count >= 3 &&
   VAR_14->env->cfg->use_caps_bits_for_id &&
   !VAR_15->caps_fallback && !FUNC_7(VAR_16, VAR_15)) {

   VAR_15->caps_fallback = 1;
   VAR_15->caps_server = 0;
   VAR_15->caps_reply = ((void*)0);
   VAR_15->caps_response = ((void*)0);
   VAR_15->caps_minimisation_state = VAR_1;
   VAR_15->state = VAR_4;
   VAR_15->num_current_queries--;


   FUNC_8(VAR_15->dp, 3);
   FUNC_22(VAR_8, "Capsforid: timeouts, starting fallback");
   goto handle_it;
  }
  goto handle_it;
 }
 if( (VAR_19 != VAR_12 && VAR_19 != VAR_9)
  || !VAR_14->reply) {
  FUNC_11("Bad event combined with response");
  FUNC_15(&VAR_15->outlist, VAR_18);
  FUNC_4(VAR_14, "module iterator received wrong internal event with a response message");
  (void)FUNC_5(VAR_14, VAR_17, VAR_3);
  return;
 }


 VAR_20 = (struct msg_parse*)FUNC_18(VAR_14->env->scratch,
  sizeof(struct msg_parse));
 if(!VAR_20) {
  FUNC_11("out of memory on incoming message");

  goto handle_it;
 }
 FUNC_14(VAR_20, 0, sizeof(*VAR_20));
 FUNC_14(&VAR_21, 0, sizeof(VAR_21));
 VAR_22 = VAR_14->reply->c->buffer;
 FUNC_21(VAR_22, 0);
 if(FUNC_17(VAR_22, VAR_20, VAR_14->env->scratch) != VAR_2) {
  FUNC_22(VAR_7, "parse error on reply packet");
  goto handle_it;
 }

 if(FUNC_16(VAR_20, &VAR_21, VAR_14->env->scratch) !=
  VAR_2)
  goto handle_it;


 if(VAR_21.opt_list) {
  VAR_14->edns_opts_back_in = FUNC_3(VAR_21.opt_list,
   VAR_14->region);
  if(!VAR_14->edns_opts_back_in) {
   FUNC_11("out of memory on incoming message");

   goto handle_it;
  }
  if(!FUNC_6(VAR_14->env, VAR_14)) {
   FUNC_11("unable to call edns_back_parsed callback");
   goto handle_it;
  }
 }


 VAR_20->flags &= ~VAR_0;


 if(!FUNC_20(VAR_22, VAR_20, &VAR_15->qinfo_out, VAR_15->dp->name,
  VAR_14->env->scratch, VAR_14->env, VAR_16)) {

  if(VAR_19 == VAR_9 && !VAR_15->caps_fallback) {
   VAR_15->caps_fallback = 1;
   VAR_15->caps_server = 0;
   VAR_15->caps_reply = ((void*)0);
   VAR_15->caps_response = ((void*)0);
   VAR_15->caps_minimisation_state = VAR_1;
   VAR_15->state = VAR_4;
   VAR_15->num_current_queries--;
   FUNC_22(VAR_8, "Capsforid: scrub failed, starting fallback with no response");
  }
  goto handle_it;
 }


 VAR_15->response = FUNC_2(VAR_22, VAR_20, VAR_14->region);
 if(!VAR_15->response)
  goto handle_it;
 FUNC_13(VAR_8, "response for", &VAR_14->qinfo);
 FUNC_12(VAR_8, "reply from", VAR_15->dp->name,
  &VAR_14->reply->addr, VAR_14->reply->addrlen);
 if(VAR_13 >= VAR_7)
  FUNC_10("incoming scrubbed packet:", &VAR_15->response->qinfo,
   VAR_15->response->rep);

 if(VAR_19 == VAR_9 || VAR_15->caps_fallback) {
  if(VAR_14->env->cfg->qname_minimisation &&
   VAR_15->minimisation_state != VAR_1) {


   VAR_15->minimisation_state = VAR_6;
  }


  FUNC_1(VAR_15->response->rep);

  if(VAR_15->caps_fallback &&
   VAR_15->caps_minimisation_state != VAR_15->minimisation_state) {


   VAR_15->caps_fallback = 0;
  }

  if(!VAR_15->caps_fallback) {

   VAR_15->caps_fallback = 1;
   VAR_15->caps_server = 0;
   VAR_15->caps_reply = VAR_15->response->rep;
   VAR_15->caps_response = VAR_15->response;
   VAR_15->caps_minimisation_state = VAR_15->minimisation_state;
   VAR_15->state = VAR_4;
   VAR_15->num_current_queries--;
   FUNC_22(VAR_8, "Capsforid: starting fallback");
   goto handle_it;
  } else {

   if(!VAR_15->caps_reply) {
    VAR_15->caps_reply = VAR_15->response->rep;
    VAR_15->caps_response = VAR_15->response;
    VAR_15->caps_server = -1;

   } else if(FUNC_0(VAR_15->caps_reply) &&
    !FUNC_0(VAR_15->response->rep)) {

    VAR_15->caps_reply = VAR_15->response->rep;
    VAR_15->caps_response = VAR_15->response;
   } else if(!FUNC_0(VAR_15->caps_reply) &&
    FUNC_0(VAR_15->response->rep)) {




   } else if(FUNC_0(VAR_15->caps_reply) &&
    FUNC_0(VAR_15->response->rep)) {


   } else if(!FUNC_19(VAR_15->response->rep, VAR_15->caps_reply,
    VAR_14->env->scratch)) {
    FUNC_22(VAR_8, "Capsforid fallback: "
     "getting different replies, failed");
    FUNC_15(&VAR_15->outlist, VAR_18);
    FUNC_4(VAR_14, "0x20 failed, then got different replies in fallback");
    (void)FUNC_5(VAR_14, VAR_17,
     VAR_3);
    return;
   }

   VAR_15->caps_server++;
   VAR_15->state = VAR_4;
   VAR_15->num_current_queries--;
   FUNC_22(VAR_8, "Capsforid: reply is equal. "
    "go to next fallback");
   goto handle_it;
  }
 }
 VAR_15->caps_fallback = 0;

handle_it:
 FUNC_15(&VAR_15->outlist, VAR_18);
 FUNC_9(VAR_14, VAR_15, VAR_16, VAR_17);
}
