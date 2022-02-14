
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint32_t ;
struct usb_ether {int* ue_eaddr; int ue_dev; } ;
struct muge_softc {int dummy; } ;
typedef scalar_t__ mac_l ;
typedef scalar_t__ mac_h ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*,int ,int ) ;
 scalar_t__ FUNC_2 (struct muge_softc*) ;
 scalar_t__ FUNC_3 (struct muge_softc*,int ,int*,int ) ;
 scalar_t__ FUNC_4 (struct muge_softc*,int ,int*,int ) ;
 scalar_t__ FUNC_5 (struct muge_softc*,int ,int*) ;
 int FUNC_6 (int*,int,int ) ;
 int FUNC_7 (struct muge_softc*,char*) ;
 struct muge_softc* FUNC_8 (struct usb_ether*) ;
 int FUNC_9 (int ,struct usb_ether*) ;

__attribute__((used)) static void
FUNC_10(struct usb_ether *VAR_5)
{
 struct muge_softc *VAR_6 = FUNC_8(VAR_5);
 uint32_t VAR_7, VAR_8;

 FUNC_6(VAR_5->ue_eaddr, 0xff, VAR_0);

 uint32_t VAR_9;
 FUNC_5(VAR_6, 0, &VAR_9);


 if ((FUNC_5(VAR_6, VAR_3, &VAR_8) == 0) &&
     (FUNC_5(VAR_6, VAR_2, &VAR_7) == 0)) {
  VAR_5->ue_eaddr[5] = (uint8_t)((VAR_7 >> 8) & 0xff);
  VAR_5->ue_eaddr[4] = (uint8_t)((VAR_7) & 0xff);
  VAR_5->ue_eaddr[3] = (uint8_t)((VAR_8 >> 24) & 0xff);
  VAR_5->ue_eaddr[2] = (uint8_t)((VAR_8 >> 16) & 0xff);
  VAR_5->ue_eaddr[1] = (uint8_t)((VAR_8 >> 8) & 0xff);
  VAR_5->ue_eaddr[0] = (uint8_t)((VAR_8) & 0xff);
 }






 if (FUNC_0(VAR_5->ue_eaddr)) {
  FUNC_7(VAR_6, "MAC assigned from registers\n");
 } else if (FUNC_2(VAR_6) && FUNC_3(VAR_6,
     VAR_1, VAR_5->ue_eaddr, VAR_0) == 0 &&
     FUNC_0(VAR_5->ue_eaddr)) {
  FUNC_7(VAR_6, "MAC assigned from EEPROM\n");
 } else if (FUNC_4(VAR_6, VAR_4, VAR_5->ue_eaddr,
     VAR_0) == 0 && FUNC_0(VAR_5->ue_eaddr)) {
  FUNC_7(VAR_6, "MAC assigned from OTP\n");
 }
 if (!FUNC_0(VAR_5->ue_eaddr)) {
  FUNC_7(VAR_6, "MAC assigned randomly\n");
  FUNC_1(VAR_5->ue_eaddr, VAR_0, 0);
  VAR_5->ue_eaddr[0] &= ~0x01;
  VAR_5->ue_eaddr[0] |= 0x02;
 }
}
