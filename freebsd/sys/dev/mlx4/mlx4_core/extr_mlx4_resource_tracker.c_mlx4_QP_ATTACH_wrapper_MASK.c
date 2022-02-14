
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct res_qp {int dummy; } ;
struct mlx4_vhcr {int in_modifier; int op_modifier; } ;
struct mlx4_qp {int qpn; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int* buf; } ;
struct mlx4_cmd_info {int dummy; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int,struct res_qp*,int*,int,int,scalar_t__) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int ,struct res_qp**) ;
 int FUNC_2 (struct mlx4_dev*,int,int*,int) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (struct mlx4_dev*,int,int,int ) ;
 int FUNC_5 (struct mlx4_dev*,int,struct mlx4_qp*,int*,int,int,int,scalar_t__*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_qp*,int*,int,int,scalar_t__) ;
 int FUNC_7 (struct mlx4_dev*,int,struct res_qp*,int*,int,int,scalar_t__*) ;

int FUNC_8(struct mlx4_dev *VAR_1, int VAR_2,
          struct mlx4_vhcr *VAR_3,
          struct mlx4_cmd_mailbox *VAR_4,
          struct mlx4_cmd_mailbox *VAR_5,
          struct mlx4_cmd_info *VAR_6)
{
 struct mlx4_qp VAR_7;
 u8 *VAR_8 = VAR_4->buf;
 enum mlx4_protocol VAR_9 = (VAR_3->in_modifier >> 28) & 0x7;
 int VAR_10;
 int VAR_11;
 struct res_qp *VAR_12;
 u64 VAR_13 = 0;
 int VAR_14 = VAR_3->op_modifier;
 int VAR_15 = VAR_3->in_modifier >> 31;
 u8 VAR_16 = 2;
 enum mlx4_steer_type VAR_17 = (VAR_8[7] & VAR_16) >> 1;

 VAR_11 = VAR_3->in_modifier & 0xffffff;
 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_11, VAR_0, &VAR_12);
 if (VAR_10)
  return VAR_10;

 VAR_7.qpn = VAR_11;
 if (VAR_14) {
  VAR_10 = FUNC_5(VAR_1, VAR_2, &VAR_7, VAR_8, VAR_15, VAR_9,
    VAR_17, &VAR_13);
  if (VAR_10) {
   FUNC_3("Fail to attach rule to qp 0x%x\n", VAR_11);
   goto ex_put;
  }
  VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_12, VAR_8, VAR_9, VAR_17, VAR_13);
  if (VAR_10)
   goto ex_detach;
 } else {
  VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_8, VAR_9);
  if (VAR_10)
   goto ex_put;

  VAR_10 = FUNC_7(VAR_1, VAR_2, VAR_12, VAR_8, VAR_9, VAR_17, &VAR_13);
  if (VAR_10)
   goto ex_put;

  VAR_10 = FUNC_6(VAR_1, &VAR_7, VAR_8, VAR_9, VAR_17, VAR_13);
  if (VAR_10)
   FUNC_3("Fail to detach rule from qp 0x%x reg_id = 0x%llx\n",
          VAR_11, (unsigned long long)VAR_13);
 }
 FUNC_4(VAR_1, VAR_2, VAR_11, VAR_0);
 return VAR_10;

ex_detach:
 FUNC_6(VAR_1, &VAR_7, VAR_8, VAR_9, VAR_17, VAR_13);
ex_put:
 FUNC_4(VAR_1, VAR_2, VAR_11, VAR_0);
 return VAR_10;
}
