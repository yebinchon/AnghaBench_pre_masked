
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ last_in; scalar_t__ gap_after; scalar_t__ gap_to; scalar_t__ nack_sync; int deferred_tail; struct sk_buff* deferred_head; int defragm; int supported; } ;
struct tipc_node {TYPE_2__ bclink; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_7__ {int duplicates; int deferred_recv; int recv_fragmented; int recv_fragments; int recv_bundled; int recv_bundles; int sent_acks; int recv_info; int recv_nacks; } ;
struct TYPE_8__ {TYPE_3__ stats; TYPE_1__* owner; } ;
struct TYPE_5__ {struct tipc_node* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tipc_node*) ;
 int FUNC_3 (struct tipc_node*) ;
 int FUNC_4 (struct tipc_node*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct tipc_msg* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (struct tipc_msg*) ;
 int FUNC_15 (struct tipc_msg*,char*) ;
 scalar_t__ FUNC_16 (struct tipc_msg*) ;
 int FUNC_17 (struct tipc_msg*) ;
 scalar_t__ FUNC_18 (struct tipc_msg*) ;
 scalar_t__ FUNC_19 (struct tipc_msg*) ;
 int FUNC_20 (struct tipc_msg*) ;
 scalar_t__ FUNC_21 (struct tipc_msg*) ;
 scalar_t__ FUNC_22 (struct tipc_msg*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (struct tipc_node*,int ) ;
 int FUNC_26 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_27 (struct sk_buff**,int *,struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*) ;
 scalar_t__ FUNC_29 (int *,struct sk_buff**,struct tipc_msg**) ;
 scalar_t__ VAR_6 ;
 int FUNC_30 (struct sk_buff*) ;
 struct tipc_node* FUNC_31 (int ) ;
 int FUNC_32 (struct tipc_node*) ;
 int FUNC_33 (struct tipc_node*) ;
 int FUNC_34 (struct tipc_node*) ;
 scalar_t__ VAR_7 ;
 int FUNC_35 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_36 (int) ;

void FUNC_37(struct sk_buff *VAR_8)
{



 struct tipc_msg *VAR_9 = FUNC_6(VAR_8);
 struct tipc_node* VAR_10 = FUNC_31(FUNC_20(VAR_9));
 u32 VAR_11;
 u32 VAR_12;
 struct sk_buff *VAR_13;

 FUNC_15(VAR_9, "<BC<<<");

 if (FUNC_36(!VAR_10 || !FUNC_32(VAR_10) || !VAR_10->bclink.supported ||
       (FUNC_18(VAR_9) != VAR_6))) {
  FUNC_5(VAR_8);
  return;
 }

 if (FUNC_36(FUNC_22(VAR_9) == VAR_0)) {
  FUNC_15(VAR_9, "<BCNACK<<<");
  if (FUNC_16(VAR_9) == VAR_7) {
   FUNC_33(VAR_10);
   FUNC_25(VAR_10, FUNC_11(VAR_9));
   FUNC_34(VAR_10);
   FUNC_23(&VAR_4);
   VAR_5->stats.recv_nacks++;
   VAR_5->owner->next = VAR_10;
   FUNC_1(FUNC_13(VAR_9),
           FUNC_14(VAR_9));
   VAR_5->owner->next = ((void*)0);
   FUNC_24(&VAR_4);
  } else {
   FUNC_26(FUNC_16(VAR_9),
           FUNC_12(VAR_9),
           FUNC_13(VAR_9),
           FUNC_14(VAR_9));
  }
  FUNC_5(VAR_8);
  return;
 }
 FUNC_33(VAR_10);
receive:
 VAR_13 = VAR_10->bclink.deferred_head;
 VAR_11 = FUNC_10(VAR_10->bclink.last_in + 1);
 VAR_12 = FUNC_21(VAR_9);

 if (FUNC_9(VAR_12 == VAR_11)) {
  VAR_5->stats.recv_info++;
  VAR_10->bclink.last_in++;
  FUNC_4(VAR_10);
  if (FUNC_36(FUNC_0(VAR_12))) {
   FUNC_2(VAR_10);
   VAR_5->stats.sent_acks++;
  }
  if (FUNC_9(FUNC_17(VAR_9))) {
   FUNC_34(VAR_10);
   FUNC_35(VAR_8, ((void*)0));
  } else if (FUNC_22(VAR_9) == VAR_1) {
   VAR_5->stats.recv_bundles++;
   VAR_5->stats.recv_bundled += FUNC_19(VAR_9);
   FUNC_34(VAR_10);
   FUNC_28(VAR_8);
  } else if (FUNC_22(VAR_9) == VAR_2) {
   VAR_5->stats.recv_fragments++;
   if (FUNC_29(&VAR_10->bclink.defragm,
          &VAR_8, &VAR_9))
    VAR_5->stats.recv_fragmented++;
   FUNC_34(VAR_10);
   FUNC_30(VAR_8);
  } else {
   FUNC_34(VAR_10);
   FUNC_30(VAR_8);
  }
  if (VAR_13 && (FUNC_7(VAR_13) == FUNC_10(VAR_11 + 1))) {
   FUNC_33(VAR_10);
   VAR_8 = VAR_13;
   VAR_9 = FUNC_6(VAR_8);
   VAR_10->bclink.deferred_head = VAR_13->next;
   goto receive;
  }
  return;
 } else if (FUNC_8(VAR_11, VAR_12)) {
  u32 VAR_14 = VAR_10->bclink.gap_after;
  u32 VAR_15 = VAR_10->bclink.gap_to;

  if (FUNC_27(&VAR_10->bclink.deferred_head,
     &VAR_10->bclink.deferred_tail,
     VAR_8)) {
   VAR_10->bclink.nack_sync++;
   VAR_5->stats.deferred_recv++;
   if (VAR_12 == FUNC_10(VAR_14 + 1))
    VAR_10->bclink.gap_after = VAR_12;
   else if (FUNC_8(VAR_14, VAR_12) && FUNC_8(VAR_12, VAR_15))
    VAR_10->bclink.gap_to = VAR_12;
  }
  if (FUNC_0(VAR_10->bclink.nack_sync)) {
   if (VAR_15 != VAR_14)
    FUNC_3(VAR_10);
   FUNC_4(VAR_10);
  }
 } else {
  VAR_5->stats.duplicates++;
  FUNC_5(VAR_8);
 }
 FUNC_34(VAR_10);
}
