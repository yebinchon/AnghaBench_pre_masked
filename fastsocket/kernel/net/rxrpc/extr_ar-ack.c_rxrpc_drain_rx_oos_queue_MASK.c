
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int mark; } ;
struct TYPE_2__ {int flags; int seq; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_call {scalar_t__ rx_first_oos; int lock; int rx_oos_queue; int rx_data_post; int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,struct sk_buff*,...) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct rxrpc_call*,struct sk_buff*,int,int) ;
 struct rxrpc_skb_priv* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int *) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct rxrpc_call *VAR_5)
{
 struct rxrpc_skb_priv *VAR_6;
 struct sk_buff *VAR_7;
 bool VAR_8;
 int VAR_9;

 FUNC_2("{%d,%d}", VAR_5->rx_data_post, VAR_5->rx_first_oos);

 FUNC_10(&VAR_5->lock);

 VAR_9 = -VAR_0;
 if (FUNC_12(VAR_1, &VAR_5->flags))
  goto socket_unavailable;

 VAR_7 = FUNC_7(&VAR_5->rx_oos_queue);
 if (VAR_7) {
  VAR_6 = FUNC_6(VAR_7);

  FUNC_1("drain OOS packet %d [%d]",
         FUNC_4(VAR_6->hdr.seq), VAR_5->rx_first_oos);

  if (FUNC_4(VAR_6->hdr.seq) != VAR_5->rx_first_oos) {
   FUNC_9(&VAR_5->rx_oos_queue, VAR_7);
   VAR_5->rx_first_oos = FUNC_4(FUNC_6(VAR_7)->hdr.seq);
   FUNC_1("requeue %p {%u}", VAR_7, VAR_5->rx_first_oos);
  } else {
   VAR_7->mark = VAR_4;
   VAR_8 = ((VAR_6->hdr.flags & VAR_3) &&
    !(VAR_6->hdr.flags & VAR_2));
   VAR_9 = FUNC_5(VAR_5, VAR_7, 1, VAR_8);
   FUNC_0(VAR_9 < 0);
   FUNC_1("drain #%u", VAR_5->rx_data_post);
   VAR_5->rx_data_post++;


   VAR_7 = FUNC_8(&VAR_5->rx_oos_queue);
   if (VAR_7)
    VAR_5->rx_first_oos =
     FUNC_4(FUNC_6(VAR_7)->hdr.seq);
   else
    VAR_5->rx_first_oos = 0;
   FUNC_1("peek %p {%u}", VAR_7, VAR_5->rx_first_oos);
  }
 }

 VAR_9 = 0;
socket_unavailable:
 FUNC_11(&VAR_5->lock);
 FUNC_3(" = %d", VAR_9);
 return VAR_9;
}
