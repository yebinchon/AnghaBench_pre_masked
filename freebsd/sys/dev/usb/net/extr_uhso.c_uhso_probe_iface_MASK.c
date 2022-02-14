
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {TYPE_1__* idesc; } ;
struct uhso_softc {struct usb_device* sc_udev; scalar_t__ sc_ttys; int sc_dev; int sc_super_ucom; int sc_mtx; int sc_ucom; int * sc_xfer; int sc_type; } ;
struct TYPE_2__ {int bNumEndpoints; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int,scalar_t__) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,scalar_t__,struct uhso_softc*,int *,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct uhso_softc*,struct usb_interface*,int) ;
 int FUNC_11 (struct uhso_softc*,struct usb_interface*,int) ;
 int FUNC_12 (struct uhso_softc*,struct usb_interface*,int) ;
 int VAR_6 ;
 struct usb_interface* FUNC_13 (struct usb_device*,int) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct uhso_softc *VAR_7, int VAR_8,
    int (*VAR_9)(struct usb_device *, int))
{
 struct usb_interface *VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(1, "Probing for interface %d, probe_func=%p\n", VAR_8, VAR_9);

 VAR_11 = VAR_9(VAR_7->sc_udev, VAR_8);
 FUNC_0(1, "Probe result %x\n", VAR_11);
 if (VAR_11 <= 0)
  return (VAR_0);

 VAR_7->sc_type = VAR_11;
 VAR_10 = FUNC_13(VAR_7->sc_udev, VAR_8);

 if (FUNC_2(VAR_11) == VAR_5) {
  VAR_12 = FUNC_11(VAR_7, VAR_10, VAR_11);
  if (VAR_12) {
   FUNC_0(1, "uhso_attach_ifnet failed");
   return (VAR_0);
  }






  if (VAR_10->idesc->bNumEndpoints < 3) {
   VAR_7->sc_type = FUNC_3(
       FUNC_4(VAR_11) & ~VAR_2,
       FUNC_1(VAR_11) & ~VAR_4,
       FUNC_2(VAR_11));
   return (0);
  }

  FUNC_0(1, "Trying to attach mux. serial\n");
  VAR_12 = FUNC_12(VAR_7, VAR_10, VAR_11);
  if (VAR_12 == 0 && VAR_7->sc_ttys > 0) {
   VAR_12 = FUNC_8(&VAR_7->sc_super_ucom, VAR_7->sc_ucom,
       VAR_7->sc_ttys, VAR_7, &VAR_6, &VAR_7->sc_mtx);
   if (VAR_12) {
    FUNC_5(VAR_7->sc_dev, "ucom_attach failed\n");
    return (VAR_0);
   }
   FUNC_9(&VAR_7->sc_super_ucom, VAR_7->sc_dev);

   FUNC_6(&VAR_7->sc_mtx);
   FUNC_14(VAR_7->sc_xfer[VAR_3]);
   FUNC_7(&VAR_7->sc_mtx);
  }
 } else if ((FUNC_4(VAR_11) & VAR_1) &&
     FUNC_1(VAR_11) & VAR_4) {

  VAR_12 = FUNC_10(VAR_7, VAR_10, VAR_11);
  if (VAR_12)
   return (VAR_0);

  VAR_12 = FUNC_8(&VAR_7->sc_super_ucom, VAR_7->sc_ucom,
      VAR_7->sc_ttys, VAR_7, &VAR_6, &VAR_7->sc_mtx);
  if (VAR_12) {
   FUNC_5(VAR_7->sc_dev, "ucom_attach failed\n");
   return (VAR_0);
  }
  FUNC_9(&VAR_7->sc_super_ucom, VAR_7->sc_dev);
 }
 else {
  FUNC_0(0, "Unknown type %x\n", VAR_11);
  return (VAR_0);
 }

 return (0);
}
