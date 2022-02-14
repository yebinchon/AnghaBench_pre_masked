
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int qpn; } ;
struct TYPE_10__ {int usr_page; } ;
struct TYPE_9__ {int mtt; } ;
struct TYPE_8__ {TYPE_1__* uar; } ;
struct mlx4_en_tx_ring {int cqn; int cons; int last_nr_txbb; int doorbell_qpn; int qp_state; TYPE_5__ qp; TYPE_4__ context; TYPE_3__ wqres; TYPE_2__ bf; scalar_t__ bf_enabled; int qpn; int stride; int size; scalar_t__ watchdog_time; int buf_size; int buf; scalar_t__ poll_cnt; scalar_t__ prod; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct TYPE_7__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mlx4_en_priv*,int ,int ,int,int ,int ,int,int,TYPE_4__*) ;
 int FUNC_3 (int ,int *,TYPE_4__*,TYPE_5__*,int *) ;

int FUNC_4(struct mlx4_en_priv *VAR_1,
        struct mlx4_en_tx_ring *VAR_2,
        int VAR_3, int VAR_4)
{
 struct mlx4_en_dev *VAR_5 = VAR_1->mdev;
 int VAR_6;

 VAR_2->cqn = VAR_3;
 VAR_2->prod = 0;
 VAR_2->cons = 0xffffffff;
 VAR_2->last_nr_txbb = 1;
 VAR_2->poll_cnt = 0;
 FUNC_1(VAR_2->buf, 0, VAR_2->buf_size);
 VAR_2->watchdog_time = 0;

 VAR_2->qp_state = VAR_0;
 VAR_2->doorbell_qpn = VAR_2->qp.qpn << 8;

 FUNC_2(VAR_1, VAR_2->size, VAR_2->stride, 1, 0, VAR_2->qpn,
    VAR_2->cqn, VAR_4, &VAR_2->context);
 if (VAR_2->bf_enabled)
  VAR_2->context.usr_page = FUNC_0(VAR_2->bf.uar->index);

 VAR_6 = FUNC_3(VAR_5->dev, &VAR_2->wqres.mtt, &VAR_2->context,
          &VAR_2->qp, &VAR_2->qp_state);
 return VAR_6;
}
