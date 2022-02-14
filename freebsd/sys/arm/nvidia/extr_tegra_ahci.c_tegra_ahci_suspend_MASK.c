
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int r_mem; } ;
struct tegra_ahci_sc {TYPE_1__ ctlr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 struct tegra_ahci_sc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct tegra_ahci_sc *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(VAR_2);

 FUNC_1(VAR_3->ctlr.r_mem, VAR_0,
      FUNC_0(VAR_3->ctlr.r_mem, VAR_0) & (~VAR_1));
 return (0);
}
