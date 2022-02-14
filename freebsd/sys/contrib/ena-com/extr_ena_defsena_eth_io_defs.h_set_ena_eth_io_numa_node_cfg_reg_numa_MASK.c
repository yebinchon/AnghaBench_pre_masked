
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_eth_io_numa_node_cfg_reg {int numa_cfg; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct ena_eth_io_numa_node_cfg_reg *VAR_1, uint32_t VAR_2)
{
 VAR_1->numa_cfg |= VAR_2 & VAR_0;
}
