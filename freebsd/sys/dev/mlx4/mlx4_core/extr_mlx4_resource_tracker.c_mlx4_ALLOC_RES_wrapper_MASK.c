
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_vhcr {int op_modifier; int in_modifier; int out_param; int in_param; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int,int ,int *,int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int,int ,int *) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int,int ,int *,int) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int,int ,int *) ;
 int FUNC_4 (struct mlx4_dev*,int,int,int,int ,int *) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int,int ,int *) ;
 int FUNC_6 (struct mlx4_dev*,int,int,int,int ,int *) ;
 int FUNC_7 (struct mlx4_dev*,int,int,int,int ,int *,int) ;
 int FUNC_8 (struct mlx4_dev*,int,int,int,int ,int *) ;

int FUNC_9(struct mlx4_dev *VAR_1, int VAR_2,
      struct mlx4_vhcr *VAR_3,
      struct mlx4_cmd_mailbox *VAR_4,
      struct mlx4_cmd_mailbox *VAR_5,
      struct mlx4_cmd_info *VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_3->op_modifier;

 switch (VAR_3->in_modifier & 0xFF) {
 case 131:
  VAR_7 = FUNC_5(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
       VAR_3->in_param, &VAR_3->out_param);
  break;

 case 132:
  VAR_7 = FUNC_4(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
        VAR_3->in_param, &VAR_3->out_param);
  break;

 case 133:
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
        VAR_3->in_param, &VAR_3->out_param);
  break;

 case 135:
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
       VAR_3->in_param, &VAR_3->out_param);
  break;

 case 130:
  VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
        VAR_3->in_param, &VAR_3->out_param);
  break;

 case 134:
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
        VAR_3->in_param, &VAR_3->out_param,
        (VAR_3->in_modifier >> 8) & 0xFF);
  break;

 case 129:
  VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
         VAR_3->in_param, &VAR_3->out_param,
         (VAR_3->in_modifier >> 8) & 0xFF);
  break;

 case 136:
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
     VAR_3->in_param, &VAR_3->out_param, 0);
  break;

 case 128:
  VAR_7 = FUNC_8(VAR_1, VAR_2, VAR_3->op_modifier, VAR_8,
          VAR_3->in_param, &VAR_3->out_param);
  break;

 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
