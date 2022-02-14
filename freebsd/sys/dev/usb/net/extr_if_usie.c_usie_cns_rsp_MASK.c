
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usie_softc {int sc_rssi; int sc_dev; struct ifnet* sc_ifp; } ;
struct usie_cns {int id; int obj; } ;
struct ifnet {int if_drv_flags; int if_flags; } ;
typedef int int16_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct usie_softc*) ;

__attribute__((used)) static void
FUNC_5(struct usie_softc *VAR_5, struct usie_cns *VAR_6)
{
 struct ifnet *VAR_7 = VAR_5->sc_ifp;

 FUNC_0("received CnS\n");

 switch (FUNC_1(VAR_6->obj)) {
 case 131:
  if (FUNC_2(VAR_6->id) & VAR_3)
   FUNC_4(VAR_5);
  else if (FUNC_2(VAR_6->id) & VAR_4) {
   VAR_7->if_flags &= ~VAR_2;
   VAR_7->if_drv_flags &=
       ~(VAR_1 | VAR_0);
  } else
   FUNC_0("undefined link update\n");
  break;

 case 128:
  VAR_5->sc_rssi = FUNC_1(*(int16_t *)(VAR_6 + 1));
  if (VAR_5->sc_rssi <= 0)
   FUNC_3(VAR_5->sc_dev, "No signal\n");
  else {
   FUNC_3(VAR_5->sc_dev, "RSSI=%ddBm\n",
       VAR_5->sc_rssi - 110);
  }
  break;

 case 129:
  break;

 case 130:
  break;

 default:
  FUNC_0("undefined CnS\n");
  break;
 }
}
