
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct mos_softc {int sc_ue; } ;
struct ifnet {int dummy; } ;
typedef int pkt ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct ifnet*,int ,int) ;
 struct ifnet* FUNC_3 (int *) ;
 int FUNC_4 (struct usb_page_cache*,int ,int *,int) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct mos_softc* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct mos_softc *VAR_4 = FUNC_7(VAR_2);
 struct ifnet *VAR_5 = FUNC_3(&VAR_4->sc_ue);
 struct usb_page_cache *VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 FUNC_2(VAR_5, VAR_0, 1);

 FUNC_8(VAR_2, &VAR_8, ((void*)0), ((void*)0), ((void*)0));
 FUNC_0("actlen %i", VAR_8);

 switch (FUNC_1(VAR_2)) {
 case 128:

  VAR_6 = FUNC_5(VAR_2, 0);
  FUNC_4(VAR_6, 0, &VAR_7, sizeof(VAR_7));

 case 129:
tr_setup:
  return;
 default:
  if (VAR_3 != VAR_1) {
   FUNC_6(VAR_2);
   goto tr_setup;
  }
  return;
 }
}
