
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct TYPE_2__ {int data_ptr; int data_rem; int offset; int data_error; } ;
struct ustorage_fs_softc {TYPE_1__ sc_transfer; int sc_dma_ptr; } ;
struct usb_xfer {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_xfer*) ;


 int VAR_1 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*,int ,int ,int) ;
 int FUNC_7 (struct usb_xfer*) ;
 struct ustorage_fs_softc* FUNC_8 (struct usb_xfer*) ;
 int FUNC_9 (struct usb_xfer*,int*,int*,int *,int *) ;
 int FUNC_10 (struct ustorage_fs_softc*,int ) ;

__attribute__((used)) static void
FUNC_11(struct usb_xfer *VAR_2, usb_error_t VAR_3)
{
 struct ustorage_fs_softc *VAR_4 = FUNC_8(VAR_2);
 uint32_t VAR_5 = FUNC_5(VAR_2);
 int VAR_6, VAR_7;

 FUNC_9(VAR_2, &VAR_6, &VAR_7, ((void*)0), ((void*)0));

 FUNC_0("\n");

 switch (FUNC_1(VAR_2)) {
 case 128:

  FUNC_2(VAR_4->sc_transfer.data_ptr, VAR_4->sc_dma_ptr, VAR_6);

  VAR_4->sc_transfer.data_rem -= VAR_6;
  VAR_4->sc_transfer.data_ptr += VAR_6;
  VAR_4->sc_transfer.offset += VAR_6;

  if (VAR_6 != VAR_7 || VAR_4->sc_transfer.data_rem == 0) {

   FUNC_10(VAR_4,
       VAR_1);
   break;
  }


 case 129:
tr_setup:
  if (VAR_5 > VAR_4->sc_transfer.data_rem) {
   VAR_5 = VAR_4->sc_transfer.data_rem;
  }
  if (VAR_4->sc_transfer.data_error) {
   VAR_4->sc_transfer.data_error = 0;
   FUNC_7(VAR_2);
  }

  FUNC_6(VAR_2, 0, VAR_4->sc_dma_ptr, VAR_5);
  FUNC_3(VAR_2);
  break;

 default:
  if (VAR_3 == VAR_0) {
   break;
  }

  if (!FUNC_4(VAR_2))
   VAR_4->sc_transfer.data_error = 1;


  goto tr_setup;
 }
}
