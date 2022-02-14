
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_2__* port_regs; } ;
struct al_pcie_port {scalar_t__ rev_id; struct al_pcie_regs* regs; } ;
typedef scalar_t__ al_bool ;
struct TYPE_3__ {int cr1; int cr2; int index; } ;
struct TYPE_4__ {TYPE_1__ iatu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int ) ;
 unsigned int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct al_pcie_port *VAR_8, unsigned int VAR_9)
{
 struct al_pcie_regs *VAR_10 = VAR_8->regs;
 int VAR_11 = (VAR_8->rev_id == VAR_4) ?
  VAR_3 : VAR_2;
 int VAR_12;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  al_bool VAR_13 = 0;
  uint32_t VAR_14 = 0;
  unsigned int VAR_15;
  FUNC_4(VAR_14, 0xF, 0, VAR_12);
  FUNC_2(VAR_14, 31, VAR_1);
  FUNC_6(&VAR_10->port_regs->iatu.index, VAR_14);
  VAR_14 = FUNC_5(&VAR_10->port_regs->iatu.cr2);
  VAR_13 = FUNC_0(VAR_14, 31) ? VAR_5 : VAR_0;
  VAR_14 = FUNC_5(&VAR_10->port_regs->iatu.cr1);
  VAR_15 = FUNC_3(VAR_14,
    VAR_6,
    VAR_7);
  if ((VAR_13 == VAR_5) && (VAR_9 == VAR_15)) {

   FUNC_1(VAR_14, 8);
   FUNC_6(&VAR_10->port_regs->iatu.cr1, VAR_14);
  }
 }
}
