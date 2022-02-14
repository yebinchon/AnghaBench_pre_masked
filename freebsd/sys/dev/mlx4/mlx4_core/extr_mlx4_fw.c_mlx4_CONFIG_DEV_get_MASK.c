
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_dev {int dummy; } ;
struct mlx4_config_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (struct mlx4_config_dev*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

__attribute__((used)) static int FUNC_6(struct mlx4_dev *VAR_3, struct mlx4_config_dev *VAR_4)
{
 int VAR_5;
 struct mlx4_cmd_mailbox *VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_5 = FUNC_4(VAR_3, 0, VAR_6->dma, 0, 1, VAR_0,
      VAR_2, VAR_1);

 if (!VAR_5)
  FUNC_2(VAR_4, VAR_6->buf, sizeof(*VAR_4));

 FUNC_5(VAR_3, VAR_6);
 return VAR_5;
}
