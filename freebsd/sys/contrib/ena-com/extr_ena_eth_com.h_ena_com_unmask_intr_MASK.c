
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_eth_io_intr_reg {int intr_control; } ;
struct ena_com_io_cq {int unmask_reg; int bus; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ena_com_io_cq *VAR_0,
           struct ena_eth_io_intr_reg *VAR_1)
{
 FUNC_0(VAR_0->bus, VAR_1->intr_control, VAR_0->unmask_reg);
}
