
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct usb_xfer {int dummy; } ;
struct TYPE_2__ {int data_rem; int data_ptr; int actlen; int data_timeout; } ;
struct umass_softc {TYPE_1__ sc_transfer; } ;


 int FUNC_0 (struct umass_softc*,int ,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (struct usb_xfer*,int ) ;
 int FUNC_3 (struct umass_softc*,int ) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int,int) ;
 int FUNC_7 (struct usb_xfer*,int ) ;
 struct umass_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int*,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct usb_xfer *VAR_4, usb_error_t VAR_5)
{
 struct umass_softc *VAR_6 = FUNC_8(VAR_4);
 uint32_t VAR_7 = FUNC_5(VAR_4);
 int VAR_8, VAR_9;

 FUNC_9(VAR_4, &VAR_8, &VAR_9, ((void*)0), ((void*)0));

 switch (FUNC_1(VAR_4)) {
 case 128:
  VAR_6->sc_transfer.data_rem -= VAR_8;
  VAR_6->sc_transfer.data_ptr += VAR_8;
  VAR_6->sc_transfer.actlen += VAR_8;

  if (VAR_8 < VAR_9) {

   VAR_6->sc_transfer.data_rem = 0;
  }
 case 129:
  FUNC_0(VAR_6, VAR_0, "max_bulk=%d, data_rem=%d\n",
      VAR_7, VAR_6->sc_transfer.data_rem);

  if (VAR_6->sc_transfer.data_rem == 0) {
   FUNC_3(VAR_6, VAR_2);
   return;
  }
  if (VAR_7 > VAR_6->sc_transfer.data_rem) {
   VAR_7 = VAR_6->sc_transfer.data_rem;
  }
  FUNC_7(VAR_4, VAR_6->sc_transfer.data_timeout);

  FUNC_6(VAR_4, 0, VAR_6->sc_transfer.data_ptr,
      VAR_7);

  FUNC_4(VAR_4);
  return;

 default:
  if (VAR_5 == VAR_3) {
   FUNC_2(VAR_4, VAR_5);
  } else {
   FUNC_3(VAR_6, VAR_1);
  }
  return;
 }
}
