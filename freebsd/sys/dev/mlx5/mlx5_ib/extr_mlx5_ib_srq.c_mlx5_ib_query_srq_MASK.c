
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_srq_attr {int lwm; } ;
struct TYPE_2__ {int max_gs; scalar_t__ max; } ;
struct mlx5_ib_srq {TYPE_1__ msrq; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_srq_attr {int max_sge; scalar_t__ max_wr; int srq_limit; } ;
struct ib_srq {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_srq_attr*) ;
 struct mlx5_srq_attr* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,TYPE_1__*,struct mlx5_srq_attr*) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;
 struct mlx5_ib_srq* FUNC_4 (struct ib_srq*) ;

int FUNC_5(struct ib_srq *VAR_2, struct ib_srq_attr *VAR_3)
{
 struct mlx5_ib_dev *VAR_4 = FUNC_3(VAR_2->device);
 struct mlx5_ib_srq *VAR_5 = FUNC_4(VAR_2);
 int VAR_6;
 struct mlx5_srq_attr *VAR_7;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_4->mdev, &VAR_5->msrq, VAR_7);
 if (VAR_6)
  goto out_box;

 VAR_3->srq_limit = VAR_7->lwm;
 VAR_3->max_wr = VAR_5->msrq.max - 1;
 VAR_3->max_sge = VAR_5->msrq.max_gs;

out_box:
 FUNC_0(VAR_7);
 return VAR_6;
}
