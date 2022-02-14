
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_vsi {int stat_offsets_loaded; int eth_stats_offsets; int eth_stats; } ;
struct i40e_eth_stats {int dummy; } ;


 int FUNC_0 (int *,int) ;

void
FUNC_1(struct ixl_vsi *VAR_0)
{
 FUNC_0(&VAR_0->eth_stats, sizeof(struct i40e_eth_stats));
 FUNC_0(&VAR_0->eth_stats_offsets, sizeof(struct i40e_eth_stats));
 VAR_0->stat_offsets_loaded = 0;
}
