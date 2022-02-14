
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshmac {int key_len; int key; int enabled; int name; } ;
struct sshenc {int cipher; int iv_len; int iv; int key_len; int key; int block_size; int enabled; int name; } ;
struct sshcomp {int name; int type; } ;
struct sshcipher_ctx {int dummy; } ;
struct sshbuf {int dummy; } ;
struct ssh {TYPE_1__* state; } ;
struct newkeys {struct sshcomp comp; struct sshmac mac; struct sshenc enc; } ;
struct TYPE_2__ {struct sshcipher_ctx* receive_context; struct sshcipher_ctx* send_context; struct newkeys** newkeys; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sshcipher_ctx*,int ,int ) ;
 int FUNC_2 (struct sshbuf*) ;
 struct sshbuf* FUNC_3 () ;
 int FUNC_4 (struct sshbuf*,int ) ;
 int FUNC_5 (struct sshbuf*,int ,int ) ;
 int FUNC_6 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_7 (struct sshbuf*,int ) ;

__attribute__((used)) static int
FUNC_8(struct sshbuf *VAR_3, struct ssh *VAR_4, int VAR_5)
{
 struct sshbuf *VAR_6;
 struct sshcipher_ctx *VAR_7;
 struct sshcomp *VAR_8;
 struct sshenc *VAR_9;
 struct sshmac *VAR_10;
 struct newkeys *VAR_11;
 int VAR_12;

 if ((VAR_11 = VAR_4->state->newkeys[VAR_5]) == ((void*)0))
  return VAR_2;
 VAR_9 = &VAR_11->enc;
 VAR_10 = &VAR_11->mac;
 VAR_8 = &VAR_11->comp;
 VAR_7 = (VAR_5 == VAR_0) ? VAR_4->state->send_context :
     VAR_4->state->receive_context;
 if ((VAR_12 = FUNC_1(VAR_7, VAR_9->iv, VAR_9->iv_len)) != 0)
  return VAR_12;
 if ((VAR_6 = FUNC_3()) == ((void*)0))
  return VAR_1;
 if ((VAR_12 = FUNC_4(VAR_6, VAR_9->name)) != 0 ||
     (VAR_12 = FUNC_7(VAR_6, VAR_9->enabled)) != 0 ||
     (VAR_12 = FUNC_7(VAR_6, VAR_9->block_size)) != 0 ||
     (VAR_12 = FUNC_5(VAR_6, VAR_9->key, VAR_9->key_len)) != 0 ||
     (VAR_12 = FUNC_5(VAR_6, VAR_9->iv, VAR_9->iv_len)) != 0)
  goto out;
 if (FUNC_0(VAR_9->cipher) == 0) {
  if ((VAR_12 = FUNC_4(VAR_6, VAR_10->name)) != 0 ||
      (VAR_12 = FUNC_7(VAR_6, VAR_10->enabled)) != 0 ||
      (VAR_12 = FUNC_5(VAR_6, VAR_10->key, VAR_10->key_len)) != 0)
   goto out;
 }
 if ((VAR_12 = FUNC_7(VAR_6, VAR_8->type)) != 0 ||
     (VAR_12 = FUNC_4(VAR_6, VAR_8->name)) != 0)
  goto out;
 VAR_12 = FUNC_6(VAR_3, VAR_6);
 out:
 FUNC_2(VAR_6);
 return VAR_12;
}
