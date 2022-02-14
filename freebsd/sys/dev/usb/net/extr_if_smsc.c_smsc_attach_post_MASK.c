
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct usb_ether {int dummy; } ;
struct TYPE_2__ {int* ue_eaddr; int ue_dev; } ;
struct smsc_softc {int sc_phyno; TYPE_1__ sc_ue; } ;
typedef scalar_t__ mac_l ;
typedef scalar_t__ mac_h ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int*,int ) ;
 int FUNC_3 (struct smsc_softc*) ;
 int FUNC_4 (struct smsc_softc*,char*) ;
 int FUNC_5 (struct smsc_softc*,int,int*,int ) ;
 scalar_t__ FUNC_6 (struct smsc_softc*,int ,int*) ;
 struct smsc_softc* FUNC_7 (struct usb_ether*) ;
 int FUNC_8 (int ,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(struct usb_ether *VAR_3)
{
 struct smsc_softc *VAR_4 = FUNC_7(VAR_3);
 uint32_t VAR_5, VAR_6;
 int VAR_7;

 FUNC_4(VAR_4, "smsc_attach_post\n");


 VAR_4->sc_phyno = 1;






 FUNC_1(VAR_4->sc_ue.ue_eaddr, 0xff, VAR_0);


 if ((FUNC_6(VAR_4, VAR_2, &VAR_6) == 0) &&
     (FUNC_6(VAR_4, VAR_1, &VAR_5) == 0)) {
  VAR_4->sc_ue.ue_eaddr[5] = (uint8_t)((VAR_5 >> 8) & 0xff);
  VAR_4->sc_ue.ue_eaddr[4] = (uint8_t)((VAR_5) & 0xff);
  VAR_4->sc_ue.ue_eaddr[3] = (uint8_t)((VAR_6 >> 24) & 0xff);
  VAR_4->sc_ue.ue_eaddr[2] = (uint8_t)((VAR_6 >> 16) & 0xff);
  VAR_4->sc_ue.ue_eaddr[1] = (uint8_t)((VAR_6 >> 8) & 0xff);
  VAR_4->sc_ue.ue_eaddr[0] = (uint8_t)((VAR_6) & 0xff);
 }




 if (!FUNC_0(VAR_4->sc_ue.ue_eaddr)) {

  VAR_7 = FUNC_5(VAR_4, 0x01, VAR_4->sc_ue.ue_eaddr, VAR_0);




  if ((VAR_7 != 0) || (!FUNC_0(VAR_4->sc_ue.ue_eaddr))) {
   FUNC_2(VAR_4->sc_ue.ue_eaddr, VAR_0);
   VAR_4->sc_ue.ue_eaddr[0] &= ~0x01;
   VAR_4->sc_ue.ue_eaddr[0] |= 0x02;
  }
 }


 FUNC_3(VAR_4);
}
