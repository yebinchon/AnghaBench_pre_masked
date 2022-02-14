
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_ether {int dummy; } ;
struct mos_softc {struct usb_ether sc_ue; } ;
struct ifnet {int dummy; } ;
struct ether_header {int dummy; } ;
typedef int rxstat ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct ifnet*,int ,int) ;
 struct ifnet* FUNC_3 (struct usb_ether*) ;
 int FUNC_4 (struct usb_ether*,struct usb_page_cache*,int ,int) ;
 int FUNC_5 (struct usb_ether*) ;
 int FUNC_6 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_9 (struct usb_xfer*,int ) ;
 int FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int ,int) ;
 int FUNC_12 (struct usb_xfer*) ;
 struct mos_softc* FUNC_13 (struct usb_xfer*) ;
 int FUNC_14 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_15(struct usb_xfer *VAR_7, usb_error_t VAR_8)
{
 struct mos_softc *VAR_9 = FUNC_13(VAR_7);
 struct usb_ether *VAR_10 = &VAR_9->sc_ue;
 struct ifnet *VAR_11 = FUNC_3(VAR_10);

 uint8_t VAR_12 = 0;
 uint32_t VAR_13;
 uint16_t VAR_14 = 0;
 struct usb_page_cache *VAR_15;

 FUNC_14(VAR_7, &VAR_13, ((void*)0), ((void*)0), ((void*)0));
 VAR_15 = FUNC_9(VAR_7, 0);

 switch (FUNC_1(VAR_7)) {
 case 128:
  FUNC_0("actlen : %d", VAR_13);
  if (VAR_13 <= 1) {
   FUNC_2(VAR_11, VAR_0, 1);
   goto tr_setup;
  }

  FUNC_6(VAR_15, VAR_13 - sizeof(VAR_12), &VAR_12,
      sizeof(VAR_12));

  if (VAR_12 != VAR_5) {
   FUNC_0("erroneous frame received");
   if (VAR_12 & VAR_4)
    FUNC_0("frame size less than 64 bytes");
   if (VAR_12 & VAR_3) {
    FUNC_0("frame size larger than "
        "1532 bytes");
   }
   if (VAR_12 & VAR_2)
    FUNC_0("CRC error");
   if (VAR_12 & VAR_1)
    FUNC_0("alignment error");
   FUNC_2(VAR_11, VAR_0, 1);
   goto tr_setup;
  }

  VAR_14 = VAR_13 - 1;
  if (VAR_14 < sizeof(struct ether_header)) {
   FUNC_0("error: pktlen %d is smaller "
       "than ether_header %zd", VAR_14,
       sizeof(struct ether_header));
   FUNC_2(VAR_11, VAR_0, 1);
   goto tr_setup;
  }
  FUNC_4(VAR_10, VAR_15, 0, VAR_13);

 case 129:
tr_setup:
  FUNC_11(VAR_7, 0, FUNC_10(VAR_7));
  FUNC_8(VAR_7);
  FUNC_5(VAR_10);
  return;
 default:
  FUNC_0("bulk read error, %s", FUNC_7(VAR_8));
  if (VAR_8 != VAR_6) {
   FUNC_12(VAR_7);
   goto tr_setup;
  }
  FUNC_0("start rx %i", FUNC_10(VAR_7));
  return;
 }
}
