
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_methods; int ue_miibus; int ue_dev; struct ifnet* ue_ifp; } ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hwassist; TYPE_2__ if_snd; int if_init; int if_ioctl; int if_start; } ;
struct axge_softc {int dummy; } ;
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
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct axge_softc* FUNC_5 (struct usb_ether*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_6(struct usb_ether *VAR_17)
{
 struct axge_softc *VAR_18;
 struct ifnet *VAR_19;
 int VAR_20;

 VAR_18 = FUNC_5(VAR_17);
 VAR_19 = VAR_17->ue_ifp;
 VAR_19->if_flags = VAR_7 | VAR_9 | VAR_8;
 VAR_19->if_start = VAR_16;
 VAR_19->if_ioctl = VAR_12;
 VAR_19->if_init = VAR_15;
 FUNC_0(&VAR_19->if_snd, VAR_13);
 VAR_19->if_snd.ifq_drv_maxlen = VAR_13;
 FUNC_1(&VAR_19->if_snd);

 VAR_19->if_capabilities |= VAR_6 | VAR_5 | VAR_4;
 VAR_19->if_hwassist = VAR_0;
 VAR_19->if_capenable = VAR_19->if_capabilities;

 FUNC_3(&VAR_3);
 VAR_20 = FUNC_2(VAR_17->ue_dev, &VAR_17->ue_miibus, VAR_19,
     VAR_14, VAR_17->ue_methods->ue_mii_sts,
     VAR_2, VAR_1, VAR_11, VAR_10);
 FUNC_4(&VAR_3);

 return (VAR_20);
}
