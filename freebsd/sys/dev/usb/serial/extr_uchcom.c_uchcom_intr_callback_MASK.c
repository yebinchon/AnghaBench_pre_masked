
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usb_error_t ;
typedef int uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct uchcom_softc {int sc_ucom; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct uchcom_softc*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_page_cache*,int ,int *,int) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct uchcom_softc* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct uchcom_softc *VAR_5 = FUNC_10(VAR_3);
 struct usb_page_cache *VAR_6;
 uint8_t VAR_7[VAR_0];
 int VAR_8;

 FUNC_11(VAR_3, &VAR_8, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_3)) {
 case 128:

  FUNC_0("actlen = %u\n", VAR_8);

  if (VAR_8 >= VAR_0) {
   VAR_6 = FUNC_6(VAR_3, 0);
   FUNC_4(VAR_6, 0, VAR_7, VAR_0);

   FUNC_0("data = 0x%02X 0x%02X 0x%02X 0x%02X\n",
       (unsigned)VAR_7[0], (unsigned)VAR_7[1],
       (unsigned)VAR_7[2], (unsigned)VAR_7[3]);

   FUNC_2(VAR_5, VAR_7[VAR_1]);
   FUNC_3(&VAR_5->sc_ucom);
  }
 case 129:
tr_setup:
  FUNC_8(VAR_3, 0, FUNC_7(VAR_3));
  FUNC_5(VAR_3);
  break;

 default:
  if (VAR_4 != VAR_2) {

   FUNC_9(VAR_3);
   goto tr_setup;
  }
  break;
 }
}
