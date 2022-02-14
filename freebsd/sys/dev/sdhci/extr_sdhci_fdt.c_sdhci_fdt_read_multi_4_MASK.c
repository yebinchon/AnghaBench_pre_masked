
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sdhci_slot {size_t num; } ;
struct sdhci_fdt_softc {int * mem_res; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int *,int ) ;
 struct sdhci_fdt_softc* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, struct sdhci_slot *VAR_1,
    bus_size_t VAR_2, uint32_t *VAR_3, bus_size_t VAR_4)
{
 struct sdhci_fdt_softc *VAR_5 = FUNC_1(VAR_0);

 FUNC_0(VAR_5->mem_res[VAR_1->num], VAR_2, VAR_3, VAR_4);
}
