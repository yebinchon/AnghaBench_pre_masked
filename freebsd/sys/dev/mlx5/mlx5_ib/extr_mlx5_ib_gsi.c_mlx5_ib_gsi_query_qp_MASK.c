
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_gsi_qp {int mutex; int cap; int rx_qp; } ;
struct ib_qp_init_attr {int cap; } ;
struct ib_qp_attr {int dummy; } ;
struct ib_qp {int dummy; } ;


 struct mlx5_ib_gsi_qp* FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (int ,struct ib_qp_attr*,int,struct ib_qp_init_attr*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ib_qp *VAR_0, struct ib_qp_attr *VAR_1,
    int VAR_2,
    struct ib_qp_init_attr *VAR_3)
{
 struct mlx5_ib_gsi_qp *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 FUNC_2(&VAR_4->mutex);
 VAR_5 = FUNC_1(VAR_4->rx_qp, VAR_1, VAR_2, VAR_3);
 VAR_3->cap = VAR_4->cap;
 FUNC_3(&VAR_4->mutex);

 return VAR_5;
}
