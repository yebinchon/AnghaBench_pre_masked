
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int tmp ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int type; int serial; } ;
struct rxrpc_skb_priv {TYPE_2__ hdr; } ;
struct rxrpc_connection {scalar_t__ state; int lock; int state_lock; int * channels; TYPE_1__* security; int debug_id; } ;
typedef int __be32 ;
struct TYPE_3__ {int (* respond_to_challenge ) (struct rxrpc_connection*,struct sk_buff*,int *) ;int (* verify_response ) (struct rxrpc_connection*,struct sk_buff*,int *) ;int (* init_connection_security ) (struct rxrpc_connection*) ;int (* prime_packet_security ) (struct rxrpc_connection*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (char*,int ,int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rxrpc_connection*,int ,int ) ;
 int FUNC_8 (int ) ;
 struct rxrpc_skb_priv* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int ,int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct rxrpc_connection*,struct sk_buff*,int *) ;
 int FUNC_14 (struct rxrpc_connection*,struct sk_buff*,int *) ;
 int FUNC_15 (struct rxrpc_connection*) ;
 int FUNC_16 (struct rxrpc_connection*) ;

__attribute__((used)) static int FUNC_17(struct rxrpc_connection *VAR_7,
          struct sk_buff *VAR_8,
          u32 *VAR_9)
{
 struct rxrpc_skb_priv *VAR_10 = FUNC_9(VAR_8);
 __be32 VAR_11;
 u32 VAR_12;
 int VAR_13, VAR_14;

 if (VAR_7->state >= VAR_3) {
  FUNC_3(" = -ECONNABORTED [%u]", VAR_7->state);
  return -VAR_0;
 }

 VAR_12 = FUNC_4(VAR_10->hdr.serial);

 FUNC_0("{%d},{%u,%%%u},", VAR_7->debug_id, VAR_10->hdr.type, VAR_12);

 switch (VAR_10->hdr.type) {
 case 130:
  if (FUNC_10(VAR_8, 0, &VAR_11, sizeof(VAR_11)) < 0)
   return -VAR_1;
  FUNC_2("Rx ABORT %%%u { ac=%d }", VAR_12, FUNC_4(VAR_11));

  VAR_7->state = VAR_3;
  FUNC_7(VAR_7, VAR_2,
      FUNC_4(VAR_11));
  return -VAR_0;

 case 129:
  if (VAR_7->security)
   return VAR_7->security->respond_to_challenge(
    VAR_7, VAR_8, VAR_9);
  return -VAR_1;

 case 128:
  if (!VAR_7->security)
   return -VAR_1;

  VAR_14 = VAR_7->security->verify_response(VAR_7, VAR_8, VAR_9);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_14 = VAR_7->security->init_connection_security(VAR_7);
  if (VAR_14 < 0)
   return VAR_14;

  VAR_7->security->prime_packet_security(VAR_7);
  FUNC_5(&VAR_7->lock);
  FUNC_11(&VAR_7->state_lock);

  if (VAR_7->state == VAR_5) {
   VAR_7->state = VAR_4;
   for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
    FUNC_8(VAR_7->channels[VAR_13]);
  }

  FUNC_12(&VAR_7->state_lock);
  FUNC_6(&VAR_7->lock);
  return 0;

 default:
  FUNC_1(" = -EPROTO [%u]", VAR_10->hdr.type);
  return -VAR_1;
 }
}
