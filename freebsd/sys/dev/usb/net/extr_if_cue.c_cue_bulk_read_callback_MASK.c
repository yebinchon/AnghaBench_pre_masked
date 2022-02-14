
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_ether {int dummy; } ;
struct ifnet {int dummy; } ;
struct ether_header {int dummy; } ;
struct cue_softc {struct usb_ether sc_ue; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (int,int) ;
 struct ifnet* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct usb_ether*,struct usb_page_cache*,int,int) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_10 (struct usb_xfer*,int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int ,int ) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct cue_softc* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct cue_softc *VAR_4 = FUNC_14(VAR_2);
 struct usb_ether *VAR_5 = &VAR_4->sc_ue;
 struct ifnet *VAR_6 = FUNC_4(VAR_5);
 struct usb_page_cache *VAR_7;
 uint8_t VAR_8[2];
 int VAR_9;
 int VAR_10;

 FUNC_15(VAR_2, &VAR_10, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_2)) {
 case 128:

  if (VAR_10 <= (int)(2 + sizeof(struct ether_header))) {
   FUNC_2(VAR_6, VAR_0, 1);
   goto tr_setup;
  }
  VAR_7 = FUNC_10(VAR_2, 0);
  FUNC_7(VAR_7, 0, VAR_8, 2);
  VAR_10 -= 2;
  VAR_9 = VAR_8[0] | (VAR_8[1] << 8);
  VAR_9 = FUNC_3(VAR_10, VAR_9);

  FUNC_5(VAR_5, VAR_7, 2, VAR_9);

 case 129:
tr_setup:
  FUNC_12(VAR_2, 0, FUNC_11(VAR_2));
  FUNC_9(VAR_2);
  FUNC_6(VAR_5);
  return;

 default:
  FUNC_0("bulk read error, %s\n",
      FUNC_8(VAR_3));

  if (VAR_3 != VAR_1) {

   FUNC_13(VAR_2);
   goto tr_setup;
  }
  return;

 }
}
