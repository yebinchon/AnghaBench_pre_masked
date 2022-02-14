
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ena_eth_io_intr_reg {int intr_control; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(const struct ena_eth_io_intr_reg *VAR_1)
{
 return VAR_1->intr_control & VAR_0;
}
