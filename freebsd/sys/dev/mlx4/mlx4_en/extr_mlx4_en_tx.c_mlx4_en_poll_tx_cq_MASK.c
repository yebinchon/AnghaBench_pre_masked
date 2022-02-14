
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx4_en_tx_ring {int comp_lock; scalar_t__ last_nr_txbb; scalar_t__ cons; scalar_t__ prod; } ;
struct TYPE_2__ {int tx_poll; } ;
struct mlx4_en_priv {scalar_t__ port_up; TYPE_1__ pstats; struct mlx4_en_tx_ring** tx_ring; } ;
struct mlx4_en_cq {size_t ring; int timer; int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,struct mlx4_en_cq*) ;
 int FUNC_2 (int *,scalar_t__) ;
 struct mlx4_en_priv* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(unsigned long VAR_2)
{
 struct mlx4_en_cq *VAR_3 = (struct mlx4_en_cq *) VAR_2;
 struct mlx4_en_priv *VAR_4 = FUNC_3(VAR_3->dev);
 struct mlx4_en_tx_ring *VAR_5 = VAR_4->tx_ring[VAR_3->ring];
 u32 VAR_6;

 FUNC_0(VAR_4->pstats.tx_poll);

 if (VAR_4->port_up == 0)
  return;
 if (!FUNC_4(&VAR_5->comp_lock)) {
  FUNC_2(&VAR_3->timer, VAR_1 + VAR_0);
  return;
 }
 FUNC_1(VAR_3->dev, VAR_3);
 VAR_6 = (u32) (VAR_5->prod - VAR_5->cons - VAR_5->last_nr_txbb);




 if (VAR_6 && VAR_4->port_up)
  FUNC_2(&VAR_3->timer, VAR_1 + VAR_0);

 FUNC_5(&VAR_5->comp_lock);
}
