
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceIndex; int idProduct; int idVendor; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct uep_softc {scalar_t__ buf_len; int fifo; int mtx; int evdev; int xfer; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct uep_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,struct uep_softc*,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int *,char*,int *,int ) ;
 int VAR_15 ;
 int FUNC_19 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_20 (int ,struct uep_softc*,int *,int *,int *,int ,int,int ,int ,int ,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ,int *,int ,int ,int ,struct uep_softc*,int *) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_18)
{
 struct usb_attach_arg *VAR_19 = FUNC_2(VAR_18);
 struct uep_softc *VAR_20 = FUNC_4(VAR_18);
 int VAR_21;

 FUNC_6(VAR_18);

 FUNC_18(&VAR_20->mtx, "uep lock", ((void*)0), VAR_10);

 VAR_21 = FUNC_23(VAR_19->device, &VAR_19->info.bIfaceIndex,
     VAR_20->xfer, VAR_15, VAR_13, VAR_20, &VAR_20->mtx);

 if (VAR_21) {
  FUNC_0("usbd_transfer_setup error=%s\n", FUNC_22(VAR_21));
  goto detach;
 }
 VAR_21 = FUNC_20(VAR_19->device, VAR_20, &VAR_20->mtx, &VAR_17,
     &VAR_20->fifo, FUNC_5(VAR_18), -1, VAR_19->info.bIfaceIndex,
     VAR_14, VAR_8, 0644);

        if (VAR_21) {
  FUNC_0("usb_fifo_attach error=%s\n", FUNC_22(VAR_21));
                goto detach;
        }


 VAR_20->buf_len = 0;

 return (0);

detach:
 FUNC_19(VAR_18);

 return (VAR_4);
}
