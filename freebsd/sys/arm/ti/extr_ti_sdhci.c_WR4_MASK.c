
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_sdhci_softc {scalar_t__ sdhci_reg_off; int mem_res; } ;
typedef scalar_t__ bus_size_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct ti_sdhci_softc *VAR_0, bus_size_t VAR_1, uint32_t VAR_2)
{

 FUNC_0(VAR_0->mem_res, VAR_1 + VAR_0->sdhci_reg_off, VAR_2);
}
