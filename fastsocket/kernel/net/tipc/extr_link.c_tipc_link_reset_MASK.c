
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {struct sk_buff* next; } ;
struct link {scalar_t__ state; scalar_t__ next_in_no; int checkpoint; int next_out_no; int addr; scalar_t__ stale_count; scalar_t__ fsm_msg_cnt; int * newest_deferred_in; struct sk_buff* oldest_deferred_in; scalar_t__ deferred_inqueue_sz; scalar_t__ unacked_window; int * next_out; int * first_out; int * last_out; scalar_t__ retransm_queue_size; scalar_t__ retransm_queue_head; int waiting_ports; struct sk_buff* proto_msg_queue; int exp_msg_count; scalar_t__ reset_checkpoint; TYPE_1__* owner; int name; int b_ptr; int peer_session; int pmsg; } ;
struct TYPE_3__ {scalar_t__ permit_changeover; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct link*) ;
 int FUNC_5 (struct link*) ;
 int FUNC_6 (struct link*) ;
 int FUNC_7 (int ,struct link*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct link*) ;
 int FUNC_13 (struct link*,int) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,struct link*) ;
 int FUNC_16 (int ,char*,int ) ;

void FUNC_17(struct link *VAR_7)
{
 struct sk_buff *VAR_8;
 u32 VAR_9 = VAR_7->state;
 u32 VAR_10 = VAR_7->next_in_no;
 int VAR_11 = FUNC_12(VAR_7);

 FUNC_10(VAR_7->pmsg, ((FUNC_9(VAR_7->pmsg) + 1) & 0xffff));


 VAR_7->peer_session = VAR_0;


 FUNC_4(VAR_7);

 VAR_7->state = VAR_2;
 FUNC_2("Resetting Link\n");

 if ((VAR_9 == VAR_2) || (VAR_9 == VAR_1))
  return;

 FUNC_15(VAR_7->owner, VAR_7);
 FUNC_11(VAR_7->b_ptr, VAR_7->addr);




 if (VAR_11 && FUNC_14(VAR_7->owner) &&
     VAR_7->owner->permit_changeover) {
  VAR_7->reset_checkpoint = VAR_10;
  VAR_7->exp_msg_count = VAR_3;
 }



 FUNC_5(VAR_7);
 FUNC_0(VAR_7->proto_msg_queue);
 VAR_7->proto_msg_queue = ((void*)0);
 VAR_8 = VAR_7->oldest_deferred_in;
 while (VAR_8) {
  struct sk_buff *VAR_12 = VAR_8->next;
  FUNC_0(VAR_8);
  VAR_8 = VAR_12;
 }
 if (!FUNC_8(&VAR_7->waiting_ports))
  FUNC_13(VAR_7, 1);

 VAR_7->retransm_queue_head = 0;
 VAR_7->retransm_queue_size = 0;
 VAR_7->last_out = ((void*)0);
 VAR_7->first_out = ((void*)0);
 VAR_7->next_out = ((void*)0);
 VAR_7->unacked_window = 0;
 VAR_7->checkpoint = 1;
 VAR_7->next_out_no = 1;
 VAR_7->deferred_inqueue_sz = 0;
 VAR_7->oldest_deferred_in = ((void*)0);
 VAR_7->newest_deferred_in = ((void*)0);
 VAR_7->fsm_msg_cnt = 0;
 VAR_7->stale_count = 0;
 FUNC_6(VAR_7);

 FUNC_7(VAR_5, VAR_7, 0);
 if (!FUNC_3(VAR_7->addr))
  FUNC_7(VAR_6, VAR_7, 0);
}
