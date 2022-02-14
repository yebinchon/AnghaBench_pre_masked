
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctx; } ;
struct mlx5e_rq {int dma_tag; int wq_ctrl; TYPE_2__* mbuf; int wq; int lro; TYPE_1__ stats; } ;
struct TYPE_4__ {int dma_map; int * mbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct mlx5e_rq *VAR_1)
{
 int VAR_2;
 int VAR_3;


 FUNC_7(&VAR_1->stats.ctx);


 FUNC_8(&VAR_1->lro);

 VAR_2 = FUNC_6(&VAR_1->wq);
 for (VAR_3 = 0; VAR_3 != VAR_2; VAR_3++) {
  if (VAR_1->mbuf[VAR_3].mbuf != ((void*)0)) {
   FUNC_2(VAR_1->dma_tag, VAR_1->mbuf[VAR_3].dma_map);
   FUNC_4(VAR_1->mbuf[VAR_3].mbuf);
  }
  FUNC_1(VAR_1->dma_tag, VAR_1->mbuf[VAR_3].dma_map);
 }
 FUNC_3(VAR_1->mbuf, VAR_0);
 FUNC_5(&VAR_1->wq_ctrl);
 FUNC_0(VAR_1->dma_tag);
}
