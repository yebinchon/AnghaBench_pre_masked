
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_sdhci_softc {int sc_bsh; int sc_bst; } ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline uint32_t
FUNC_1(struct bcm_sdhci_softc *VAR_0, bus_size_t VAR_1)
{
 uint32_t VAR_2 = FUNC_0(VAR_0->sc_bst, VAR_0->sc_bsh, VAR_1);
 return VAR_2;
}
