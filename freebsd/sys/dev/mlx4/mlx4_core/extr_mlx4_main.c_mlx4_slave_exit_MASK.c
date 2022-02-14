
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int slave_cmd_mutex; } ;
struct mlx4_priv {TYPE_1__ cmd; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*,int ,int ,int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx4_dev *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_3(&VAR_4->cmd.slave_cmd_mutex);
 if (FUNC_0(VAR_3, VAR_1, 0, VAR_0,
     VAR_2))
  FUNC_2(VAR_3, "Failed to close slave function\n");
 FUNC_4(&VAR_4->cmd.slave_cmd_mutex);
}
