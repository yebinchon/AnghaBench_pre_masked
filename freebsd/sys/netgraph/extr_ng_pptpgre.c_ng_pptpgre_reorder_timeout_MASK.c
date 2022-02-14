
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ng_pptpgre_roq {int seq; } ;
typedef int roqh ;
typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef TYPE_3__* hpriv_p ;
typedef int hook_p ;
struct TYPE_10__ {int mtx; int roq; int recvSeq; int roq_len; } ;
struct TYPE_8__ {int recvReorderTimeouts; } ;
struct TYPE_9__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct ng_pptpgre_roq* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ng_pptpgre_roq*,struct ng_pptpgre_roq*,int ) ;
 int FUNC_6 (int *,struct ng_pptpgre_roq*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;
 int FUNC_11 (TYPE_3__* const) ;
 int FUNC_12 (TYPE_3__* const,int *,int *) ;
 int FUNC_13 (TYPE_3__* const) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_14(node_p VAR_3, hook_p VAR_4, void *VAR_5, int VAR_6)
{
 const priv_p VAR_7 = FUNC_0(VAR_3);
 const hpriv_p VAR_8 = VAR_5;
 roqh VAR_9 = FUNC_4(VAR_9);
 struct ng_pptpgre_roq *VAR_10, *VAR_11 = ((void*)0);

 VAR_7->stats.recvReorderTimeouts++;
 FUNC_9(&VAR_8->mtx);
 if (FUNC_2(&VAR_8->roq)) {
  FUNC_10(&VAR_8->mtx);
  return;
 }

 VAR_11 = VAR_10 = FUNC_3(&VAR_8->roq);
 VAR_8->roq_len--;
 FUNC_7(&VAR_8->roq, VAR_1);
 FUNC_6(&VAR_9, VAR_10, VAR_1);


 while (!FUNC_2(&VAR_8->roq)) {
  VAR_10 = FUNC_3(&VAR_8->roq);
  if (FUNC_1(VAR_10->seq, VAR_11->seq) > 1)
   break;


  VAR_8->roq_len--;
  FUNC_7(&VAR_8->roq, VAR_1);
  FUNC_5(VAR_11, VAR_10, VAR_1);
  VAR_11 = VAR_10;
 }

 VAR_8->recvSeq = VAR_11->seq;
 if (!FUNC_2(&VAR_8->roq))
  FUNC_13(VAR_8);


 FUNC_11(VAR_8);
 FUNC_12(VAR_8, &VAR_9, ((void*)0));
 FUNC_8(&VAR_8->mtx, VAR_0);
}
