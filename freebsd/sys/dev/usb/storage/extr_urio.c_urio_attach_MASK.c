
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct urio_softc {int sc_fifo; int sc_mtx; int sc_xfer; int sc_name; int sc_udev; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 struct urio_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,char*,int *,int) ;
 int FUNC_7 (int ,int,char*,char*) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,struct urio_softc*,int *,int *,int *,int ,int,int ,int ,int ,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *,int ,int ,int ,struct urio_softc*,int *) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_8)
{
 struct usb_attach_arg *VAR_9 = FUNC_1(VAR_8);
 struct urio_softc *VAR_10 = FUNC_3(VAR_8);
 int VAR_11;

 FUNC_5(VAR_8);

 VAR_10->sc_udev = VAR_9->device;

 FUNC_6(&VAR_10->sc_mtx, "urio lock", ((void*)0), VAR_2 | VAR_3);

 FUNC_7(VAR_10->sc_name, sizeof(VAR_10->sc_name),
     "%s", FUNC_2(VAR_8));

 VAR_11 = FUNC_11(VAR_9->device,
     &VAR_9->info.bIfaceIndex, VAR_10->sc_xfer,
     VAR_6, VAR_5, VAR_10, &VAR_10->sc_mtx);

 if (VAR_11) {
  FUNC_0("error=%s\n", FUNC_10(VAR_11));
  goto detach;
 }

 VAR_11 = FUNC_9(VAR_9->device, VAR_10, &VAR_10->sc_mtx,
     &VAR_7, &VAR_10->sc_fifo,
     FUNC_4(VAR_8), -1, VAR_9->info.bIfaceIndex,
     VAR_4, VAR_1, 0644);
 if (VAR_11) {
  goto detach;
 }
 return (0);

detach:
 FUNC_8(VAR_8);
 return (VAR_0);
}
