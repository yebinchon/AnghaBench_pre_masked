
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bhnd_pcihb_softc {int quirks; int pci_dev; } ;
typedef scalar_t__ bhnd_pci_war_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bhnd_pcihb_softc*,int ) ;
 int FUNC_1 (struct bhnd_pcihb_softc*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct bhnd_pcihb_softc *VAR_8, bhnd_pci_war_state VAR_9)
{



 if (VAR_8->quirks & VAR_3) {
  uint32_t VAR_10;
  VAR_10 = FUNC_0(VAR_8, VAR_1);
  VAR_10 &= ~VAR_0;
  FUNC_1(VAR_8, VAR_1, VAR_10);
 }


 if (VAR_8->quirks & VAR_2) {
  uint16_t VAR_11;

  VAR_11 = FUNC_2(VAR_8->pci_dev, VAR_7, 2);

  VAR_11 |= VAR_6;
  if (VAR_9 == VAR_4)
   VAR_11 &= ~VAR_5;

  FUNC_3(VAR_8->pci_dev, VAR_7, VAR_11, 2);
 }

 return (0);
}
