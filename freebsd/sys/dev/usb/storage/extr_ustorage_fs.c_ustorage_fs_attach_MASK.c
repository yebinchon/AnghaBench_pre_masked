
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ustorage_fs_softc {int sc_mtx; int * sc_xfer; void* sc_dma_ptr; void* sc_csw; void* sc_cbw; int sc_iface_no; TYPE_1__* sc_lun; int sc_udev; int sc_dev; } ;
struct usb_interface_descriptor {int bInterfaceNumber; } ;
struct TYPE_4__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_2__ info; int device; int iface; } ;
typedef int device_t ;
struct TYPE_3__ {int num_sectors; int removable; int * memory_image; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct ustorage_fs_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *,char*,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 struct usb_interface_descriptor* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int *,int *,int ,int ,struct ustorage_fs_softc*,int *) ;
 void* FUNC_13 (int ,int ) ;
 int VAR_13 ;
 int FUNC_14 (int ) ;
 int * VAR_14 ;
 int FUNC_15 (struct ustorage_fs_softc*,size_t) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_15)
{
 struct ustorage_fs_softc *VAR_16 = FUNC_1(VAR_15);
 struct usb_attach_arg *VAR_17 = FUNC_0(VAR_15);
 struct usb_interface_descriptor *VAR_18;
 int VAR_19;
 int VAR_20;







 VAR_16->sc_dev = VAR_15;
 VAR_16->sc_udev = VAR_17->device;
 VAR_20 = FUNC_2(VAR_15);


 FUNC_11(VAR_17->device, VAR_7);

 if (VAR_20 == 0) {
  if (VAR_14 == ((void*)0)) {




   VAR_14 =
       FUNC_5(VAR_8 << 9, VAR_4,
       VAR_6 | VAR_5);

   if (VAR_14 == ((void*)0)) {
    return (VAR_0);
   }
  }
  VAR_16->sc_lun[0].memory_image = VAR_14;
  VAR_16->sc_lun[0].num_sectors = VAR_8;
  VAR_16->sc_lun[0].removable = 1;
 }

 FUNC_4(VAR_15);

 FUNC_6(&VAR_16->sc_mtx, "USTORAGE_FS lock",
     ((void*)0), (VAR_2 | VAR_3));



 VAR_18 = FUNC_10(VAR_17->iface);
 if (VAR_18 == ((void*)0)) {
  FUNC_3(VAR_15, "failed to get "
      "interface number\n");
  goto detach;
 }
 VAR_16->sc_iface_no = VAR_18->bInterfaceNumber;

 VAR_19 = FUNC_12(VAR_17->device,
     &VAR_17->info.bIfaceIndex, VAR_16->sc_xfer, VAR_13,
     VAR_11, VAR_16, &VAR_16->sc_mtx);
 if (VAR_19) {
  FUNC_3(VAR_15, "could not setup required "
      "transfers, %s\n", FUNC_9(VAR_19));
  goto detach;
 }

 VAR_16->sc_cbw = FUNC_13(VAR_16->sc_xfer[
     VAR_9], 0);
 VAR_16->sc_csw = FUNC_13(VAR_16->sc_xfer[
     VAR_12], 0);
  VAR_16->sc_dma_ptr = FUNC_13(VAR_16->sc_xfer[
     VAR_10], 0);



 FUNC_7(&VAR_16->sc_mtx);
 FUNC_15(VAR_16, VAR_9);
 FUNC_8(&VAR_16->sc_mtx);

 return (0);

detach:
 FUNC_14(VAR_15);
 return (VAR_1);
}
