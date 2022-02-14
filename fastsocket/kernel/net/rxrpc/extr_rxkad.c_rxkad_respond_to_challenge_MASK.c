
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_12__ {int serial; } ;
struct rxrpc_skb_priv {TYPE_4__ hdr; } ;
struct rxrpc_key_token {TYPE_5__* kad; } ;
struct rxrpc_connection {scalar_t__ security_level; scalar_t__ security_ix; TYPE_2__** channels; int cid; int epoch; TYPE_7__* key; int debug_id; } ;
struct TYPE_11__ {void* level; void* inc_nonce; int * call_id; void* securityIndex; int cid; int epoch; } ;
struct rxkad_response {void* ticket_len; void* kvno; TYPE_3__ encrypted; scalar_t__ version; } ;
struct rxkad_challenge {int min_level; int nonce; int version; } ;
typedef int resp ;
typedef int challenge ;
struct TYPE_9__ {struct rxrpc_key_token* data; } ;
struct TYPE_14__ {TYPE_1__ payload; } ;
struct TYPE_13__ {scalar_t__ kvno; scalar_t__ ticket_len; } ;
struct TYPE_10__ {int call_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (struct rxkad_response*,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct rxkad_response*) ;
 int FUNC_9 (struct rxrpc_connection*,struct rxkad_response*,TYPE_5__*) ;
 int FUNC_10 (struct rxrpc_connection*,TYPE_4__*,struct rxkad_response*,TYPE_5__*) ;
 struct rxrpc_skb_priv* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,int ,struct rxkad_challenge*,int) ;

__attribute__((used)) static int FUNC_13(struct rxrpc_connection *VAR_6,
          struct sk_buff *VAR_7,
          u32 *VAR_8)
{
 const struct rxrpc_key_token *VAR_9;
 struct rxkad_challenge VAR_10;
 struct rxkad_response VAR_11
  __attribute__((aligned(8)));
 struct rxrpc_skb_priv *VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;

 FUNC_0("{%d,%x}", VAR_6->debug_id, FUNC_4(VAR_6->key));

 if (!VAR_6->key) {
  FUNC_1(" = -EPROTO [no key]");
  return -VAR_0;
 }

 VAR_17 = FUNC_5(VAR_6->key);
 if (VAR_17 < 0) {
  *VAR_8 = VAR_1;
  return VAR_17;
 }

 VAR_16 = VAR_4;
 VAR_12 = FUNC_11(VAR_7);
 if (FUNC_12(VAR_7, 0, &VAR_10, sizeof(VAR_10)) < 0)
  goto protocol_error;

 VAR_13 = FUNC_7(VAR_10.version);
 VAR_14 = FUNC_7(VAR_10.nonce);
 VAR_15 = FUNC_7(VAR_10.min_level);

 FUNC_2("Rx CHALLENGE %%%u { v=%u n=%u ml=%u }",
        FUNC_7(VAR_12->hdr.serial), VAR_13, VAR_14, VAR_15);

 VAR_16 = VAR_2;
 if (VAR_13 != VAR_5)
  goto protocol_error;

 VAR_16 = VAR_3;
 if (VAR_6->security_level < VAR_15)
  goto protocol_error;

 VAR_9 = VAR_6->key->payload.data;


 FUNC_6(&VAR_11, 0, sizeof(VAR_11));

 VAR_11.version = VAR_5;
 VAR_11.encrypted.epoch = VAR_6->epoch;
 VAR_11.encrypted.cid = VAR_6->cid;
 VAR_11.encrypted.securityIndex = FUNC_3(VAR_6->security_ix);
 VAR_11.encrypted.call_id[0] =
  (VAR_6->channels[0] ? VAR_6->channels[0]->call_id : 0);
 VAR_11.encrypted.call_id[1] =
  (VAR_6->channels[1] ? VAR_6->channels[1]->call_id : 0);
 VAR_11.encrypted.call_id[2] =
  (VAR_6->channels[2] ? VAR_6->channels[2]->call_id : 0);
 VAR_11.encrypted.call_id[3] =
  (VAR_6->channels[3] ? VAR_6->channels[3]->call_id : 0);
 VAR_11.encrypted.inc_nonce = FUNC_3(VAR_14 + 1);
 VAR_11.encrypted.level = FUNC_3(VAR_6->security_level);
 VAR_11.kvno = FUNC_3(VAR_9->kad->kvno);
 VAR_11.ticket_len = FUNC_3(VAR_9->kad->ticket_len);


 FUNC_8(&VAR_11);
 FUNC_9(VAR_6, &VAR_11, VAR_9->kad);
 return FUNC_10(VAR_6, &VAR_12->hdr, &VAR_11, VAR_9->kad);

protocol_error:
 *VAR_8 = VAR_16;
 FUNC_1(" = -EPROTO [%d]", VAR_16);
 return -VAR_0;
}
