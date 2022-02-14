
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_priv {TYPE_3__* port; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_5__ {TYPE_1__* roce_gids; } ;
struct TYPE_6__ {TYPE_2__ gid_table; } ;
struct TYPE_4__ {int raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_2, int VAR_3, int VAR_4,
     u8 *VAR_5)
{
 struct mlx4_priv *VAR_6 = FUNC_2(VAR_2);

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 FUNC_0(VAR_5, VAR_6->port[VAR_3].gid_table.roce_gids[VAR_4].raw,
        VAR_1);
 return 0;
}
