
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ from_state; } ;
struct res_cq {TYPE_1__ com; } ;
struct mlx4_vhcr {int in_modifier; scalar_t__ op_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int ,struct res_cq**) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*,struct res_cq*) ;
 int FUNC_2 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int ) ;

int FUNC_4(struct mlx4_dev *VAR_2, int VAR_3,
      struct mlx4_vhcr *VAR_4,
      struct mlx4_cmd_mailbox *VAR_5,
      struct mlx4_cmd_mailbox *VAR_6,
      struct mlx4_cmd_info *VAR_7)
{
 int VAR_8 = VAR_4->in_modifier;
 struct res_cq *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_2, VAR_3, VAR_8, VAR_0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9->com.from_state != VAR_1)
  goto ex_put;

 if (VAR_4->op_modifier == 0) {
  VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
  goto ex_put;
 }

 VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
ex_put:
 FUNC_3(VAR_2, VAR_3, VAR_8, VAR_0);

 return VAR_10;
}
