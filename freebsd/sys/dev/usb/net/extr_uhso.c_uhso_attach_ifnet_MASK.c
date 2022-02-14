
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
struct usb_interface {TYPE_1__* idesc; } ;
struct uhso_softc {int sc_dev; int sc_mtx; int sc_c; struct ifnet* sc_ifp; int sc_if_xfer; int sc_udev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_xname; TYPE_2__ if_snd; struct uhso_softc* if_softc; int if_output; int if_start; int if_init; int if_ioctl; int if_mtu; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int ,int ,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int ,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int,int ,struct uhso_softc*) ;
 int FUNC_9 (int ) ;
 struct sysctl_ctx_list* FUNC_10 (int ) ;
 struct sysctl_oid* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 struct ifnet* FUNC_13 (int ) ;
 int FUNC_14 (struct ifnet*) ;
 int FUNC_15 (struct ifnet*,int ,unsigned int) ;
 int VAR_9 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int ,int *,int ,int ,int ,struct uhso_softc*,int *) ;

__attribute__((used)) static int
FUNC_20(struct uhso_softc *VAR_17, struct usb_interface *VAR_18, int VAR_19)
{
 struct ifnet *VAR_20;
 usb_error_t VAR_21;
 struct sysctl_ctx_list *VAR_22;
 struct sysctl_oid *VAR_23;
 unsigned int VAR_24;

 VAR_21 = FUNC_19(VAR_17->sc_udev,
     &VAR_18->idesc->bInterfaceNumber, VAR_17->sc_if_xfer,
     VAR_15, VAR_7, VAR_17, &VAR_17->sc_mtx);
 if (VAR_21) {
  FUNC_4(0, "usbd_transfer_setup failed: %s\n",
      FUNC_18(VAR_21));
  return (-1);
 }

 VAR_17->sc_ifp = VAR_20 = FUNC_13(VAR_5);
 if (VAR_17->sc_ifp == ((void*)0)) {
  FUNC_12(VAR_17->sc_dev, "if_alloc() failed\n");
  return (-1);
 }

 FUNC_7(&VAR_17->sc_c, &VAR_17->sc_mtx, 0);
 FUNC_16(&VAR_17->sc_mtx);
 FUNC_8(&VAR_17->sc_c, 1, VAR_13, VAR_17);
 FUNC_17(&VAR_17->sc_mtx);






 VAR_24 = FUNC_5(VAR_16);

 FUNC_15(VAR_20, FUNC_9(VAR_17->sc_dev), VAR_24);
 VAR_20->if_mtu = VAR_8;
 VAR_20->if_ioctl = VAR_11;
 VAR_20->if_init = VAR_10;
 VAR_20->if_start = VAR_14;
 VAR_20->if_output = VAR_12;
 VAR_20->if_flags = VAR_2 | VAR_3 | VAR_4;
 VAR_20->if_softc = VAR_17;
 FUNC_0(&VAR_20->if_snd, VAR_9);
 VAR_20->if_snd.ifq_drv_maxlen = VAR_9;
 FUNC_1(&VAR_20->if_snd);

 FUNC_14(VAR_20);
 FUNC_6(VAR_20, VAR_1, 0);

 VAR_22 = FUNC_10(VAR_17->sc_dev);
 VAR_23 = FUNC_11(VAR_17->sc_dev);

 FUNC_2(VAR_22, FUNC_3(VAR_23), VAR_6, "netif",
     VAR_0, VAR_20->if_xname, 0, "Attached network interface");

 return (0);
}
