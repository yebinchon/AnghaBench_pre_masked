
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hw_mtu; } ;
struct TYPE_3__ {int rx_priority_flow_control; } ;
struct mlx5e_priv {TYPE_2__ params_ethtool; TYPE_1__ params; } ;
struct ieee_pfc {int pfc_en; } ;
typedef int pfc ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (struct ieee_pfc*,int) ;
 int FUNC_2 (struct mlx5e_priv*,int ,int ,struct ieee_pfc*,int *,int *) ;

int
FUNC_3(struct mlx5e_priv *VAR_1)
{
 struct ieee_pfc VAR_2;

 FUNC_0(VAR_1);
 FUNC_1(&VAR_2, sizeof(VAR_2));
 VAR_2.pfc_en = VAR_1->params.rx_priority_flow_control;
 return (-FUNC_2(VAR_1, VAR_0,
     VAR_1->params_ethtool.hw_mtu, &VAR_2, ((void*)0), ((void*)0)));
}
