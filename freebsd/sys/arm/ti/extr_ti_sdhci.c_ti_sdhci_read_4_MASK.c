
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_sdhci_softc {scalar_t__ force_card_present; scalar_t__ disable_highspeed; } ;
struct sdhci_slot {int dummy; } ;
typedef int device_t ;
typedef int bus_size_t ;


 int FUNC_0 (struct ti_sdhci_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ti_sdhci_softc* FUNC_1 (int ) ;

__attribute__((used)) static uint32_t
FUNC_2(device_t VAR_4, struct sdhci_slot *VAR_5, bus_size_t VAR_6)
{
 struct ti_sdhci_softc *VAR_7 = FUNC_1(VAR_4);
 uint32_t VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_6);





 if (VAR_6 == VAR_1 && VAR_7->disable_highspeed)
  VAR_8 &= ~VAR_0;




 if (VAR_6 == VAR_3 && VAR_7->force_card_present)
  VAR_8 |= VAR_2;

 return (VAR_8);
}
