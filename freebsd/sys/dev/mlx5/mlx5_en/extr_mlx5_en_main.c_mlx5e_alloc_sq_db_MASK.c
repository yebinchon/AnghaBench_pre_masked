
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_sq {TYPE_1__* mbuf; int dma_tag; int wq; } ;
struct TYPE_3__ {int dma_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct mlx5e_sq *VAR_3)
{
 int VAR_4 = FUNC_4(&VAR_3->wq);
 int VAR_5;
 int VAR_6;

 VAR_3->mbuf = FUNC_3(VAR_4 * sizeof(VAR_3->mbuf[0]), VAR_0, VAR_1 | VAR_2);


 for (VAR_6 = 0; VAR_6 != VAR_4; VAR_6++) {
  VAR_5 = -FUNC_0(VAR_3->dma_tag, 0, &VAR_3->mbuf[VAR_6].dma_map);
  if (VAR_5 != 0) {
   while (VAR_6--)
    FUNC_1(VAR_3->dma_tag, VAR_3->mbuf[VAR_6].dma_map);
   FUNC_2(VAR_3->mbuf, VAR_0);
   return (VAR_5);
  }
 }
 return (0);
}
