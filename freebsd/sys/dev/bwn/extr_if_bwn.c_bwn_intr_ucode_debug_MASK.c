
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_softc {int sc_dev; } ;
struct TYPE_2__ {scalar_t__ opensource; } ;
struct bwn_mac {TYPE_1__ mac_fw; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_3)
{
 struct bwn_softc *VAR_4 = VAR_3->mac_sc;
 uint16_t VAR_5;

 if (VAR_3->mac_fw.opensource == 0)
  return;

 VAR_5 = FUNC_1(VAR_3, VAR_2, VAR_1);
 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_3);
  break;
 case 130:
  FUNC_3(VAR_4->sc_dev, "BWN_DEBUGINTR_DUMP_SHM\n");
  break;
 case 131:
  FUNC_3(VAR_4->sc_dev, "BWN_DEBUGINTR_DUMP_REGS\n");
  break;
 case 129:
  FUNC_3(VAR_4->sc_dev, "BWN_DEBUGINTR_MARKER\n");
  break;
 default:
  FUNC_3(VAR_4->sc_dev,
      "ucode debug unknown reason: %#x\n", VAR_5);
 }

 FUNC_2(VAR_3, VAR_2, VAR_1,
     VAR_0);
}
