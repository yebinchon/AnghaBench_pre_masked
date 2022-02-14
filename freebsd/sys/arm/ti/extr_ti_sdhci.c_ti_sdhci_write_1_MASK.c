
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ti_sdhci_softc {int dummy; } ;
struct sdhci_slot {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_sdhci_softc*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ti_sdhci_softc*,int,int) ;
 struct ti_sdhci_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ti_sdhci_softc*,int ) ;
 int FUNC_5 (struct ti_sdhci_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_4, struct sdhci_slot *VAR_5, bus_size_t VAR_6,
    uint8_t VAR_7)
{
 struct ti_sdhci_softc *VAR_8 = FUNC_2(VAR_4);
 uint32_t VAR_9;
 VAR_9 = FUNC_0(VAR_8, VAR_6 & ~3);
 VAR_9 &= ~(0xff << (VAR_6 & 3) * 8);
 VAR_9 |= (VAR_7 << (VAR_6 & 3) * 8);

 FUNC_1(VAR_8, VAR_6 & ~3, VAR_9);
}
