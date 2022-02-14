
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int tx_queue_size; int tx_completion_fact_max; int tx_completion_fact; } ;
struct mlx5e_priv {TYPE_1__ params_ethtool; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct mlx5e_priv *VAR_1)
{
 uint64_t VAR_2 = VAR_1->params_ethtool.tx_queue_size /
     (2 * VAR_0);






 if (VAR_2 < 1)
  VAR_2 = 1;
 else if (VAR_2 > 65535)
  VAR_2 = 65535;
 VAR_1->params_ethtool.tx_completion_fact_max = VAR_2;





 if (VAR_1->params_ethtool.tx_completion_fact < 1)
  VAR_1->params_ethtool.tx_completion_fact = 1;
 else if (VAR_1->params_ethtool.tx_completion_fact > VAR_2)
  VAR_1->params_ethtool.tx_completion_fact = VAR_2;
}
