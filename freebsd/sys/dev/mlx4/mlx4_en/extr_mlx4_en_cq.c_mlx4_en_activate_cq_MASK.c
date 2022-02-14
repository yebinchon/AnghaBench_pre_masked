
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct mlx4_en_priv {size_t port; int rx_ring_num; TYPE_1__** rx_ring; struct mlx4_en_cq** rx_cq; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_5__* dev; int priv_uar; int * pndev; } ;
struct TYPE_11__ {unsigned long data; int function; } ;
struct TYPE_17__ {int event; int comp; scalar_t__* arm_db; scalar_t__* set_ci_db; } ;
struct TYPE_13__ {int dma; scalar_t__* db; } ;
struct TYPE_14__ {TYPE_2__ db; int mtt; } ;
struct mlx4_en_cq {scalar_t__ is_tx; int vector; size_t ring; TYPE_10__ timer; TYPE_8__ mcq; TYPE_3__ wqres; int size; int buf_size; int buf; int dev; } ;
struct TYPE_15__ {int num_comp_vectors; } ;
struct TYPE_16__ {TYPE_4__ caps; } ;
struct TYPE_12__ {int actual_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,size_t,int*) ;
 int FUNC_3 (TYPE_5__*,int ,int *,int *,int ,TYPE_8__*,int,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct mlx4_en_dev*,char*,int) ;
 int FUNC_5 (TYPE_5__*,size_t,int) ;
 int FUNC_6 (TYPE_5__*,int) ;

int FUNC_7(struct mlx4_en_priv *VAR_5, struct mlx4_en_cq *VAR_6,
   int VAR_7)
{
 struct mlx4_en_dev *VAR_8 = VAR_5->mdev;
 int VAR_9 = 0;
 int VAR_10 = 0;
 bool VAR_11 = 0;

 VAR_6->dev = VAR_8->pndev[VAR_5->port];
 VAR_6->mcq.set_ci_db = VAR_6->wqres.db.db;
 VAR_6->mcq.arm_db = VAR_6->wqres.db.db + 1;
 *VAR_6->mcq.set_ci_db = 0;
 *VAR_6->mcq.arm_db = 0;
 FUNC_1(VAR_6->buf, 0, VAR_6->buf_size);

 if (VAR_6->is_tx == VAR_0) {
  if (!FUNC_5(VAR_8->dev, VAR_5->port,
          VAR_6->vector)) {
   VAR_6->vector = VAR_7 % VAR_8->dev->caps.num_comp_vectors;

   VAR_9 = FUNC_2(VAR_8->dev, VAR_5->port,
          &VAR_6->vector);
   if (VAR_9) {
    FUNC_4(VAR_8, "Failed assigning an EQ to CQ vector %d\n",
      VAR_6->vector);
    goto free_eq;
   }

   VAR_11 = 1;
  }
 } else {
  struct mlx4_en_cq *VAR_12;




  VAR_7 = VAR_7 % VAR_5->rx_ring_num;
  VAR_12 = VAR_5->rx_cq[VAR_7];
  VAR_6->vector = VAR_12->vector;
 }

 if (!VAR_6->is_tx)
  VAR_6->size = VAR_5->rx_ring[VAR_6->ring]->actual_size;

 VAR_9 = FUNC_3(VAR_8->dev, VAR_6->size, &VAR_6->wqres.mtt,
       &VAR_8->priv_uar, VAR_6->wqres.db.dma, &VAR_6->mcq,
       VAR_6->vector, 0, VAR_10);
 if (VAR_9)
  goto free_eq;

 VAR_6->mcq.comp = VAR_6->is_tx ? VAR_4 : VAR_3;
 VAR_6->mcq.event = VAR_1;

        if (VAR_6->is_tx) {
                FUNC_0(&VAR_6->timer);
                VAR_6->timer.function = VAR_2;
                VAR_6->timer.data = (unsigned long) VAR_6;
        }


 return 0;

free_eq:
 if (VAR_11)
  FUNC_6(VAR_8->dev, VAR_6->vector);
 VAR_6->vector = VAR_8->dev->caps.num_comp_vectors;
 return VAR_9;
}
