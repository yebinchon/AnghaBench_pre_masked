
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int64_t ;
struct sshmac {int enabled; } ;
struct sshenc {int block_size; int iv_len; int iv; int key_len; int key; int cipher; } ;
struct sshcomp {scalar_t__ type; int enabled; } ;
struct sshcipher_ctx {int dummy; } ;
struct ssh {TYPE_1__* kex; struct session_state* state; } ;
struct packet_state {scalar_t__ blocks; scalar_t__ packets; scalar_t__ bytes; } ;
struct session_state {int max_blocks_out; int max_blocks_in; int cipher_warning_done; int rekey_limit; scalar_t__ after_authentication; TYPE_2__** newkeys; struct packet_state p_send; struct packet_state p_read; struct sshcipher_ctx* receive_context; struct sshcipher_ctx* send_context; } ;
struct TYPE_4__ {struct sshcomp comp; struct sshmac mac; struct sshenc enc; } ;
struct TYPE_3__ {TYPE_2__** newkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sshcipher_ctx*) ;
 int FUNC_4 (struct sshcipher_ctx**,int ,int ,int ,int ,int ,int) ;
 char* FUNC_5 (struct sshcipher_ctx*) ;
 int FUNC_6 (char*,unsigned long long,...) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct sshmac*) ;
 int FUNC_11 (struct ssh*) ;
 int FUNC_12 (struct ssh*) ;
 int FUNC_13 (struct ssh*,int) ;

int
FUNC_14(struct ssh *VAR_6, int VAR_7)
{
 struct session_state *VAR_8 = VAR_6->state;
 struct sshenc *VAR_9;
 struct sshmac *VAR_10;
 struct sshcomp *VAR_11;
 struct sshcipher_ctx **VAR_12;
 struct packet_state *VAR_13;
 u_int64_t *VAR_14;
 const char *VAR_15;
 int VAR_16, VAR_17;

 FUNC_7("set_newkeys: mode %d", VAR_7);

 if (VAR_7 == VAR_4) {
  VAR_12 = &VAR_8->send_context;
  VAR_17 = VAR_1;
  VAR_13 = &VAR_8->p_send;
  VAR_14 = &VAR_8->max_blocks_out;
 } else {
  VAR_12 = &VAR_8->receive_context;
  VAR_17 = VAR_0;
  VAR_13 = &VAR_8->p_read;
  VAR_14 = &VAR_8->max_blocks_in;
 }
 if (VAR_8->newkeys[VAR_7] != ((void*)0)) {
  FUNC_6("set_newkeys: rekeying, input %llu bytes %llu blocks, "
     "output %llu bytes %llu blocks",
     (unsigned long long)VAR_8->p_read.bytes,
     (unsigned long long)VAR_8->p_read.blocks,
     (unsigned long long)VAR_8->p_send.bytes,
     (unsigned long long)VAR_8->p_send.blocks);
  FUNC_3(*VAR_12);
  *VAR_12 = ((void*)0);
  FUNC_9(VAR_8->newkeys[VAR_7]);
  VAR_8->newkeys[VAR_7] = ((void*)0);
 }

 VAR_13->packets = VAR_13->blocks = 0;

 if ((VAR_8->newkeys[VAR_7] = VAR_6->kex->newkeys[VAR_7]) == ((void*)0))
  return VAR_5;
 VAR_6->kex->newkeys[VAR_7] = ((void*)0);
 VAR_9 = &VAR_8->newkeys[VAR_7]->enc;
 VAR_10 = &VAR_8->newkeys[VAR_7]->mac;
 VAR_11 = &VAR_8->newkeys[VAR_7]->comp;
 if (FUNC_2(VAR_9->cipher) == 0) {
  if ((VAR_16 = FUNC_10(VAR_10)) != 0)
   return VAR_16;
 }
 VAR_10->enabled = 1;
 FUNC_0(FUNC_6("cipher_init_context: %d", VAR_7));
 if ((VAR_16 = FUNC_4(VAR_12, VAR_9->cipher, VAR_9->key, VAR_9->key_len,
     VAR_9->iv, VAR_9->iv_len, VAR_17)) != 0)
  return VAR_16;
 if (!VAR_8->cipher_warning_done &&
     (VAR_15 = FUNC_5(*VAR_12)) != ((void*)0)) {
  FUNC_8("Warning: %s", VAR_15);
  VAR_8->cipher_warning_done = 1;
 }




 if ((VAR_11->type == VAR_3 ||
     (VAR_11->type == VAR_2 &&
      VAR_8->after_authentication)) && VAR_11->enabled == 0) {
  if ((VAR_16 = FUNC_11(VAR_6)) < 0)
   return VAR_16;
  if (VAR_7 == VAR_4) {
   if ((VAR_16 = FUNC_13(VAR_6, 6)) != 0)
    return VAR_16;
  } else {
   if ((VAR_16 = FUNC_12(VAR_6)) != 0)
    return VAR_16;
  }
  VAR_11->enabled = 1;
 }





 if (VAR_9->block_size >= 16)
  *VAR_14 = (u_int64_t)1 << (VAR_9->block_size*2);
 else
  *VAR_14 = ((u_int64_t)1 << 30) / VAR_9->block_size;
 if (VAR_8->rekey_limit)
  *VAR_14 = FUNC_1(*VAR_14,
      VAR_8->rekey_limit / VAR_9->block_size);
 FUNC_6("rekey after %llu blocks", (unsigned long long)*VAR_14);
 return 0;
}
