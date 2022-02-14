
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct ucycom_softc {int sc_ist; int sc_ilen; int sc_ucom; int sc_model; } ;


 int FUNC_0 (int ,char*) ;


 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int *,struct usb_page_cache*,int,int) ;
 int FUNC_3 (struct usb_page_cache*,int ,int*,int) ;
 int FUNC_4 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_5 (struct usb_xfer*,int ) ;
 int FUNC_6 (struct usb_xfer*,int ,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct ucycom_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_1, usb_error_t VAR_2)
{
 struct ucycom_softc *VAR_3 = FUNC_8(VAR_1);
 struct usb_page_cache *VAR_4;
 uint8_t VAR_5[2];
 uint32_t VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_9(VAR_1, &VAR_8, ((void*)0), ((void*)0), ((void*)0));
 VAR_4 = FUNC_5(VAR_1, 0);

 switch (FUNC_1(VAR_1)) {
 case 128:
  switch (VAR_3->sc_model) {
  case 131:
   if (VAR_8 < 1) {
    goto tr_setup;
   }
   FUNC_3(VAR_4, 0, VAR_5, 1);

   VAR_3->sc_ist = VAR_5[0] & ~0x07;
   VAR_7 = VAR_5[0] & 0x07;

   VAR_8--;
   VAR_6 = 1;

   break;

  case 130:
   if (VAR_8 < 2) {
    goto tr_setup;
   }
   FUNC_3(VAR_4, 0, VAR_5, 2);

   VAR_3->sc_ist = VAR_5[0] & ~0x07;
   VAR_7 = VAR_5[1];

   VAR_8 -= 2;
   VAR_6 = 2;

   break;

  default:
   FUNC_0(0, "unsupported model number\n");
   goto tr_setup;
  }

  if (VAR_7 > VAR_8)
   VAR_7 = VAR_8;
  if (VAR_7)
   FUNC_2(&VAR_3->sc_ucom, VAR_4, VAR_6, VAR_7);

 case 129:
tr_setup:
  FUNC_6(VAR_1, 0, VAR_3->sc_ilen);
  FUNC_4(VAR_1);
  return;

 default:
  if (VAR_2 != VAR_0) {

   FUNC_7(VAR_1);
   goto tr_setup;
  }
  return;

 }
}
