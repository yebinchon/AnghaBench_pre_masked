
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct bwi_softc {scalar_t__ sc_pci_did; scalar_t__ sc_nmac; TYPE_1__* sc_mac; int sc_dev; int sc_bus_regwin; int sc_com_regwin; void* sc_cap; void* sc_bbp_pkg; void* sc_bbp_rev; scalar_t__ sc_bbp_id; int sc_pci_revid; } ;
struct TYPE_6__ {scalar_t__ did_min; scalar_t__ did_max; scalar_t__ bbp_id; int nregwin; } ;
struct TYPE_5__ {int mac_regwin; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_2 (struct bwi_softc*,int ) ;
 int FUNC_3 (struct bwi_softc*,int ,char*,int,void*) ;
 int VAR_11 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (int,int ) ;
 TYPE_2__* VAR_12 ;
 int FUNC_7 (struct bwi_softc*,int,int) ;
 TYPE_2__* VAR_13 ;
 int FUNC_8 (struct bwi_softc*,scalar_t__*,int*) ;
 int FUNC_9 (struct bwi_softc*,int) ;
 int FUNC_10 (struct bwi_softc*,int *,int *) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_13(struct bwi_softc *VAR_14)
{
 uint16_t VAR_15, VAR_16;
 uint8_t VAR_17;
 uint32_t VAR_18;
 int VAR_19, VAR_20, VAR_21;





 VAR_19 = FUNC_9(VAR_14, 0);
 if (VAR_19) {
  FUNC_11(VAR_14->sc_dev, "can't select regwin 0\n");
  return VAR_19;
 }
 FUNC_8(VAR_14, &VAR_16, &VAR_17);




 VAR_15 = 0;
 VAR_18 = 0;
 if (VAR_16 == VAR_9) {
  VAR_18 = FUNC_2(VAR_14, VAR_2);
  VAR_15 = FUNC_6(VAR_18, VAR_3);

  FUNC_0(&VAR_14->sc_com_regwin, 0, VAR_16, VAR_17);

  VAR_14->sc_cap = FUNC_2(VAR_14, VAR_0);
 } else {
  for (VAR_21 = 0; VAR_21 < FUNC_12(VAR_12); ++VAR_21) {
   if (VAR_14->sc_pci_did >= VAR_12[VAR_21].did_min &&
       VAR_14->sc_pci_did <= VAR_12[VAR_21].did_max) {
    VAR_15 = VAR_12[VAR_21].bbp_id;
    break;
   }
  }
  if (VAR_15 == 0) {
   FUNC_11(VAR_14->sc_dev, "no BBP id for device id "
          "0x%04x\n", VAR_14->sc_pci_did);
   return VAR_11;
  }

  VAR_18 = FUNC_5(VAR_14->sc_pci_revid, VAR_5) |
         FUNC_5(0, VAR_4);
 }




 VAR_20 = 0;
 if (VAR_16 == VAR_9 && VAR_17 >= 4) {
  VAR_20 = FUNC_6(VAR_18, VAR_6);
 } else {
  for (VAR_21 = 0; VAR_21 < FUNC_12(VAR_13); ++VAR_21) {
   if (VAR_13[VAR_21].bbp_id == VAR_15) {
    VAR_20 = VAR_13[VAR_21].nregwin;
    break;
   }
  }
  if (VAR_20 == 0) {
   FUNC_11(VAR_14->sc_dev, "no number of win for "
          "BBP id 0x%04x\n", VAR_15);
   return VAR_11;
  }
 }


 VAR_14->sc_bbp_id = VAR_15;
 VAR_14->sc_bbp_rev = FUNC_6(VAR_18, VAR_5);
 VAR_14->sc_bbp_pkg = FUNC_6(VAR_18, VAR_4);
 FUNC_11(VAR_14->sc_dev, "BBP: id 0x%04x, rev 0x%x, pkg %d\n",
        VAR_14->sc_bbp_id, VAR_14->sc_bbp_rev, VAR_14->sc_bbp_pkg);

 FUNC_3(VAR_14, VAR_1, "nregwin %d, cap 0x%08x\n",
  VAR_20, VAR_14->sc_cap);






 VAR_21 = FUNC_1(&VAR_14->sc_com_regwin) ? 1 : 0;

 for (; VAR_21 < VAR_20; ++VAR_21) {



  VAR_19 = FUNC_9(VAR_14, VAR_21);
  if (VAR_19) {
   FUNC_11(VAR_14->sc_dev,
          "can't select regwin %d\n", VAR_21);
   return VAR_19;
  }
  FUNC_8(VAR_14, &VAR_16, &VAR_17);







  if (VAR_16 == VAR_7 ||
      VAR_16 == VAR_8) {
   if (FUNC_1(&VAR_14->sc_bus_regwin)) {
    FUNC_11(VAR_14->sc_dev,
           "bus regwin already exists\n");
   } else {
    FUNC_0(&VAR_14->sc_bus_regwin, VAR_21,
        VAR_16, VAR_17);
   }
  } else if (VAR_16 == VAR_10) {

   FUNC_7(VAR_14, VAR_21, VAR_17);
  }
 }


 if (!FUNC_1(&VAR_14->sc_mac[0].mac_regwin)) {
  FUNC_11(VAR_14->sc_dev, "no MAC was found\n");
  return VAR_11;
 }
 FUNC_4(VAR_14->sc_nmac > 0, ("no mac's"));


 if (!FUNC_1(&VAR_14->sc_bus_regwin)) {
  FUNC_11(VAR_14->sc_dev, "no bus regwin was found\n");
  return VAR_11;
 }


 VAR_19 = FUNC_10(VAR_14, &VAR_14->sc_mac[0].mac_regwin, ((void*)0));
 if (VAR_19)
  return VAR_19;

 return 0;
}
