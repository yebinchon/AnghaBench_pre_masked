
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_tx_ring {int poll_cnt; int comp_lock; } ;
struct mlx4_en_priv {scalar_t__ port_up; int dev; struct mlx4_en_tx_ring** tx_ring; struct mlx4_en_cq** tx_cq; } ;
struct mlx4_en_cq {int timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct mlx4_en_cq*) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct mlx4_en_priv *VAR_3, int VAR_4)
{
 struct mlx4_en_cq *VAR_5 = VAR_3->tx_cq[VAR_4];
 struct mlx4_en_tx_ring *VAR_6 = VAR_3->tx_ring[VAR_4];

 if (VAR_3->port_up == 0)
  return;



 if (!FUNC_4(&VAR_5->timer))
  FUNC_1(&VAR_5->timer, VAR_2 + VAR_1);


 if ((++VAR_6->poll_cnt & (VAR_0 - 1)) == 0)
  if (FUNC_2(&VAR_6->comp_lock)) {
   FUNC_0(VAR_3->dev, VAR_5);
   FUNC_3(&VAR_6->comp_lock);
  }
}
