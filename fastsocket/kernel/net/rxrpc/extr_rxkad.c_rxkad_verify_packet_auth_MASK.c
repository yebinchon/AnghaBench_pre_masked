
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct scatterlist {int dummy; } ;
struct TYPE_4__ {int seq; int callNumber; } ;
struct rxrpc_skb_priv {TYPE_2__ hdr; } ;
struct rxrpc_crypt {int x; } ;
struct rxrpc_call {TYPE_1__* conn; } ;
struct rxkad_level1_hdr {int data_size; } ;
struct blkcipher_desc {scalar_t__ flags; int info; int tfm; } ;
typedef int sechdr ;
typedef int iv ;
struct TYPE_3__ {int cipher; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_4 (struct rxrpc_crypt*,int ,int) ;
 int FUNC_5 (int) ;
 struct rxrpc_skb_priv* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct scatterlist*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,struct rxkad_level1_hdr*,int) ;
 int FUNC_9 (struct sk_buff*,int ,struct sk_buff**) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,struct scatterlist*,int ,int) ;

__attribute__((used)) static int FUNC_12(const struct rxrpc_call *VAR_4,
        struct sk_buff *VAR_5,
        u32 *VAR_6)
{
 struct rxkad_level1_hdr VAR_7;
 struct rxrpc_skb_priv *VAR_8;
 struct blkcipher_desc VAR_9;
 struct rxrpc_crypt VAR_10;
 struct scatterlist VAR_11[16];
 struct sk_buff *VAR_12;
 u32 VAR_13, VAR_14;
 u16 VAR_15;
 int VAR_16;

 FUNC_1("");

 VAR_8 = FUNC_6(VAR_5);


 VAR_16 = FUNC_9(VAR_5, 0, &VAR_12);
 if (VAR_16 < 0 || VAR_16 > 16)
  goto nomem;

 FUNC_7(VAR_11, VAR_16);
 FUNC_11(VAR_5, VAR_11, 0, 8);


 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_9.tfm = VAR_4->conn->cipher;
 VAR_9.info = VAR_10.x;
 VAR_9.flags = 0;

 FUNC_3(&VAR_9, VAR_11, VAR_11, 8);


 if (FUNC_8(VAR_5, 0, &VAR_7, sizeof(VAR_7)) < 0)
  goto datalen_error;
 if (!FUNC_10(VAR_5, sizeof(VAR_7)))
  FUNC_0();

 VAR_14 = FUNC_5(VAR_7.data_size);
 VAR_13 = VAR_14 & 0xffff;

 VAR_15 = VAR_14 >> 16;
 VAR_15 ^= FUNC_5(VAR_8->hdr.seq ^ VAR_8->hdr.callNumber);
 VAR_15 &= 0xffff;
 if (VAR_15 != 0) {
  *VAR_6 = VAR_3;
  goto protocol_error;
 }


 if (VAR_13 > VAR_5->len)
  goto datalen_error;
 else if (VAR_13 < VAR_5->len)
  VAR_5->len = VAR_13;

 FUNC_2(" = 0 [dlen=%x]", VAR_13);
 return 0;

datalen_error:
 *VAR_6 = VAR_2;
protocol_error:
 FUNC_2(" = -EPROTO");
 return -VAR_1;

nomem:
 FUNC_2(" = -ENOMEM");
 return -VAR_0;
}
