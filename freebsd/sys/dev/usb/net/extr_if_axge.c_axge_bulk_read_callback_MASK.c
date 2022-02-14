
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct usb_ether {int dummy; } ;
struct axge_softc {struct usb_ether sc_ue; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_xfer*) ;


 int FUNC_1 (struct usb_ether*,struct usb_page_cache*,int) ;
 int FUNC_2 (struct usb_ether*) ;
 int FUNC_3 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_4 (struct usb_xfer*,int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct axge_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct axge_softc *VAR_3;
 struct usb_ether *VAR_4;
 struct usb_page_cache *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_8(VAR_1);
 VAR_4 = &VAR_3->sc_ue;
 FUNC_9(VAR_1, &VAR_6, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_0(VAR_1)) {
 case 128:
  VAR_5 = FUNC_4(VAR_1, 0);
  FUNC_1(VAR_4, VAR_5, VAR_6);


 case 129:
tr_setup:
  FUNC_6(VAR_1, 0, FUNC_5(VAR_1));
  FUNC_3(VAR_1);
  FUNC_2(VAR_4);
  break;

 default:
  if (VAR_2 != VAR_0) {
   FUNC_7(VAR_1);
   goto tr_setup;
  }
  break;
 }
}
