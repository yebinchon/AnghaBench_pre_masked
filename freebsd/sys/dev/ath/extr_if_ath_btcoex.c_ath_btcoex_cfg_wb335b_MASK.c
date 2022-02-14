
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ath_softc {int sc_pci_devinfo; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath_softc*,int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct ath_softc *VAR_7)
{
 uint32_t VAR_8;
 int VAR_9 = 0;


 VAR_8 = 0xa4c1;






 if (VAR_7->sc_pci_devinfo & VAR_4) {
  VAR_8 &= ~VAR_2;
  VAR_8 |= VAR_0 <<
      VAR_3;
 } else if (VAR_7->sc_pci_devinfo & VAR_5) {
  VAR_8 &= ~VAR_2;
  VAR_8 |= VAR_1 <<
      VAR_3;
 }

 if (VAR_7->sc_pci_devinfo & VAR_6) {
  VAR_9 = 1;
 }

 FUNC_1(VAR_7->sc_dev, "Enabling WB335 BTCOEX\n");

 return (FUNC_0(VAR_7, VAR_8, VAR_9));
}
