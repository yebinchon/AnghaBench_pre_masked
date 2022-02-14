
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct TYPE_2__ {int sc_portno; } ;
struct uftdi_softc {scalar_t__ sc_hdrlen; TYPE_1__ sc_ucom; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct usb_xfer*) ;


 int FUNC_3 (TYPE_1__*,struct usb_page_cache*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct usb_page_cache*,scalar_t__,int *,int) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*,int ,scalar_t__) ;
 int FUNC_8 (struct usb_xfer*) ;
 struct uftdi_softc* FUNC_9 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct uftdi_softc *VAR_5 = FUNC_9(VAR_3);
 struct usb_page_cache *VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint8_t VAR_9[1];

 FUNC_0(3, "\n");

 switch (FUNC_2(VAR_3)) {
 default:
  if (VAR_4 != VAR_2) {

   FUNC_8(VAR_3);
  }

 case 129:
 case 128:
  VAR_6 = FUNC_6(VAR_3, 0);
  if (VAR_5->sc_hdrlen == 0) {
   if (FUNC_3(&VAR_5->sc_ucom, VAR_6, 0, VAR_0,
       &VAR_8) == 0)
    break;
  } else {
   VAR_8 = 0;
   while (VAR_8 < VAR_0 - VAR_5->sc_hdrlen - 1 &&
       FUNC_3(&VAR_5->sc_ucom, VAR_6, VAR_8 +
       VAR_5->sc_hdrlen, VAR_1 - VAR_5->sc_hdrlen,
       &VAR_7) != 0) {
    VAR_9[0] = FUNC_1(VAR_7,
        VAR_5->sc_ucom.sc_portno);
    FUNC_4(VAR_6, VAR_8, VAR_9, 1);
    VAR_8 += VAR_7 + VAR_5->sc_hdrlen;
   }
  }
  if (VAR_8 != 0) {
   FUNC_7(VAR_3, 0, VAR_8);
   FUNC_5(VAR_3);
  }
  break;
 }
}
