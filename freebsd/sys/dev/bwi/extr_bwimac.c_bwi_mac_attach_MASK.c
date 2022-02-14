
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct bwi_softc {size_t sc_nmac; scalar_t__ sc_pci_did; int sc_dev; struct bwi_mac* sc_mac; } ;
struct bwi_mac {int mac_rev; int mac_flags; int mac_regwin; } ;


 int FUNC_0 (struct bwi_mac*,struct bwi_softc*,int,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bwi_softc*,int,char*,char*) ;
 int VAR_5 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_6 ;
 size_t* VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (size_t*) ;

int
FUNC_6(struct bwi_softc *VAR_8, int VAR_9, uint8_t VAR_10)
{
 struct bwi_mac *VAR_11;
 int VAR_12;

 FUNC_3(VAR_8->sc_nmac <= VAR_4 && VAR_8->sc_nmac >= 0,
     ("sc_nmac %d", VAR_8->sc_nmac));

 if (VAR_8->sc_nmac == VAR_4) {
  FUNC_4(VAR_8->sc_dev, "too many MACs\n");
  return 0;
 }




 if (VAR_8->sc_nmac != 0 &&
     VAR_8->sc_pci_did != VAR_6) {
  FUNC_2(VAR_8, VAR_1 | VAR_0, "%s\n",
   "ignore second MAC");
  return 0;
 }

 VAR_11 = &VAR_8->sc_mac[VAR_8->sc_nmac];


 if (FUNC_1(&VAR_11->mac_regwin)) {
  FUNC_4(VAR_8->sc_dev, "%dth MAC already attached\n",
         VAR_8->sc_nmac);
  return 0;
 }




 for (VAR_12 = 0; VAR_12 < FUNC_5(VAR_7); ++VAR_12) {
  if (VAR_7[VAR_12] == VAR_10)
   break;
 }
 if (VAR_12 == FUNC_5(VAR_7)) {
  FUNC_4(VAR_8->sc_dev, "MAC rev %u is "
         "not supported\n", VAR_10);
  return VAR_5;
 }

 FUNC_0(VAR_11, VAR_8, VAR_9, VAR_10);
 VAR_8->sc_nmac++;

 if (VAR_11->mac_rev < 5) {
  VAR_11->mac_flags |= VAR_2;
  FUNC_2(VAR_8, VAR_1 | VAR_0, "%s\n",
   "has TX stats");
 } else {
  VAR_11->mac_flags |= VAR_3;
 }

 FUNC_4(VAR_8->sc_dev, "MAC: rev %u\n", VAR_10);
 return 0;
}
