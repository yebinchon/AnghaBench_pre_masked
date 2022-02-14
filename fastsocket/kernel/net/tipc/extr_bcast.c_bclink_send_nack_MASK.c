
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int nack_sync; int gap_to; int gap_after; int last_in; } ;
struct tipc_node {TYPE_2__ bclink; int addr; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int bearer; } ;
struct TYPE_6__ {int bearer_congs; int sent_nacks; } ;
struct TYPE_8__ {TYPE_1__ stats; struct sk_buff* proto_msg_queue; int b_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_3__* VAR_4 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 int FUNC_10 (struct tipc_msg*,int ) ;
 int FUNC_11 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_12 (int *,struct sk_buff*,int *) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(struct tipc_node *VAR_7)
{
 struct sk_buff *VAR_8;
 struct tipc_msg *VAR_9;

 if (!FUNC_3(VAR_7->bclink.gap_after, VAR_7->bclink.gap_to))
  return;

 VAR_8 = FUNC_0(VAR_1);
 if (VAR_8) {
  VAR_9 = FUNC_2(VAR_8);
  FUNC_5(VAR_9, VAR_0, VAR_2,
    VAR_1, VAR_7->addr);
  FUNC_10(VAR_9, VAR_5);
  FUNC_6(VAR_9, FUNC_4(VAR_7->bclink.last_in));
  FUNC_8(VAR_9, VAR_7->bclink.gap_after);
  FUNC_9(VAR_9, VAR_7->bclink.gap_to);
  FUNC_7(VAR_9, VAR_6);

  if (FUNC_12(&VAR_3->bearer, VAR_8, ((void*)0))) {
   VAR_4->stats.sent_nacks++;
   FUNC_1(VAR_8);
  } else {
   FUNC_11(VAR_4->b_ptr, VAR_4);
   VAR_4->proto_msg_queue = VAR_8;
   VAR_4->stats.bearer_congs++;
  }







  VAR_7->bclink.nack_sync = VAR_6;
 }
}
