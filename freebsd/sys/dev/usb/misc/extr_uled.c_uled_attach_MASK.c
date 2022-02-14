
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct TYPE_3__ {int bIfaceIndex; } ;
struct usb_attach_arg {TYPE_1__ info; int device; } ;
struct TYPE_4__ {scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
struct uled_softc {TYPE_2__ sc_color; int sc_fifo; int sc_mtx; int sc_udev; int sc_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_attach_arg*) ;
 struct usb_attach_arg* FUNC_1 (int ) ;
 struct uled_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int *,int) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,struct uled_softc*,int *,int *,int *,int,int,int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 struct usb_attach_arg *VAR_7;
 struct uled_softc *VAR_8;
 int VAR_9;
 usb_error_t VAR_10;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_2(VAR_6);
 VAR_9 = FUNC_3(VAR_6);
 VAR_8->sc_flags = FUNC_0(VAR_7);

 FUNC_4(VAR_6);
 FUNC_5(&VAR_8->sc_mtx, "uled lock", ((void*)0), VAR_2 | VAR_3);

 VAR_8->sc_udev = VAR_7->device;

 VAR_10 = FUNC_7(VAR_7->device, VAR_8, &VAR_8->sc_mtx,
     &VAR_5, &VAR_8->sc_fifo, VAR_9, -1,
     VAR_7->info.bIfaceIndex, VAR_4, VAR_1, 0644);
 if (VAR_10 != 0)
  goto detach;

 VAR_8->sc_color.red = 0;
 VAR_8->sc_color.green = 0;
 VAR_8->sc_color.blue = 0;

 return (0);

detach:
 FUNC_6(VAR_6);
 return (VAR_0);
}
