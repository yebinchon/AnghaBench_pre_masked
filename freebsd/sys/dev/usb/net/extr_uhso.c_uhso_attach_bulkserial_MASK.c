
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_interface {TYPE_1__* idesc; } ;
struct uhso_softc {TYPE_2__* sc_tty; int sc_xfer; int sc_mtx; int sc_udev; } ;
struct TYPE_4__ {int ht_muxport; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct uhso_softc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int *,int ,int ,scalar_t__,struct uhso_softc*,int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct uhso_softc *VAR_3, struct usb_interface *VAR_4,
    int VAR_5)
{
 usb_error_t VAR_6;
 int VAR_7;


 VAR_6 = FUNC_2(VAR_3->sc_udev,
     &VAR_4->idesc->bInterfaceNumber, VAR_3->sc_xfer,
     VAR_2, VAR_1, VAR_3, &VAR_3->sc_mtx);
 if (VAR_6) {

  VAR_6 = FUNC_2(VAR_3->sc_udev,
      &VAR_4->idesc->bInterfaceNumber, VAR_3->sc_xfer,
      VAR_2, VAR_1 - 1, VAR_3, &VAR_3->sc_mtx);
 }
 if (VAR_6) {
  FUNC_0(0, "usbd_transfer_setup failed");
  return (-1);
 }

 VAR_7 = FUNC_1(VAR_3);
 if (VAR_7 < 0) {
  FUNC_3(VAR_3->sc_xfer, VAR_1);
  return (VAR_0);
 }

 VAR_3->sc_tty[VAR_7].ht_muxport = -1;
 return (0);
}
