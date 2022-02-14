
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx4_en_priv {int dev; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_3__* dev; } ;
struct TYPE_9__ {scalar_t__ buf; } ;
struct TYPE_12__ {TYPE_2__ direct; } ;
struct TYPE_11__ {TYPE_5__ buf; } ;
struct mlx4_en_cq {int size; int buf_size; int ring; int is_tx; TYPE_4__ wqres; struct mlx4_cqe* buf; int lock; int vector; int tq; int cq_task; } ;
struct mlx4_cqe {int dummy; } ;
typedef enum cq_type { ____Placeholder_cq_type } cq_type ;
struct TYPE_8__ {int cqe_size; int num_comp_vectors; } ;
struct TYPE_10__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,struct mlx4_en_cq*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_en_cq*) ;
 struct mlx4_en_cq* FUNC_4 (int,int ) ;
 struct mlx4_en_cq* FUNC_5 (int,int ,int) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*,int,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,int ,int *) ;
 int FUNC_11 (int *,int,int ,char*,int ) ;
 int VAR_8 ;

int FUNC_12(struct mlx4_en_priv *VAR_9,
        struct mlx4_en_cq **VAR_10,
        int VAR_11, int VAR_12, enum cq_type VAR_13,
        int VAR_14)
{
 struct mlx4_en_dev *VAR_15 = VAR_9->mdev;
 struct mlx4_en_cq *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_1, VAR_14);
 if (!VAR_16) {
  VAR_16 = FUNC_4(sizeof(*VAR_16), VAR_1);
  if (!VAR_16) {
   FUNC_1(VAR_9, "Failed to allocate CQ structure\n");
   return -VAR_0;
  }
 }

 VAR_16->size = VAR_11;
 VAR_16->buf_size = VAR_16->size * VAR_15->dev->caps.cqe_size;

 VAR_16->tq = FUNC_10("mlx4_en_que", VAR_2,
                        VAR_8, &VAR_16->tq);
        if (VAR_13 == VAR_5) {
  FUNC_0(&VAR_16->cq_task, 0, VAR_6, VAR_16);
  FUNC_11(&VAR_16->tq, 1, VAR_4, "%s rx cq",
    FUNC_2(VAR_9->dev));

 } else {
  FUNC_0(&VAR_16->cq_task, 0, VAR_7, VAR_16);
  FUNC_11(&VAR_16->tq, 1, VAR_4, "%s tx cq",
    FUNC_2(VAR_9->dev));
 }

 VAR_16->ring = VAR_12;
 VAR_16->is_tx = VAR_13;
 VAR_16->vector = VAR_15->dev->caps.num_comp_vectors;
 FUNC_9(&VAR_16->lock);

 VAR_17 = FUNC_6(VAR_15->dev, &VAR_16->wqres,
    VAR_16->buf_size, 2 * VAR_3);
 if (VAR_17)
  goto err_cq;

 VAR_17 = FUNC_7(&VAR_16->wqres.buf);
 if (VAR_17)
  goto err_res;

 VAR_16->buf = (struct mlx4_cqe *)VAR_16->wqres.buf.direct.buf;
 *VAR_10 = VAR_16;

 return 0;

err_res:
 FUNC_8(VAR_15->dev, &VAR_16->wqres, VAR_16->buf_size);
err_cq:
 FUNC_3(VAR_16);
 *VAR_10 = ((void*)0);
 return VAR_17;
}
