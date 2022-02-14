
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_ether {TYPE_1__* ue_methods; int ue_miibus; int ue_dev; struct ifnet* ue_ifp; } ;
struct ure_softc {int sc_phyno; } ;
struct TYPE_5__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; TYPE_2__ if_snd; int if_init; int if_ioctl; int if_start; } ;
struct TYPE_4__ {int ue_mii_sts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ure_softc* FUNC_5 (struct usb_ether*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_6(struct usb_ether *VAR_11)
{
 struct ure_softc *VAR_12;
 struct ifnet *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(VAR_11);
 VAR_13 = VAR_11->ue_ifp;
 VAR_13->if_flags = VAR_2 | VAR_4 | VAR_3;
 VAR_13->if_start = VAR_9;
 VAR_13->if_ioctl = VAR_10;
 VAR_13->if_init = VAR_8;
 FUNC_0(&VAR_13->if_snd, VAR_6);
 VAR_13->if_snd.ifq_drv_maxlen = VAR_6;
 FUNC_1(&VAR_13->if_snd);

 FUNC_3(&VAR_1);
 VAR_14 = FUNC_2(VAR_11->ue_dev, &VAR_11->ue_miibus, VAR_13,
     VAR_7, VAR_11->ue_methods->ue_mii_sts,
     VAR_0, VAR_12->sc_phyno, VAR_5, 0);
 FUNC_4(&VAR_1);

 return (VAR_14);
}
