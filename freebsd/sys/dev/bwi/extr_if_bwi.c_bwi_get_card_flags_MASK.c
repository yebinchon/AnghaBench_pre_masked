
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int sc_card_flags; scalar_t__ sc_pci_subvid; scalar_t__ sc_bbp_id; int sc_pci_revid; int sc_pci_subdid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bwi_softc*,int ,char*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct bwi_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bwi_softc *VAR_7)
{


 VAR_7->sc_card_flags = FUNC_1(VAR_7, VAR_4);
 if (VAR_7->sc_card_flags == 0xffff)
  VAR_7->sc_card_flags = 0;

 if (VAR_7->sc_pci_subvid == 0x1028 &&
     VAR_7->sc_bbp_id == VAR_0 &&
     VAR_7->sc_pci_revid == 0x74)
  VAR_7->sc_card_flags |= VAR_1;

 if (VAR_7->sc_pci_subvid == 0x106b &&
     VAR_7->sc_pci_subdid == 0x4e &&
     VAR_7->sc_pci_revid > 0x40)
  VAR_7->sc_card_flags |= VAR_2;

 FUNC_0(VAR_7, VAR_3, "card flags 0x%04x\n", VAR_7->sc_card_flags);


}
