
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct g_keyboard_softc {int sc_mtx; int sc_xfer; int sc_mode; int sc_callout; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 struct g_keyboard_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct g_keyboard_softc*) ;
 int FUNC_7 (int *,char*,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int *,int ,int ,int ,struct g_keyboard_softc*,int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_5)
{
 struct g_keyboard_softc *VAR_6 = FUNC_3(VAR_5);
 struct usb_attach_arg *VAR_7 = FUNC_2(VAR_5);
 int VAR_8;

 FUNC_1(11, "\n");

 FUNC_4(VAR_5);

 FUNC_7(&VAR_6->sc_mtx, "g_keyboard", ((void*)0), VAR_3);

 FUNC_10(&VAR_6->sc_callout, &VAR_6->sc_mtx, 0);

 VAR_6->sc_mode = VAR_1;

 VAR_8 = FUNC_12(VAR_7->device,
     &VAR_7->info.bIfaceIndex, VAR_6->sc_xfer, VAR_4,
     VAR_2, VAR_6, &VAR_6->sc_mtx);

 if (VAR_8) {
  FUNC_0("error=%s\n", FUNC_11(VAR_8));
  goto detach;
 }
 FUNC_8(&VAR_6->sc_mtx);
 FUNC_6(VAR_6);
 FUNC_9(&VAR_6->sc_mtx);

 return (0);

detach:
 FUNC_5(VAR_5);

 return (VAR_0);
}
