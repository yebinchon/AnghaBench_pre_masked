
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_eth_io_numa_node_cfg_reg {int numa_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint32_t FUNC_0(const struct ena_eth_io_numa_node_cfg_reg *VAR_2)
{
 return (VAR_2->numa_cfg & VAR_0) >> VAR_1;
}
