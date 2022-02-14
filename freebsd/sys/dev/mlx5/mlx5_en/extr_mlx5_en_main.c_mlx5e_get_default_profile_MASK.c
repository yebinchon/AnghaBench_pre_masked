
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_dim_cq_moder {scalar_t__ pkts; } ;
struct TYPE_2__ {scalar_t__ hw_lro_en; } ;
struct mlx5e_priv {TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct net_dim_cq_moder FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct mlx5e_priv *VAR_2, int VAR_3, struct net_dim_cq_moder *VAR_4)
{

 *VAR_4 = FUNC_0(VAR_3, VAR_0);


 if (VAR_2->params.hw_lro_en &&
     VAR_4->pkts > VAR_1) {
  VAR_4->pkts = VAR_1;
 }
}
