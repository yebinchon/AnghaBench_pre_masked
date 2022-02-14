
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_slave_state {int active; } ;
struct TYPE_7__ {struct mlx4_slave_state* slave_state; } ;
struct TYPE_8__ {TYPE_3__ master; } ;
struct mlx4_priv {TYPE_4__ mfunc; } ;
struct TYPE_5__ {int port; } ;
struct TYPE_6__ {TYPE_1__ port_mgmt_change; } ;
struct mlx4_eqe {TYPE_2__ event; int subtype; int type; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_eqe*,int ,int) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_eqe*) ;
 int FUNC_2 (struct mlx4_dev*,int,int ) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;

int FUNC_4(struct mlx4_dev *VAR_2, int VAR_3, u8 VAR_4)
{
 struct mlx4_eqe VAR_5;

 struct mlx4_priv *VAR_6 = FUNC_3(VAR_2);
 struct mlx4_slave_state *VAR_7 = &VAR_6->mfunc.master.slave_state[VAR_3];

 if (!VAR_7->active)
  return 0;

 FUNC_0(&VAR_5, 0, sizeof VAR_5);

 VAR_5.type = VAR_1;
 VAR_5.subtype = VAR_0;
 VAR_5.event.port_mgmt_change.port = FUNC_2(VAR_2, VAR_3, VAR_4);

 return FUNC_1(VAR_2, VAR_3, &VAR_5);
}
