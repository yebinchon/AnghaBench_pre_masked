
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_vport_state {scalar_t__ default_vlan; int default_qos; } ;
struct mlx4_qos_manager {int priority_bm; } ;
struct TYPE_5__ {struct mlx4_qos_manager* qos_ctl; } ;
struct TYPE_6__ {TYPE_2__ master; } ;
struct mlx4_priv {TYPE_3__ mfunc; } ;
struct TYPE_4__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct mlx4_dev *VAR_2, int VAR_3,
     struct mlx4_vport_state *VAR_4)
{
 struct mlx4_qos_manager *VAR_5;
 struct mlx4_priv *VAR_6 = FUNC_1(VAR_2);

 if (!FUNC_0(VAR_2) ||
     !(VAR_2->caps.flags2 & VAR_0))
  return 0;

 VAR_5 = &VAR_6->mfunc.master.qos_ctl[VAR_3];

 if (VAR_4->default_vlan != VAR_1 &&
     FUNC_2(VAR_4->default_qos, VAR_5->priority_bm))
  return 1;

 return 0;
}
