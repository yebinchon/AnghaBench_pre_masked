
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint32_t ;
struct usie_softc {int * sc_resp_temp; struct ucom_softc* sc_ucom; } ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ucom_softc {struct usie_softc* sc_parent; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct ucom_softc*,struct usb_page_cache*,int ,int) ;
 int FUNC_3 (struct usb_page_cache*,int ,int *,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ,int ) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct ucom_softc* FUNC_9 (struct usb_xfer*) ;
 int FUNC_10 (struct usb_xfer*,int*,int *,int *,int *) ;
 int FUNC_11 (struct usie_softc*,int *,int) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct ucom_softc *VAR_6 = FUNC_9(VAR_4);
 struct usie_softc *VAR_7 = VAR_6->sc_parent;
 struct usb_page_cache *VAR_8;
 uint32_t VAR_9;

 FUNC_10(VAR_4, &VAR_9, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_4)) {
 case 128:
  VAR_8 = FUNC_5(VAR_4, 0);


  if (VAR_6 == VAR_7->sc_ucom && VAR_9 >= VAR_2) {

   FUNC_0("transferred=%u\n", VAR_9);


   FUNC_3(VAR_8, 0, VAR_7->sc_resp_temp, 1);

   if (VAR_7->sc_resp_temp[0] == VAR_3) {


    if (VAR_9 > VAR_1)
     VAR_9 = VAR_1;


    FUNC_3(VAR_8, 0, VAR_7->sc_resp_temp, VAR_9);
    FUNC_11(VAR_7, VAR_7->sc_resp_temp, VAR_9);


    goto tr_setup;
   }

  }

  FUNC_2(VAR_6, VAR_8, 0, VAR_9);


 case 129:
tr_setup:
  FUNC_7(VAR_4, 0, FUNC_6(VAR_4));
  FUNC_4(VAR_4);
  break;

 default:
  if (VAR_5 != VAR_0) {
   FUNC_8(VAR_4);
   goto tr_setup;
  }
  break;
 }
}
