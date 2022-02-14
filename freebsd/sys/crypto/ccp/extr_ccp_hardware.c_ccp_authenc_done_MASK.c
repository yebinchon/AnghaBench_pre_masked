
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptop {struct cryptodesc* crp_desc; } ;
struct cryptodesc {struct cryptodesc* crd_next; } ;
struct ccp_session {scalar_t__ cipher_first; int blkcipher; } ;
struct ccp_queue {int dummy; } ;


 int FUNC_0 (struct ccp_queue*,struct ccp_session*,struct cryptop*,struct cryptodesc*,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(struct ccp_queue *VAR_0, struct ccp_session *VAR_1, void *VAR_2,
    int VAR_3)
{
 struct cryptodesc *VAR_4;
 struct cryptop *VAR_5;

 FUNC_1(&VAR_1->blkcipher, sizeof(VAR_1->blkcipher));

 VAR_5 = VAR_2;
 if (VAR_1->cipher_first)
  VAR_4 = VAR_5->crp_desc->crd_next;
 else
  VAR_4 = VAR_5->crp_desc;

 FUNC_0(VAR_0, VAR_1, VAR_5, VAR_4, VAR_3);
}
