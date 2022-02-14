
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usb_error_t ;
typedef int uint32_t ;
struct TYPE_2__ {int data_rem; int data_ptr; int offset; int data_error; int data_short; } ;
struct ustorage_fs_softc {TYPE_1__ sc_transfer; int sc_dma_ptr; } ;
struct usb_xfer {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int VAR_2 ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*,int ) ;
 int FUNC_5 (struct usb_xfer*) ;
 int FUNC_6 (struct usb_xfer*) ;
 int FUNC_7 (struct usb_xfer*,int ) ;
 int FUNC_8 (struct usb_xfer*,int ,int ,int) ;
 int FUNC_9 (struct usb_xfer*) ;
 struct ustorage_fs_softc* FUNC_10 (struct usb_xfer*) ;
 int FUNC_11 (struct usb_xfer*,int*,int*,int *,int *) ;
 int FUNC_12 (struct ustorage_fs_softc*,int ) ;

__attribute__((used)) static void
FUNC_13(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct ustorage_fs_softc *VAR_5 = FUNC_10(VAR_3);
 uint32_t VAR_6 = FUNC_6(VAR_3);
 int VAR_7, VAR_8;

 FUNC_11(VAR_3, &VAR_7, &VAR_8, ((void*)0), ((void*)0));

 FUNC_0("\n");

 switch (FUNC_1(VAR_3)) {
 case 128:
  VAR_5->sc_transfer.data_rem -= VAR_7;
  VAR_5->sc_transfer.data_ptr += VAR_7;
  VAR_5->sc_transfer.offset += VAR_7;

  if (VAR_7 != VAR_8 || VAR_5->sc_transfer.data_rem == 0) {

   FUNC_12(VAR_5,
       VAR_2);
   break;
  }
 case 129:
tr_setup:
  if (VAR_6 >= VAR_5->sc_transfer.data_rem) {
   VAR_6 = VAR_5->sc_transfer.data_rem;
   if (VAR_5->sc_transfer.data_short)
    FUNC_7(VAR_3, VAR_1);
   else
    FUNC_4(VAR_3, VAR_1);
  } else
   FUNC_4(VAR_3, VAR_1);

  if (VAR_5->sc_transfer.data_error) {
   VAR_5->sc_transfer.data_error = 0;
   FUNC_9(VAR_3);
  }


  FUNC_2(VAR_5->sc_dma_ptr, VAR_5->sc_transfer.data_ptr, VAR_6);

  FUNC_8(VAR_3, 0, VAR_5->sc_dma_ptr, VAR_6);
  FUNC_3(VAR_3);
  break;

 default:
  if (VAR_4 == VAR_0) {
   break;
  }




  if (!FUNC_5(VAR_3))
   VAR_5->sc_transfer.data_error = 1;


  goto tr_setup;
 }
}
