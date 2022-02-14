
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ from_state; } ;
struct res_qp {TYPE_1__ com; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int ,struct res_qp**) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ) ;

int FUNC_3(struct mlx4_dev *VAR_3, int VAR_4,
   struct mlx4_vhcr *VAR_5,
   struct mlx4_cmd_mailbox *VAR_6,
   struct mlx4_cmd_mailbox *VAR_7,
   struct mlx4_cmd_info *VAR_8)
{
 int VAR_9;
 int VAR_10 = VAR_5->in_modifier & 0x7fffff;
 struct res_qp *VAR_11;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_10, VAR_1, &VAR_11);
 if (VAR_9)
  return VAR_9;
 if (VAR_11->com.from_state != VAR_2) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
out:
 FUNC_2(VAR_3, VAR_4, VAR_10, VAR_1);
 return VAR_9;
}
