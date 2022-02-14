
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
struct usb_xfer {int dummy; } ;
struct usb_page_search {scalar_t__ buffer; } ;
struct usb_page_cache {int dummy; } ;
struct uhso_softc {TYPE_1__* sc_tty; } ;
struct TYPE_2__ {int * ht_xfer; } ;


 size_t VAR_0 ;
 int FUNC_0 (int,char*,int,...) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_page_cache*,int ,struct usb_page_search*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 struct usb_page_cache* FUNC_6 (struct usb_xfer*,int ) ;
 int FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct usb_xfer*,int ,int ) ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int FUNC_10 (struct usb_xfer*) ;
 struct uhso_softc* FUNC_11 (struct usb_xfer*) ;

__attribute__((used)) static void
FUNC_12(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct usb_page_cache *VAR_5;
 struct usb_page_search VAR_6;
 struct uhso_softc *VAR_7 = FUNC_11(VAR_3);
 unsigned int VAR_8, VAR_9;

 FUNC_0(3, "status %d\n", FUNC_1(VAR_3));

 switch (FUNC_1(VAR_3)) {
 case 128:




  VAR_5 = FUNC_6(VAR_3, 0);
  FUNC_3(VAR_5, 0, &VAR_6);

  VAR_8 = *((unsigned char *)VAR_6.buffer);
  VAR_9 = 0;
  while (VAR_8 >>= 1) {
   VAR_9++;
  }

  FUNC_0(3, "mux port %d (%d)\n", VAR_9, VAR_8);
  if (VAR_9 > VAR_1)
   break;


  FUNC_9(
      VAR_7->sc_tty[VAR_9].ht_xfer[VAR_0],
      &VAR_7->sc_tty[VAR_9]);
  FUNC_4(VAR_7->sc_tty[VAR_9].ht_xfer[VAR_0]);

  break;
 case 129:
tr_setup:
  FUNC_8(VAR_3, 0, FUNC_7(VAR_3));
  FUNC_5(VAR_3);
  break;
 default:
  FUNC_0(0, "error: %s\n", FUNC_2(VAR_4));
  if (VAR_4 == VAR_2)
   break;

  FUNC_10(VAR_3);
  goto tr_setup;
 }
}
