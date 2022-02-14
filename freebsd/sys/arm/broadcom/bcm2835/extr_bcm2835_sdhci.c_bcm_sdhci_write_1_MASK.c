
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct sdhci_slot {int dummy; } ;
struct bcm_sdhci_softc {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (struct bcm_sdhci_softc*,int) ;
 int FUNC_1 (struct bcm_sdhci_softc*,int,int) ;
 struct bcm_sdhci_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0, struct sdhci_slot *VAR_1, bus_size_t VAR_2, uint8_t VAR_3)
{
 struct bcm_sdhci_softc *VAR_4 = FUNC_2(VAR_0);
 uint32_t VAR_5 = FUNC_0(VAR_4, VAR_2 & ~3);
 VAR_5 &= ~(0xff << (VAR_2 & 3)*8);
 VAR_5 |= (VAR_3 << (VAR_2 & 3)*8);
 FUNC_1(VAR_4, VAR_2 & ~3, VAR_5);
}
