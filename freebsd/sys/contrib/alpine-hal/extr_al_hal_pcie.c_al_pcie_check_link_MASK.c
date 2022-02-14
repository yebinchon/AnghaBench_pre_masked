
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* debug; } ;
struct al_pcie_regs {TYPE_2__ app; } ;
struct al_pcie_port {int port_id; scalar_t__ regs; } ;
typedef int al_bool ;
struct TYPE_3__ {int info_0; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int ,int ,scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static al_bool
FUNC_3(
 struct al_pcie_port *VAR_6,
 uint8_t *VAR_7)
{
 struct al_pcie_regs *VAR_8 = (struct al_pcie_regs *)VAR_6->regs;
 uint32_t VAR_9;
 uint8_t VAR_10;

 VAR_9 = FUNC_2(&VAR_8->app.debug->info_0);

 VAR_10 = FUNC_0(VAR_9,
   VAR_4,
   VAR_5);

 FUNC_1("PCIe %d: Port Debug 0: 0x%08x. LTSSM state :0x%x\n",
  VAR_6->port_id, VAR_9, VAR_10);

 if (VAR_7)
  *VAR_7 = VAR_10;

 if ((VAR_10 == VAR_1) ||
   (VAR_10 == VAR_2))
  return VAR_3;
 return VAR_0;
}
