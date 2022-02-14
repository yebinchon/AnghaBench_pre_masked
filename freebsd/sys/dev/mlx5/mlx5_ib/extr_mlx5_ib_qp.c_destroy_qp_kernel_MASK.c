
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wrid; } ;
struct TYPE_10__ {int wr_data; int wrid; int w_list; int wqe_head; } ;
struct mlx5_ib_qp {TYPE_3__* bf; int buf; TYPE_1__ rq; TYPE_4__ sq; int db; } ;
struct mlx5_ib_dev {TYPE_5__* mdev; } ;
struct TYPE_8__ {int uuari; } ;
struct TYPE_11__ {TYPE_2__ priv; } ;
struct TYPE_9__ {int uuarn; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*,int *) ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_qp *VAR_1)
{
 FUNC_3(VAR_0->mdev, &VAR_1->db);
 FUNC_1(VAR_1->sq.wqe_head);
 FUNC_1(VAR_1->sq.w_list);
 FUNC_1(VAR_1->sq.wrid);
 FUNC_1(VAR_1->sq.wr_data);
 FUNC_1(VAR_1->rq.wrid);
 FUNC_2(VAR_0->mdev, &VAR_1->buf);
 FUNC_0(&VAR_0->mdev->priv.uuari, VAR_1->bf->uuarn);
}
