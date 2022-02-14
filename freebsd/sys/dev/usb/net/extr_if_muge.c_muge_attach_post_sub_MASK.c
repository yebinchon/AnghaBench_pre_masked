
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_methods; int ue_miibus; int ue_dev; struct ifnet* ue_ifp; } ;
struct muge_softc {int sc_phyno; } ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_hwassist; int if_capenable; TYPE_2__ if_snd; int if_init; int if_ioctl; int if_start; } ;
struct TYPE_4__ {int ue_mii_sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct muge_softc*,char*) ;
 int VAR_17 ;
 struct muge_softc* FUNC_6 (struct usb_ether*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int
FUNC_7(struct usb_ether *VAR_21)
{
 struct muge_softc *VAR_22;
 struct ifnet *VAR_23;
 int VAR_24;

 VAR_22 = FUNC_6(VAR_21);
 FUNC_5(VAR_22, "Calling muge_attach_post_sub.\n");
 VAR_23 = VAR_21->ue_ifp;
 VAR_23->if_flags = VAR_9 | VAR_11 | VAR_10;
 VAR_23->if_start = VAR_20;
 VAR_23->if_ioctl = VAR_17;
 VAR_23->if_init = VAR_19;
 FUNC_0(&VAR_23->if_snd, VAR_16);
 VAR_23->if_snd.ifq_drv_maxlen = VAR_16;
 FUNC_1(&VAR_23->if_snd);






 VAR_23->if_capabilities |= VAR_8;
 VAR_23->if_hwassist = 0;
 if (VAR_13)
  VAR_23->if_capabilities |= VAR_4;

 if (VAR_15)
  VAR_23->if_capabilities |= VAR_7;






 if (VAR_14)
  VAR_23->if_capabilities |= VAR_5 | VAR_6;
 VAR_23->if_capenable = VAR_23->if_capabilities;

 FUNC_3(&VAR_3);
 VAR_24 = FUNC_2(VAR_21->ue_dev, &VAR_21->ue_miibus, VAR_23,
  VAR_18, VAR_21->ue_methods->ue_mii_sts,
  VAR_0, VAR_22->sc_phyno, VAR_12, 0);
 FUNC_4(&VAR_3);

 return (0);
}
