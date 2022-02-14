
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct ufm_softc {int sc_fifo; int sc_mtx; int sc_name; int sc_unit; int sc_udev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_attach_arg* FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 struct ufm_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int) ;
 int FUNC_6 (int ,int,char*,char*) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,struct ufm_softc*,int *,int *,int *,int ,int,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 struct usb_attach_arg *VAR_7 = FUNC_0(VAR_6);
 struct ufm_softc *VAR_8 = FUNC_2(VAR_6);
 int VAR_9;

 VAR_8->sc_udev = VAR_7->device;
 VAR_8->sc_unit = FUNC_3(VAR_6);

 FUNC_6(VAR_8->sc_name, sizeof(VAR_8->sc_name), "%s",
     FUNC_1(VAR_6));

 FUNC_5(&VAR_8->sc_mtx, "ufm lock", ((void*)0), VAR_2 | VAR_3);

 FUNC_4(VAR_6);

 VAR_9 = FUNC_8(VAR_7->device, VAR_8, &VAR_8->sc_mtx,
     &VAR_5, &VAR_8->sc_fifo,
     FUNC_3(VAR_6), -1, VAR_7->info.bIfaceIndex,
     VAR_4, VAR_1, 0644);
 if (VAR_9) {
  goto detach;
 }
 return (0);

detach:
 FUNC_7(VAR_6);
 return (VAR_0);
}
