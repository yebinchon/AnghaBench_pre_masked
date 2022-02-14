
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_ib_gsi_qp {int port_num; } ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_qp_attr {scalar_t__ sq_psn; int qp_state; int port_num; int qkey; int pkey_index; } ;
struct ib_qp {int qp_num; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*,int ,int) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_gsi_qp *VAR_9, struct ib_qp *VAR_10,
    u16 VAR_11)
{
 struct mlx5_ib_dev *VAR_12 = FUNC_2(VAR_10->device);
 struct ib_qp_attr VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_14 = VAR_8 | VAR_4 | VAR_6 | VAR_5;
 VAR_13.qp_state = VAR_1;
 VAR_13.pkey_index = VAR_11;
 VAR_13.qkey = VAR_0;
 VAR_13.port_num = VAR_9->port_num;
 VAR_15 = FUNC_0(VAR_10, &VAR_13, VAR_14);
 if (VAR_15) {
  FUNC_1(VAR_12, "could not change QP%d state to INIT: %d\n",
       VAR_10->qp_num, VAR_15);
  return VAR_15;
 }

 VAR_13.qp_state = VAR_2;
 VAR_15 = FUNC_0(VAR_10, &VAR_13, VAR_8);
 if (VAR_15) {
  FUNC_1(VAR_12, "could not change QP%d state to RTR: %d\n",
       VAR_10->qp_num, VAR_15);
  return VAR_15;
 }

 VAR_13.qp_state = VAR_3;
 VAR_13.sq_psn = 0;
 VAR_15 = FUNC_0(VAR_10, &VAR_13, VAR_8 | VAR_7);
 if (VAR_15) {
  FUNC_1(VAR_12, "could not change QP%d state to RTS: %d\n",
       VAR_10->qp_num, VAR_15);
  return VAR_15;
 }

 return 0;
}
