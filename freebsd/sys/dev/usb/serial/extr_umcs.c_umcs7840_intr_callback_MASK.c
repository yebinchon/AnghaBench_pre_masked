
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef size_t uint8_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_cache {int dummy; } ;
struct umcs7840_softc {int sc_numports; int sc_dev; TYPE_1__* sc_ucom; } ;
struct TYPE_2__ {size_t sc_portno; } ;


 int FUNC_0 (char*,size_t,size_t,size_t) ;
 size_t VAR_0 ;

 size_t VAR_1 ;



 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct usb_page_cache*,int ,size_t*,int) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct umcs7840_softc* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct umcs7840_softc *VAR_5 = FUNC_10(VAR_3);
 struct usb_page_cache *VAR_6;
 uint8_t VAR_7[13];
 int VAR_8;
 int VAR_9;

 FUNC_11(VAR_3, &VAR_8, ((void*)0), ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_3)) {
 case 128:
  if (VAR_8 == 5 || VAR_8 == 13) {
   VAR_6 = FUNC_6(VAR_3, 0);
   FUNC_4(VAR_6, 0, VAR_7, VAR_8);

   for (VAR_9 = 0; VAR_9 < VAR_5->sc_numports; ++VAR_9) {
    uint8_t VAR_10 = VAR_5->sc_ucom[VAR_9].sc_portno;

    if (VAR_7[VAR_10] & VAR_1)
     continue;
    FUNC_0("Port %d has pending interrupt: %02x (FIFO: %02x)\n", VAR_10, VAR_7[VAR_10] & VAR_0, VAR_7[VAR_10] & (~VAR_0));
    switch (VAR_7[VAR_10] & VAR_0) {
    case 132:
    case 131:
    case 130:
    case 133:
     FUNC_3(&VAR_5->sc_ucom[VAR_9]);
     break;
    default:

     break;
    }
   }
  } else
   FUNC_2(VAR_5->sc_dev, "Invalid interrupt data length %d", VAR_8);

 case 129:
tr_setup:
  FUNC_8(VAR_3, 0, FUNC_7(VAR_3));
  FUNC_5(VAR_3);
  return;

 default:
  if (VAR_4 != VAR_2) {

   FUNC_9(VAR_3);
   goto tr_setup;
  }
  return;
 }
}
