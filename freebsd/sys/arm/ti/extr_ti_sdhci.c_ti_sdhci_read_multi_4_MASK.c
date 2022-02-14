
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_sdhci_softc {scalar_t__ sdhci_reg_off; int mem_res; } ;
struct sdhci_slot {int dummy; } ;
typedef int device_t ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int ,scalar_t__,int *,scalar_t__) ;
 struct ti_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct sdhci_slot *VAR_1, bus_size_t VAR_2,
    uint32_t *VAR_3, bus_size_t VAR_4)
{
 struct ti_sdhci_softc *VAR_5 = FUNC_1(VAR_0);

 FUNC_0(VAR_5->mem_res, VAR_2 + VAR_5->sdhci_reg_off, VAR_3, VAR_4);
}
