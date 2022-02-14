
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int ue_dev; } ;
struct ure_softc {TYPE_1__ sc_ue; int sc_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ure_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ure_softc *VAR_9)
{
 uint16_t VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_7, VAR_6) & VAR_8;
 switch (VAR_10) {
 case 0x4c00:
  VAR_9->sc_chip |= VAR_0;
  break;
 case 0x4c10:
  VAR_9->sc_chip |= VAR_1;
  break;
 case 0x5c00:
  VAR_9->sc_chip |= VAR_2;
  break;
 case 0x5c10:
  VAR_9->sc_chip |= VAR_3;
  break;
 case 0x5c20:
  VAR_9->sc_chip |= VAR_4;
  break;
 case 0x5c30:
  VAR_9->sc_chip |= VAR_5;
  break;
 default:
  FUNC_0(VAR_9->sc_ue.ue_dev,
      "unknown version 0x%04x\n", VAR_10);
  break;
 }
}
