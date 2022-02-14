
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct sock {struct rxrpc_local* sk_user_data; } ;
struct sk_buff {int priority; } ;
struct rxrpc_transport {int dummy; } ;
struct TYPE_6__ {int flags; scalar_t__ epoch; scalar_t__ cid; scalar_t__ callNumber; scalar_t__ type; scalar_t__ seq; } ;
struct rxrpc_skb_priv {TYPE_2__ hdr; } ;
struct rxrpc_peer {int dummy; } ;
struct rxrpc_local {int acceptor; int accept_queue; int usage; } ;
struct rxrpc_connection {int debug_id; } ;
struct TYPE_7__ {scalar_t__ saddr; } ;
struct TYPE_5__ {int source; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct rxrpc_peer*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,struct sock*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_9 ;
 TYPE_4__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct rxrpc_skb_priv*,int ,int) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 struct rxrpc_connection* FUNC_19 (struct rxrpc_transport*,TYPE_2__*) ;
 struct rxrpc_peer* FUNC_20 (struct rxrpc_local*,scalar_t__,int ) ;
 struct rxrpc_transport* FUNC_21 (struct rxrpc_local*,struct rxrpc_peer*) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct rxrpc_local*) ;
 int VAR_10 ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct rxrpc_connection*,struct sk_buff*) ;
 int FUNC_26 (struct rxrpc_connection*,struct sk_buff*) ;
 int FUNC_27 (struct rxrpc_connection*) ;
 int FUNC_28 (struct rxrpc_local*) ;
 int FUNC_29 (struct rxrpc_peer*) ;
 int FUNC_30 (struct rxrpc_transport*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (struct rxrpc_local*,struct sk_buff*) ;
 struct rxrpc_skb_priv* FUNC_33 (struct sk_buff*) ;
 scalar_t__ FUNC_34 (struct sk_buff*) ;
 scalar_t__ FUNC_35 (struct sk_buff*,int,TYPE_2__*,int) ;
 int FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_38 (struct sock*,int ,int,int*) ;
 TYPE_1__* FUNC_39 (struct sk_buff*) ;

void FUNC_40(struct sock *VAR_11, int VAR_12)
{
 struct rxrpc_connection *VAR_13;
 struct rxrpc_transport *VAR_14;
 struct rxrpc_skb_priv *VAR_15;
 struct rxrpc_local *VAR_16;
 struct rxrpc_peer *VAR_17;
 struct sk_buff *VAR_18;
 int VAR_19;

 FUNC_5("%p, %d", VAR_11, VAR_12);

 FUNC_0(!FUNC_12());

 FUNC_17(&VAR_10);
 VAR_16 = VAR_11->sk_user_data;
 if (VAR_16 && FUNC_9(&VAR_16->usage) > 0)
  FUNC_23(VAR_16);
 else
  VAR_16 = ((void*)0);
 FUNC_18(&VAR_10);
 if (!VAR_16) {
  FUNC_6(" [local dead]");
  return;
 }

 VAR_18 = FUNC_38(VAR_11, 0, 1, &VAR_19);
 if (!VAR_18) {
  FUNC_28(VAR_16);
  if (VAR_19 == -VAR_0)
   return;
  FUNC_4("UDP socket error %d", VAR_19);
  return;
 }

 FUNC_24(VAR_18);

 FUNC_7("recv skb %p", VAR_18);


 if (FUNC_34(VAR_18)) {
  FUNC_22(VAR_18);
  FUNC_28(VAR_16);
  FUNC_3(&VAR_9, VAR_8, 0);
  FUNC_6(" [CSUM failed]");
  return;
 }

 FUNC_3(&VAR_9, VAR_7, 0);



 FUNC_36(VAR_18);
 VAR_15 = FUNC_33(VAR_18);
 FUNC_13(VAR_15, 0, sizeof(*VAR_15));

 FUNC_7("Rx UDP packet from %08x:%04hu",
      FUNC_14(FUNC_11(VAR_18)->saddr), FUNC_15(FUNC_39(VAR_18)->source));


 if (FUNC_35(VAR_18, sizeof(struct udphdr), &VAR_15->hdr,
     sizeof(VAR_15->hdr)) < 0)
  goto bad_message;
 if (!FUNC_16(VAR_18, sizeof(struct udphdr) + sizeof(VAR_15->hdr)))
  FUNC_1();

 FUNC_7("Rx RxRPC %s ep=%x call=%x:%x",
      VAR_15->hdr.flags & VAR_1 ? "ToServer" : "ToClient",
      FUNC_14(VAR_15->hdr.epoch),
      FUNC_14(VAR_15->hdr.cid),
      FUNC_14(VAR_15->hdr.callNumber));

 if (VAR_15->hdr.type == 0 || VAR_15->hdr.type >= VAR_2) {
  FUNC_8("Rx Bad Packet Type %u", VAR_15->hdr.type);
  goto bad_message;
 }

 if (VAR_15->hdr.type == VAR_3 &&
     (VAR_15->hdr.callNumber == 0 || VAR_15->hdr.seq == 0))
  goto bad_message;

 VAR_17 = FUNC_20(VAR_16, FUNC_11(VAR_18)->saddr, FUNC_39(VAR_18)->source);
 if (FUNC_2(VAR_17))
  goto cant_route_call;

 VAR_14 = FUNC_21(VAR_16, VAR_17);
 FUNC_29(VAR_17);
 if (!VAR_14)
  goto cant_route_call;

 VAR_13 = FUNC_19(VAR_14, &VAR_15->hdr);
 FUNC_30(VAR_14);
 if (!VAR_13)
  goto cant_route_call;

 FUNC_4("CONN %p {%d}", VAR_13, VAR_13->debug_id);

 if (VAR_15->hdr.callNumber == 0)
  FUNC_26(VAR_13, VAR_18);
 else
  FUNC_25(VAR_13, VAR_18);
 FUNC_27(VAR_13);
 FUNC_28(VAR_16);
 return;

cant_route_call:
 FUNC_4("can't route call");
 if (VAR_15->hdr.flags & VAR_1 &&
     VAR_15->hdr.type == VAR_3) {
  if (VAR_15->hdr.seq == FUNC_10(1)) {
   FUNC_4("first packet");
   FUNC_37(&VAR_16->accept_queue, VAR_18);
   FUNC_31(&VAR_16->acceptor);
   FUNC_28(VAR_16);
   FUNC_6(" [incoming]");
   return;
  }
  VAR_18->priority = VAR_5;
 } else {
  VAR_18->priority = VAR_4;
 }

 FUNC_4("reject");
 FUNC_32(VAR_16, VAR_18);
 FUNC_28(VAR_16);
 FUNC_6(" [no call]");
 return;

bad_message:
 VAR_18->priority = VAR_6;
 FUNC_32(VAR_16, VAR_18);
 FUNC_28(VAR_16);
 FUNC_6(" [badmsg]");
}
