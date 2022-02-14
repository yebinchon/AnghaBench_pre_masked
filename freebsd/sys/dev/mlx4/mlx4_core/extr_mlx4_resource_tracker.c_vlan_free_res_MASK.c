
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_slave_state {int old_vlan_api; } ;
struct TYPE_3__ {struct mlx4_slave_state* slave_state; } ;
struct TYPE_4__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct mlx4_dev*,int,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,int,int) ;
 int FUNC_3 (struct mlx4_dev*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_1, int VAR_2, int VAR_3, int VAR_4,
       u64 VAR_5, u64 *VAR_6, int VAR_7)
{
 struct mlx4_priv *VAR_8 = FUNC_1(VAR_1);
 struct mlx4_slave_state *VAR_9 = VAR_8->mfunc.master.slave_state;
 int VAR_10 = 0;

 VAR_7 = FUNC_2(
   VAR_1, VAR_2, VAR_7);

 if (VAR_7 < 0)
  return -VAR_0;
 switch (VAR_3) {
 case 128:
  if (VAR_9[VAR_2].old_vlan_api)
   return 0;
  if (!VAR_7)
   return -VAR_0;
  FUNC_3(VAR_1, VAR_2, VAR_5, VAR_7);
  FUNC_0(VAR_1, VAR_7, VAR_5);
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }

 return VAR_10;
}
