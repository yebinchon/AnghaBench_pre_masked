
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct umr_common {int sem; int qp; } ;
struct TYPE_5__ {int * wr_cqe; } ;
struct mlx5_umr_wr {TYPE_2__ wr; } ;
struct mlx5_ib_umr_context {scalar_t__ status; int done; int cqe; } ;
struct TYPE_4__ {int key; } ;
struct mlx5_ib_mr {TYPE_1__ mmkey; } ;
struct mlx5_ib_dev {struct umr_common umrc; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {scalar_t__ state; } ;
struct ib_send_wr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_2__*,struct ib_send_wr**) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_3 (struct mlx5_ib_umr_context*) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*) ;
 int FUNC_5 (struct mlx5_ib_dev*,TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_dev *VAR_3, struct mlx5_ib_mr *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_3->mdev;
 struct umr_common *VAR_6 = &VAR_3->umrc;
 struct mlx5_ib_umr_context VAR_7;
 struct mlx5_umr_wr VAR_8 = {};
 struct ib_send_wr *VAR_9;
 int VAR_10;

 if (VAR_5->state == VAR_2)
  return 0;

 FUNC_3(&VAR_7);

 VAR_8.wr.wr_cqe = &VAR_7.cqe;
 FUNC_5(VAR_3, &VAR_8.wr, VAR_4->mmkey.key);

 FUNC_0(&VAR_6->sem);
 VAR_10 = FUNC_1(VAR_6->qp, &VAR_8.wr, &VAR_9);
 if (VAR_10) {
  FUNC_6(&VAR_6->sem);
  FUNC_2(VAR_3, "err %d\n", VAR_10);
  goto error;
 } else {
  FUNC_7(&VAR_7.done);
  FUNC_6(&VAR_6->sem);
 }
 if (VAR_7.status != VAR_1) {
  FUNC_4(VAR_3, "unreg umr failed\n");
  VAR_10 = -VAR_0;
  goto error;
 }
 return 0;

error:
 return VAR_10;
}
