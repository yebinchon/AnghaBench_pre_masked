
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct uhso_softc {int * sc_ucom; } ;


 int FUNC_0 (int,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int *,struct usb_page_cache*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct uhso_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct uhso_softc *VAR_3 = FUNC_9(VAR_1);
 struct usb_page_cache *VAR_4;
 int VAR_5;

 FUNC_10(VAR_1, &VAR_5, ((void*)0), ((void*)0), ((void*)0));

 FUNC_0(3, "status %d, actlen=%d\n", FUNC_1(VAR_1), VAR_5);

 switch (FUNC_1(VAR_1)) {
 case 128:
  VAR_4 = FUNC_5(VAR_1, 0);
  FUNC_2(&VAR_3->sc_ucom[0], VAR_4, 0, VAR_5);

 case 129:
tr_setup:
  FUNC_7(VAR_1, 0, FUNC_6(VAR_1));
  FUNC_4(VAR_1);
 break;
 default:
  FUNC_0(0, "error: %s\n", FUNC_3(VAR_2));
  if (VAR_2 == VAR_0)
   break;
  FUNC_8(VAR_1);
  goto tr_setup;
 }
}
