
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ published; scalar_t__ congested; scalar_t__ connected; } ;
struct port {scalar_t__ last_in_seqno; int probing_state; TYPE_1__ publ; int (* wakeup ) (TYPE_1__*) ;int acked; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sk_buff*) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*,char*) ;
 int FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 scalar_t__ FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 struct sk_buff* FUNC_10 (scalar_t__,scalar_t__,int ,int ,int ,int ,scalar_t__,int ,int ) ;
 struct sk_buff* FUNC_11 (struct port*,scalar_t__) ;
 int FUNC_12 (struct port*) ;
 int FUNC_13 (struct port*) ;
 scalar_t__ FUNC_14 (struct port*) ;
 scalar_t__ FUNC_15 (struct port*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (struct sk_buff*) ;
 int VAR_9 ;
 scalar_t__ FUNC_18 (struct port*) ;
 struct port* FUNC_19 (int ) ;
 int FUNC_20 (struct port*) ;

void FUNC_21(struct sk_buff *VAR_10)
{
 struct tipc_msg *VAR_11 = FUNC_1(VAR_10);
 struct port *VAR_12 = FUNC_19(FUNC_3(VAR_11));
 u32 VAR_13 = VAR_8;
 struct sk_buff *VAR_14 = ((void*)0);
 struct sk_buff *VAR_15 = ((void*)0);

 FUNC_2(VAR_11, "PORT<RECV<:");

 if (!VAR_12) {
  VAR_13 = VAR_6;
 } else if (VAR_12->publ.connected) {
  if (FUNC_14(VAR_12) != FUNC_5(VAR_11))
   VAR_13 = VAR_6;
  if (FUNC_15(VAR_12) != FUNC_6(VAR_11))
   VAR_13 = VAR_6;
  if (!VAR_13 && FUNC_7(VAR_11)) {
   u32 VAR_16 = FUNC_8(VAR_11);
   u32 VAR_17 = ++VAR_12->last_in_seqno;
   if (VAR_16 != VAR_17) {
    VAR_13 = VAR_6;
    VAR_15 = FUNC_11(VAR_12, VAR_13);
   }
  }
  if (FUNC_9(VAR_11) == VAR_1) {
   int VAR_18 = FUNC_18(VAR_12) &&
         VAR_12->publ.congested &&
         VAR_12->wakeup;
   VAR_12->acked += FUNC_4(VAR_11);
   if (FUNC_18(VAR_12))
    goto exit;
   VAR_12->publ.congested = 0;
   if (!VAR_18)
    goto exit;
   VAR_12->wakeup(&VAR_12->publ);
   goto exit;
  }
 } else if (VAR_12->publ.published) {
  VAR_13 = VAR_6;
 }
 if (VAR_13) {
  VAR_14 = FUNC_10(FUNC_6(VAR_11),
          FUNC_5(VAR_11),
          FUNC_3(VAR_11),
          VAR_9,
          VAR_7,
          VAR_5,
          VAR_13,
          0,
          0);
  goto exit;
 }


 if (FUNC_9(VAR_11) == VAR_3) {
  VAR_14 = FUNC_10(FUNC_6(VAR_11),
          FUNC_5(VAR_11),
          FUNC_3(VAR_11),
          VAR_9,
          VAR_2,
          VAR_4,
          VAR_8,
          FUNC_13(VAR_12),
          0);
 }
 VAR_12->probing_state = VAR_0;
 FUNC_12(VAR_12);
exit:
 if (VAR_12)
  FUNC_20(VAR_12);
 FUNC_17(VAR_14);
 FUNC_17(VAR_15);
 FUNC_0(VAR_10);
}
