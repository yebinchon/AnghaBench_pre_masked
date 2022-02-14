
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct cfumass_softc {scalar_t__ sc_ctl_initid; int sc_queued; int * sc_xfer; void* sc_csw; void* sc_cbw; int sc_mtx; int sc_udev; int sc_dev; } ;
typedef int device_t ;


 int FUNC_0 (struct cfumass_softc*,char*) ;
 int FUNC_1 (struct cfumass_softc*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct cfumass_softc*) ;
 int FUNC_3 (struct cfumass_softc*,char*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct cfumass_softc*,size_t) ;
 scalar_t__ FUNC_5 (int *,int,int ,int *) ;
 struct usb_attach_arg* FUNC_6 (int ) ;
 struct cfumass_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,char*,int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int *,int *,int ,int ,struct cfumass_softc*,int *) ;
 int FUNC_16 (int *,int ) ;
 void* FUNC_17 (int ,int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_9)
{
 struct cfumass_softc *VAR_10;
 struct usb_attach_arg *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_7(VAR_9);
 VAR_11 = FUNC_6(VAR_9);

 VAR_10->sc_dev = VAR_9;
 VAR_10->sc_udev = VAR_11->device;

 FUNC_0(VAR_10, "go");

 FUNC_14(VAR_11->device, VAR_5);
 FUNC_8(VAR_9);

 FUNC_9(&VAR_10->sc_mtx, "cfumass", ((void*)0), VAR_4);
 FUNC_10(&VAR_8);

 VAR_12 = FUNC_15(VAR_11->device,
     &VAR_11->info.bIfaceIndex, VAR_10->sc_xfer, VAR_6,
     VAR_1, VAR_10, &VAR_10->sc_mtx);
 if (VAR_12 != 0) {
  FUNC_3(VAR_10, "usbd_transfer_setup() failed: %s",
      FUNC_13(VAR_12));
  FUNC_12(&VAR_8);
  return (VAR_3);
 }

 VAR_10->sc_cbw =
     FUNC_17(VAR_10->sc_xfer[VAR_0], 0);
 VAR_10->sc_csw =
     FUNC_17(VAR_10->sc_xfer[VAR_2], 0);

 VAR_10->sc_ctl_initid = FUNC_5(&VAR_7, -1, 0, ((void*)0));
 if (VAR_10->sc_ctl_initid < 0) {
  FUNC_3(VAR_10, "ctl_add_initiator() failed with error %d",
      VAR_10->sc_ctl_initid);
  FUNC_16(VAR_10->sc_xfer, VAR_1);
  FUNC_12(&VAR_8);
  return (VAR_3);
 }

 FUNC_11(&VAR_10->sc_queued, 0);

 FUNC_1(VAR_10);
 FUNC_4(VAR_10, VAR_0);
 FUNC_2(VAR_10);

 return (0);
}
