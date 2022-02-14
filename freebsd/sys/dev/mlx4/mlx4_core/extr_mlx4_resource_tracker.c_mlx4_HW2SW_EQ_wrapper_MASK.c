
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct res_eq {TYPE_2__* mtt; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_3__ {int res_id; } ;
struct TYPE_4__ {TYPE_1__ com; int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int ,struct res_eq**) ;
 int FUNC_2 (struct mlx4_dev*,int,int ,int ,int *) ;
 int FUNC_3 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_4 (struct mlx4_dev*,int,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_7 (struct mlx4_dev*,int,int ,int) ;

int FUNC_8(struct mlx4_dev *VAR_3, int VAR_4,
     struct mlx4_vhcr *VAR_5,
     struct mlx4_cmd_mailbox *VAR_6,
     struct mlx4_cmd_mailbox *VAR_7,
     struct mlx4_cmd_info *VAR_8)
{
 int VAR_9 = VAR_5->in_modifier;
 int VAR_10 = VAR_9 | (VAR_4 << 10);
 struct res_eq *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_10, VAR_1, &VAR_11);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_11->mtt->com.res_id, VAR_2, ((void*)0));
 if (VAR_12)
  goto ex_abort;

 VAR_12 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_12)
  goto ex_put;

 FUNC_0(&VAR_11->mtt->ref_count);
 FUNC_4(VAR_3, VAR_4, VAR_11->mtt->com.res_id, VAR_2);
 FUNC_7(VAR_3, VAR_4, VAR_0, VAR_10);
 FUNC_5(VAR_3, VAR_4, VAR_10, 1, VAR_0, 0);

 return 0;

ex_put:
 FUNC_4(VAR_3, VAR_4, VAR_11->mtt->com.res_id, VAR_2);
ex_abort:
 FUNC_6(VAR_3, VAR_4, VAR_0, VAR_10);

 return VAR_12;
}
