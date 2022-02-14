
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; TYPE_4__ if_snd; int if_ioctl; int if_start; int if_init; struct cpswp_softc* if_softc; } ;
struct cpswp_softc {size_t unit; int phy; int vlan; int mii_callout; struct ifnet* ifp; int physel; TYPE_3__* swsc; int miibus; void* mii; int dev; int lock; int phyaccess; int pdev; } ;
typedef int device_t ;
struct TYPE_7__ {int queue_slots; } ;
struct TYPE_8__ {TYPE_2__ tx; scalar_t__ dualemac; TYPE_1__* port; } ;
struct TYPE_6__ {int phy; int vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct ifnet*,int*) ;
 struct ifnet* FUNC_12 (int ) ;
 int FUNC_13 (struct ifnet*,int ,int) ;
 int FUNC_14 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int FUNC_15 (int *,int ,char*,int ) ;
 int FUNC_16 (scalar_t__,int*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_23)
{
 int VAR_24;
 struct ifnet *VAR_25;
 struct cpswp_softc *VAR_26;
 uint32_t VAR_27;
 uint8_t VAR_28[VAR_2];

 VAR_26 = FUNC_8(VAR_23);
 VAR_26->dev = VAR_23;
 VAR_26->pdev = FUNC_7(VAR_23);
 VAR_26->swsc = FUNC_8(VAR_26->pdev);
 VAR_26->unit = FUNC_9(VAR_23);
 VAR_26->phy = VAR_26->swsc->port[VAR_26->unit].phy;
 VAR_26->vlan = VAR_26->swsc->port[VAR_26->unit].vlan;
 if (VAR_26->swsc->dualemac && VAR_26->vlan == -1)
  VAR_26->vlan = VAR_26->unit + 1;

 if (VAR_26->unit == 0) {
  VAR_26->physel = VAR_11;
  VAR_26->phyaccess = VAR_9;
 } else {
  VAR_26->physel = VAR_12;
  VAR_26->phyaccess = VAR_10;
 }

 FUNC_15(&VAR_26->lock, FUNC_6(VAR_23), "cpsw port lock",
     VAR_15);


 VAR_25 = VAR_26->ifp = FUNC_12(VAR_8);
 if (VAR_25 == ((void*)0)) {
  FUNC_4(VAR_23);
  return (VAR_1);
 }

 FUNC_13(VAR_25, FUNC_5(VAR_26->dev), VAR_26->unit);
 VAR_25->if_softc = VAR_26;
 VAR_25->if_flags = VAR_7 | VAR_6 | VAR_5;
 VAR_25->if_capabilities = VAR_4 | VAR_3;
 VAR_25->if_capenable = VAR_25->if_capabilities;

 VAR_25->if_init = VAR_20;
 VAR_25->if_start = VAR_22;
 VAR_25->if_ioctl = VAR_21;

 VAR_25->if_snd.ifq_drv_maxlen = VAR_26->swsc->tx.queue_slots;
 FUNC_0(&VAR_25->if_snd, VAR_25->if_snd.ifq_drv_maxlen);
 FUNC_1(&VAR_25->if_snd);


 FUNC_16(VAR_16 + VAR_26->unit * 8, &VAR_27);
 VAR_28[0] = VAR_27 & 0xFF;
 VAR_28[1] = (VAR_27 >> 8) & 0xFF;
 VAR_28[2] = (VAR_27 >> 16) & 0xFF;
 VAR_28[3] = (VAR_27 >> 24) & 0xFF;


 FUNC_16(VAR_17 + VAR_26->unit * 8, &VAR_27);
 VAR_28[4] = VAR_27 & 0xFF;
 VAR_28[5] = (VAR_27 >> 8) & 0xFF;

 VAR_24 = FUNC_14(VAR_23, &VAR_26->miibus, VAR_25, VAR_19,
     VAR_18, VAR_0, VAR_26->phy, VAR_14, 0);
 if (VAR_24) {
  FUNC_10(VAR_23, "attaching PHYs failed\n");
  FUNC_4(VAR_23);
  return (VAR_24);
 }
 VAR_26->mii = FUNC_8(VAR_26->miibus);


 FUNC_3(VAR_26->swsc, VAR_26->physel,
     VAR_13 | (VAR_26->phy & 0x1F));

 FUNC_11(VAR_26->ifp, VAR_28);
 FUNC_2(&VAR_26->mii_callout, 0);

 return (0);
}
