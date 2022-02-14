
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixl_pf {int stat_offsets_loaded; int stats_offsets; int stats; } ;
struct i40e_hw_port_stats {int dummy; } ;


 int FUNC_0 (int *,int) ;

void
FUNC_1(struct ixl_pf *VAR_0)
{
 FUNC_0(&VAR_0->stats, sizeof(struct i40e_hw_port_stats));
 FUNC_0(&VAR_0->stats_offsets, sizeof(struct i40e_hw_port_stats));
 VAR_0->stat_offsets_loaded = 0;
}
