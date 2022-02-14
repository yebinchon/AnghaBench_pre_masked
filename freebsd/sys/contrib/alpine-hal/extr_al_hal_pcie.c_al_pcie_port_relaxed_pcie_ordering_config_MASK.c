
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_pcie_relaxed_ordering_params {scalar_t__ enable_rx_relaxed_ordering; scalar_t__ enable_tx_relaxed_ordering; } ;
struct TYPE_3__ {int pos_cntl; } ;
struct TYPE_4__ {TYPE_1__ ordering; } ;
struct al_pcie_regs {TYPE_2__ axi; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;
typedef scalar_t__ al_bool ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct al_pcie_port*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(
 struct al_pcie_port *VAR_7,
 struct al_pcie_relaxed_ordering_params *VAR_8)
{
 struct al_pcie_regs *VAR_9 = VAR_7->regs;
 enum al_pcie_operating_mode VAR_10 = FUNC_0(VAR_7);





 al_bool VAR_11 = (VAR_10 == VAR_1 ? VAR_0 : VAR_2);
 al_bool VAR_12 = (VAR_10 == VAR_1 ? VAR_2 : VAR_0);

 if (VAR_8) {
  VAR_11 = VAR_8->enable_tx_relaxed_ordering;
  VAR_12 = VAR_8->enable_rx_relaxed_ordering;
 }






 FUNC_1(
  VAR_9->axi.ordering.pos_cntl,
  VAR_3 |
  VAR_4 |
  VAR_5 |
  VAR_6,
  (VAR_11 ?
  (VAR_3 |
  VAR_6) : 0) |
  (VAR_12 ?
  (VAR_4 |
  VAR_5) : 0));
}
