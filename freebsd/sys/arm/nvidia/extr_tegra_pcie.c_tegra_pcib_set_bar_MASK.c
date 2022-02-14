
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct tegra_pcib_softc {int dummy; } ;
struct TYPE_2__ {int fpci_start; int size; int axi_start; } ;


 int FUNC_0 (struct tegra_pcib_softc*,int ,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct tegra_pcib_softc *VAR_1, int VAR_2, uint32_t VAR_3,
    uint64_t VAR_4, uint32_t VAR_5, int VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;

 VAR_8 = VAR_3 & ~0xFFF;
 VAR_9 = VAR_5 >> 12;
 VAR_7 = (uint32_t)(VAR_4 >> 8) & ~0xF;
 VAR_7 |= VAR_6 ? 0x1 : 0x0;
 FUNC_0(VAR_1, VAR_0[VAR_2].axi_start, VAR_8);
 FUNC_0(VAR_1, VAR_0[VAR_2].size, VAR_9);
 FUNC_0(VAR_1, VAR_0[VAR_2].fpci_start, VAR_7);
}
