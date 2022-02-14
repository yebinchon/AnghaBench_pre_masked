
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_sq {TYPE_1__* mbuf; int dma_tag; int wq; } ;
struct TYPE_2__ {int dma_map; int * mbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct mlx5e_sq *VAR_1)
{
 int VAR_2 = FUNC_4(&VAR_1->wq);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 != VAR_2; VAR_3++) {
  if (VAR_1->mbuf[VAR_3].mbuf != ((void*)0)) {
   FUNC_1(VAR_1->dma_tag, VAR_1->mbuf[VAR_3].dma_map);
   FUNC_3(VAR_1->mbuf[VAR_3].mbuf);
  }
  FUNC_0(VAR_1->dma_tag, VAR_1->mbuf[VAR_3].dma_map);
 }
 FUNC_2(VAR_1->mbuf, VAR_0);
}
