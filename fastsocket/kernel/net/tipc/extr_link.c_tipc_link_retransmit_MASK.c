
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_6__ {int bearer_congs; int retransmitted; } ;
struct link {scalar_t__ last_retransmitted; int stale_count; void* retransm_queue_size; void* retransm_queue_head; TYPE_3__ stats; int b_ptr; int media_addr; TYPE_2__* owner; scalar_t__ next_in_no; struct sk_buff* next_out; } ;
struct TYPE_4__ {int last_in; } ;
struct TYPE_5__ {TYPE_1__ bclink; } ;


 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,void*,struct link*) ;
 int FUNC_2 (struct link*,char*) ;
 int FUNC_3 (struct link*,struct sk_buff*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct tipc_msg*,char*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ,struct link*) ;
 int FUNC_11 (int ,struct link*) ;
 scalar_t__ FUNC_12 (int ,struct sk_buff*,int *) ;

void FUNC_13(struct link *VAR_0, struct sk_buff *VAR_1,
     u32 VAR_2)
{
 struct tipc_msg *VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = FUNC_0(VAR_1);

 FUNC_1("Retransmitting %u in link %x\n", VAR_2, VAR_0);

 if (FUNC_10(VAR_0->b_ptr, VAR_0)) {
  if (!FUNC_9(VAR_1)) {
   FUNC_5(VAR_3, ">NO_RETR->BCONG>");
   FUNC_2(VAR_0, "   ");
   VAR_0->retransm_queue_head = FUNC_6(VAR_3);
   VAR_0->retransm_queue_size = VAR_2;
   return;
  } else {

  }
 } else {


  if (VAR_0->last_retransmitted == FUNC_6(VAR_3)) {
   if (++VAR_0->stale_count > 100) {
    FUNC_3(VAR_0, VAR_1);
    return;
   }
  } else {
   VAR_0->last_retransmitted = FUNC_6(VAR_3);
   VAR_0->stale_count = 1;
  }
 }

 while (VAR_2 && (VAR_1 != VAR_0->next_out) && VAR_1 && !FUNC_9(VAR_1)) {
  VAR_3 = FUNC_0(VAR_1);
  FUNC_7(VAR_3, FUNC_4(VAR_0->next_in_no - 1));
  FUNC_8(VAR_3, VAR_0->owner->bclink.last_in);
  if (FUNC_12(VAR_0->b_ptr, VAR_1, &VAR_0->media_addr)) {
   FUNC_5(FUNC_0(VAR_1), ">RETR>");
   VAR_1 = VAR_1->next;
   VAR_2--;
   VAR_0->stats.retransmitted++;
  } else {
   FUNC_11(VAR_0->b_ptr, VAR_0);
   VAR_0->stats.bearer_congs++;
   VAR_0->retransm_queue_head = FUNC_6(FUNC_0(VAR_1));
   VAR_0->retransm_queue_size = VAR_2;
   return;
  }
 }

 VAR_0->retransm_queue_head = VAR_0->retransm_queue_size = 0;
}
