
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ chip_id; } ;
struct bwn_softc {int sc_dev; TYPE_1__ sc_cid; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct bwn_mac {TYPE_2__ mac_phy; struct bwn_softc* mac_sc; } ;
typedef int bhnd_pmu_spuravoid ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;



 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;

void
FUNC_2(struct bwn_mac *VAR_11, bhnd_pmu_spuravoid VAR_12)
{
 struct bwn_softc *VAR_13 = VAR_11->mac_sc;
 uint16_t VAR_14 = VAR_13->sc_cid.chip_id;

 if (VAR_14 == VAR_7) {
  switch (VAR_12) {
  case 129:
   FUNC_0(VAR_11, VAR_10, 0x1862);
   FUNC_0(VAR_11, VAR_9, 0x6);
   break;
  case 130:
   FUNC_0(VAR_11, VAR_10, 0x3e70);
   FUNC_0(VAR_11, VAR_9, 0x6);
   break;
  case 128:
   FUNC_0(VAR_11, VAR_10, 0x6666);
   FUNC_0(VAR_11, VAR_9, 0x6);
   break;
  }
 } else if (VAR_14 == VAR_0 ||
     VAR_14 == VAR_1 ||
     VAR_14 == VAR_2 ||
     VAR_14 == VAR_3 ||
     VAR_14 == VAR_4 ||
     VAR_14 == VAR_5 ||
     VAR_14 == VAR_6) {
  switch (VAR_12) {
  case 129:
   FUNC_0(VAR_11, VAR_10, 0x2082);
   FUNC_0(VAR_11, VAR_9, 0x8);
   break;
  case 130:
   FUNC_0(VAR_11, VAR_10, 0x5341);
   FUNC_0(VAR_11, VAR_9, 0x8);
   break;
  case 128:
   FUNC_0(VAR_11, VAR_10, 0x8889);
   FUNC_0(VAR_11, VAR_9, 0x8);
   break;
  }
 } else if (VAR_11->mac_phy.type == VAR_8) {
  switch (VAR_12) {
  case 129:
   FUNC_1(VAR_13->sc_dev, "invalid spuravoid mode: "
       "%d\n", VAR_12);
   break;
  case 130:
   FUNC_0(VAR_11, VAR_10, 0x7CE0);
   FUNC_0(VAR_11, VAR_9, 0xC);
   break;
  case 128:
   FUNC_0(VAR_11, VAR_10, 0xCCCD);
   FUNC_0(VAR_11, VAR_9, 0xC);
   break;
  }
 }
}
