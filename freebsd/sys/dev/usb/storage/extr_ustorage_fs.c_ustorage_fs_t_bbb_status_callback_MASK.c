
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ustorage_fs_bbb_csw_t ;
typedef int usb_error_t ;
struct TYPE_3__ {int data_error; int data_rem; } ;
struct ustorage_fs_softc {TYPE_1__ sc_transfer; TYPE_2__* sc_csw; } ;
struct usb_xfer {int dummy; } ;
struct TYPE_4__ {int dCSWDataResidue; int dCSWSignature; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct usb_xfer*) ;


 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct usb_xfer*) ;
 int FUNC_4 (struct usb_xfer*) ;
 int FUNC_5 (struct usb_xfer*,int ,int) ;
 int FUNC_6 (struct usb_xfer*) ;
 struct ustorage_fs_softc* FUNC_7 (struct usb_xfer*) ;
 int FUNC_8 (struct ustorage_fs_softc*,int ) ;

__attribute__((used)) static void
FUNC_9(struct usb_xfer *VAR_3, usb_error_t VAR_4)
{
 struct ustorage_fs_softc *VAR_5 = FUNC_7(VAR_3);

 FUNC_0("\n");

 switch (FUNC_1(VAR_3)) {
 case 128:
  FUNC_8(VAR_5, VAR_2);
  break;

 case 129:
tr_setup:
  FUNC_2(VAR_5->sc_csw->dCSWSignature, VAR_0);
  FUNC_2(VAR_5->sc_csw->dCSWDataResidue, VAR_5->sc_transfer.data_rem);

  if (VAR_5->sc_transfer.data_error) {
   VAR_5->sc_transfer.data_error = 0;
   FUNC_6(VAR_3);
  }
  FUNC_5(VAR_3, 0,
      sizeof(ustorage_fs_bbb_csw_t));
  FUNC_3(VAR_3);
  break;

 default:
  if (VAR_4 == VAR_1) {
   break;
  }

  if (!FUNC_4(VAR_3))
   VAR_5->sc_transfer.data_error = 1;


  goto tr_setup;
 }
}
