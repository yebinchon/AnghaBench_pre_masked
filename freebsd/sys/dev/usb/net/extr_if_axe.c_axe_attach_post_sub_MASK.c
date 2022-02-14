
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct usb_ether {TYPE_1__* ue_methods; int ue_miibus; int ue_dev; struct ifnet* ue_ifp; } ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hwassist; TYPE_2__ if_snd; int if_init; int if_ioctl; int if_start; } ;
struct axe_softc {int sc_flags; int sc_phyno; } ;
struct TYPE_4__ {int ue_mii_sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct axe_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct axe_softc* FUNC_6 (struct usb_ether*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int
FUNC_7(struct usb_ether *VAR_19)
{
 struct axe_softc *VAR_20;
 struct ifnet *VAR_21;
 u_int VAR_22;
 int VAR_23;

 VAR_20 = FUNC_6(VAR_19);
 VAR_21 = VAR_19->ue_ifp;
 VAR_21->if_flags = VAR_9 | VAR_11 | VAR_10;
 VAR_21->if_start = VAR_18;
 VAR_21->if_ioctl = VAR_14;
 VAR_21->if_init = VAR_17;
 FUNC_1(&VAR_21->if_snd, VAR_15);
 VAR_21->if_snd.ifq_drv_maxlen = VAR_15;
 FUNC_2(&VAR_21->if_snd);

 if (FUNC_0(VAR_20))
  VAR_21->if_capabilities |= VAR_8;
 if (VAR_20->sc_flags & VAR_3) {
  VAR_21->if_capabilities |= VAR_7 | VAR_6;
  VAR_21->if_hwassist = VAR_0;
 }
 VAR_21->if_capenable = VAR_21->if_capabilities;
 if (VAR_20->sc_flags & (VAR_2 | VAR_3 | VAR_1))
  VAR_22 = VAR_12;
 else
  VAR_22 = 0;
 FUNC_4(&VAR_5);
 VAR_23 = FUNC_3(VAR_19->ue_dev, &VAR_19->ue_miibus, VAR_21,
     VAR_16, VAR_19->ue_methods->ue_mii_sts,
     VAR_4, VAR_20->sc_phyno, VAR_13, VAR_22);
 FUNC_5(&VAR_5);

 return (VAR_23);
}
