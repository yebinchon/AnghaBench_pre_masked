
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct ubtbcmfw_softc {int sc_fifo; int sc_mtx; int sc_xfer; int sc_udev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 struct ubtbcmfw_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int FUNC_7 (int ,struct ubtbcmfw_softc*,int *,int *,int *,int ,scalar_t__,int ,int ,int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *,int ,int ,int ,struct ubtbcmfw_softc*,int *) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_9)
{
 struct usb_attach_arg *VAR_10 = FUNC_0(VAR_9);
 struct ubtbcmfw_softc *VAR_11 = FUNC_1(VAR_9);
 uint8_t VAR_12;
 int VAR_13;

 VAR_11->sc_udev = VAR_10->device;

 FUNC_4(VAR_9);

 FUNC_5(&VAR_11->sc_mtx, "ubtbcmfw lock", ((void*)0), VAR_2 | VAR_3);

 VAR_12 = VAR_4;
 VAR_13 = FUNC_9(VAR_10->device, &VAR_12, VAR_11->sc_xfer,
    VAR_7, VAR_5,
    VAR_11, &VAR_11->sc_mtx);
 if (VAR_13 != 0) {
  FUNC_3(VAR_9, "allocating USB transfers failed. %s\n",
   FUNC_8(VAR_13));
  goto detach;
 }

 VAR_13 = FUNC_7(VAR_10->device, VAR_11, &VAR_11->sc_mtx,
   &VAR_8, &VAR_11->sc_fifo,
   FUNC_2(VAR_9), 0 - 1, VAR_10->info.bIfaceIndex,
   VAR_6, VAR_1, 0644);
 if (VAR_13 != 0) {
  FUNC_3(VAR_9, "could not attach fifo. %s\n",
   FUNC_8(VAR_13));
  goto detach;
 }

 return (0);

detach:
 FUNC_6(VAR_9);

 return (VAR_0);
}
