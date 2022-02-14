
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_gsi_qp {int num_qps; struct ib_qp** tx_qps; struct ib_qp* rx_qp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_ud_wr {int pkey_index; } ;
struct ib_qp {int device; } ;


 int FUNC_0 (struct mlx5_ib_dev*) ;
 struct mlx5_ib_dev* FUNC_1 (int ) ;

__attribute__((used)) static struct ib_qp *FUNC_2(struct mlx5_ib_gsi_qp *VAR_0, struct ib_ud_wr *VAR_1)
{
 struct mlx5_ib_dev *VAR_2 = FUNC_1(VAR_0->rx_qp->device);
 int VAR_3 = VAR_1->pkey_index;

 if (!FUNC_0(VAR_2))
  return VAR_0->rx_qp;

 if (VAR_3 >= VAR_0->num_qps)
  return ((void*)0);

 return VAR_0->tx_qps[VAR_3];
}
