
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct scatterlist {int dummy; } ;
struct TYPE_10__ {int seq; int callNumber; } ;
struct rxrpc_skb_priv {TYPE_5__ hdr; } ;
struct rxrpc_key_token {TYPE_3__* kad; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_call {TYPE_4__* conn; } ;
struct rxkad_level2_hdr {int data_size; } ;
struct blkcipher_desc {scalar_t__ flags; int info; int tfm; } ;
typedef int sechdr ;
typedef int iv ;
struct TYPE_9__ {int cipher; TYPE_2__* key; } ;
struct TYPE_8__ {int session_key; } ;
struct TYPE_6__ {struct rxrpc_key_token* data; } ;
struct TYPE_7__ {TYPE_1__ payload; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_4 (struct scatterlist*) ;
 struct scatterlist* FUNC_5 (int,int ) ;
 int FUNC_6 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_7 (int) ;
 struct rxrpc_skb_priv* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct scatterlist*,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,struct rxkad_level2_hdr*,int) ;
 int FUNC_11 (struct sk_buff*,int ,struct sk_buff**) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,struct scatterlist*,int ,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(const struct rxrpc_call *VAR_5,
           struct sk_buff *VAR_6,
           u32 *VAR_7)
{
 const struct rxrpc_key_token *VAR_8;
 struct rxkad_level2_hdr VAR_9;
 struct rxrpc_skb_priv *VAR_10;
 struct blkcipher_desc VAR_11;
 struct rxrpc_crypt VAR_12;
 struct scatterlist VAR_13[4], *VAR_14;
 struct sk_buff *VAR_15;
 u32 VAR_16, VAR_17;
 u16 VAR_18;
 int VAR_19;

 FUNC_1(",{%d}", VAR_6->len);

 VAR_10 = FUNC_8(VAR_6);


 VAR_19 = FUNC_11(VAR_6, 0, &VAR_15);
 if (VAR_19 < 0)
  goto nomem;

 VAR_14 = VAR_13;
 if (FUNC_14(VAR_19 > 4)) {
  VAR_14 = FUNC_5(sizeof(*VAR_14) * VAR_19, VAR_2);
  if (!VAR_14)
   goto nomem;
 }

 FUNC_9(VAR_14, VAR_19);
 FUNC_13(VAR_6, VAR_14, 0, VAR_6->len);


 VAR_8 = VAR_5->conn->key->payload.data;
 FUNC_6(&VAR_12, VAR_8->kad->session_key, sizeof(VAR_12));
 VAR_11.tfm = VAR_5->conn->cipher;
 VAR_11.info = VAR_12.x;
 VAR_11.flags = 0;

 FUNC_3(&VAR_11, VAR_14, VAR_14, VAR_6->len);
 if (VAR_14 != VAR_13)
  FUNC_4(VAR_14);


 if (FUNC_10(VAR_6, 0, &VAR_9, sizeof(VAR_9)) < 0)
  goto datalen_error;
 if (!FUNC_12(VAR_6, sizeof(VAR_9)))
  FUNC_0();

 VAR_17 = FUNC_7(VAR_9.data_size);
 VAR_16 = VAR_17 & 0xffff;

 VAR_18 = VAR_17 >> 16;
 VAR_18 ^= FUNC_7(VAR_10->hdr.seq ^ VAR_10->hdr.callNumber);
 VAR_18 &= 0xffff;
 if (VAR_18 != 0) {
  *VAR_7 = VAR_4;
  goto protocol_error;
 }


 if (VAR_16 > VAR_6->len)
  goto datalen_error;
 else if (VAR_16 < VAR_6->len)
  VAR_6->len = VAR_16;

 FUNC_2(" = 0 [dlen=%x]", VAR_16);
 return 0;

datalen_error:
 *VAR_7 = VAR_3;
protocol_error:
 FUNC_2(" = -EPROTO");
 return -VAR_1;

nomem:
 FUNC_2(" = -ENOMEM");
 return -VAR_0;
}
