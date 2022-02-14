
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tag ;
struct cryptop {int crp_etype; int crp_buf; int crp_flags; struct cryptodesc* crp_desc; } ;
struct cryptodesc {int crd_flags; int crd_inject; struct cryptodesc* crd_next; } ;
struct TYPE_2__ {int hash_len; int final_block; } ;
struct ccp_session {TYPE_1__ gmac; TYPE_1__ blkcipher; int pending; scalar_t__ cipher_first; } ;
struct ccp_queue {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int,char*) ;
 int FUNC_1 (struct cryptop*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ccp_queue *VAR_3, struct ccp_session *VAR_4, void *VAR_5,
    int VAR_6)
{
 char VAR_7[VAR_2];
 struct cryptodesc *VAR_8, *VAR_9;
 struct cryptop *VAR_10;

 VAR_10 = VAR_5;
 if (VAR_4->cipher_first) {
  VAR_8 = VAR_10->crp_desc;
  VAR_9 = VAR_10->crp_desc->crd_next;
 } else {
  VAR_8 = VAR_10->crp_desc->crd_next;
  VAR_9 = VAR_10->crp_desc;
 }

 VAR_4->pending--;

 if (VAR_6 != 0) {
  VAR_10->crp_etype = VAR_6;
  goto out;
 }


 if ((VAR_8->crd_flags & VAR_0) != 0)
  goto out;


 FUNC_0(VAR_10->crp_flags, VAR_10->crp_buf, VAR_9->crd_inject,
     sizeof(VAR_7), VAR_7);


 if (FUNC_3(VAR_7, VAR_4->gmac.final_block, VAR_4->gmac.hash_len) != 0)
  VAR_10->crp_etype = VAR_1;

out:
 FUNC_2(&VAR_4->blkcipher, sizeof(VAR_4->blkcipher));
 FUNC_2(&VAR_4->gmac, sizeof(VAR_4->gmac));
 FUNC_1(VAR_10);
}
