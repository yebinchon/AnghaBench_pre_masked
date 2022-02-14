
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rxrpc_key_token {TYPE_2__* kad; int security_index; } ;
struct rxrpc_connection {int security_level; int size_align; int security_size; int header_size; struct crypto_blkcipher* cipher; int security_ix; TYPE_3__* key; int debug_id; } ;
struct rxkad_level2_hdr {int dummy; } ;
struct rxkad_level1_hdr {int dummy; } ;
struct crypto_blkcipher {int dummy; } ;
struct TYPE_4__ {struct rxrpc_key_token* data; } ;
struct TYPE_6__ {TYPE_1__ payload; } ;
struct TYPE_5__ {int session_key; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct crypto_blkcipher*) ;
 int FUNC_2 (struct crypto_blkcipher*) ;



 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int) ;
 struct crypto_blkcipher* FUNC_6 (char*,int ,int ) ;
 scalar_t__ FUNC_7 (struct crypto_blkcipher*,int ,int) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(struct rxrpc_connection *VAR_2)
{
 struct crypto_blkcipher *VAR_3;
 struct rxrpc_key_token *VAR_4;
 int VAR_5;

 FUNC_4("{%d},{%x}", VAR_2->debug_id, FUNC_8(VAR_2->key));

 VAR_4 = VAR_2->key->payload.data;
 VAR_2->security_ix = VAR_4->security_index;

 VAR_3 = FUNC_6("pcbc(fcrypt)", 0, VAR_0);
 if (FUNC_1(VAR_3)) {
  FUNC_3("no cipher");
  VAR_5 = FUNC_2(VAR_3);
  goto error;
 }

 if (FUNC_7(VAR_3, VAR_4->kad->session_key,
        sizeof(VAR_4->kad->session_key)) < 0)
  FUNC_0();

 switch (VAR_2->security_level) {
 case 128:
  break;
 case 130:
  VAR_2->size_align = 8;
  VAR_2->security_size = sizeof(struct rxkad_level1_hdr);
  VAR_2->header_size += sizeof(struct rxkad_level1_hdr);
  break;
 case 129:
  VAR_2->size_align = 8;
  VAR_2->security_size = sizeof(struct rxkad_level2_hdr);
  VAR_2->header_size += sizeof(struct rxkad_level2_hdr);
  break;
 default:
  VAR_5 = -VAR_1;
  goto error;
 }

 VAR_2->cipher = VAR_3;
 VAR_5 = 0;
error:
 FUNC_5(" = %d", VAR_5);
 return VAR_5;
}
