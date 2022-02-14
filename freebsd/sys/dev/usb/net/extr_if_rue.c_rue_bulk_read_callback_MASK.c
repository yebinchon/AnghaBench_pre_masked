
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint16_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_ether {int dummy; } ;
struct rue_softc {struct usb_ether sc_ue; } ;
struct ifnet {int dummy; } ;
typedef int status ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (int) ;
 struct ifnet* FUNC_4 (struct usb_ether*) ;
 int FUNC_5 (struct usb_ether*,struct usb_page_cache*,int ,int) ;
 int FUNC_6 (struct usb_ether*) ;
 int FUNC_7 (struct usb_page_cache*,int,int*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_10 (struct usb_xfer*,int ) ;
 int FUNC_11 (struct usb_xfer*) ;
 int FUNC_12 (struct usb_xfer*,int ,int ) ;
 int FUNC_13 (struct usb_xfer*) ;
 struct rue_softc* FUNC_14 (struct usb_xfer*) ;
 int FUNC_15 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_16(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct rue_softc *VAR_5 = FUNC_14(VAR_3);
 struct usb_ether *VAR_6 = &VAR_5->sc_ue;
 struct ifnet *VAR_7 = FUNC_4(VAR_6);
 struct usb_page_cache *VAR_8;
 uint16_t VAR_9;
 int VAR_10;

 FUNC_15(VAR_3, &VAR_10, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_3)) {
 case 128:

  if (VAR_10 < 4) {
   FUNC_2(VAR_7, VAR_0, 1);
   goto tr_setup;
  }
  VAR_8 = FUNC_10(VAR_3, 0);
  FUNC_7(VAR_8, VAR_10 - 4, &VAR_9, sizeof(VAR_9));
  VAR_10 -= 4;


  VAR_9 = FUNC_3(VAR_9);
  if ((VAR_9 & VAR_1) == 0) {
   FUNC_2(VAR_7, VAR_0, 1);
   goto tr_setup;
  }
  FUNC_5(VAR_6, VAR_8, 0, VAR_10);

 case 129:
tr_setup:
  FUNC_12(VAR_3, 0, FUNC_11(VAR_3));
  FUNC_9(VAR_3);
  FUNC_6(VAR_6);
  return;

 default:
  FUNC_0("bulk read error, %s\n",
      FUNC_8(VAR_4));

  if (VAR_4 != VAR_2) {

   FUNC_13(VAR_3);
   goto tr_setup;
  }
  return;
 }
}
