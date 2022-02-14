
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ ifq_drv_maxlen; } ;
struct TYPE_11__ {int if_flags; int if_hwassist; int if_hw_tsomaxsegsize; int if_hw_tsomaxsegcount; scalar_t__ if_hw_tsomax; int if_baudrate; int if_capabilities; int if_capenable; TYPE_7__ if_snd; int if_qflush; int if_transmit; TYPE_2__* if_softc; int if_mtu; int if_init; int if_start; int if_ioctl; } ;
struct TYPE_9__ {int mac_addr; } ;
struct TYPE_10__ {TYPE_1__ macaddr; TYPE_4__* ifp; int dev; int media; } ;
typedef TYPE_2__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (TYPE_7__*,scalar_t__) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_18 ;
 int FUNC_2 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,int ,int ) ;
 int FUNC_8 (int *,int,int ,int *) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static int
FUNC_11(POCE_SOFTC VAR_30)
{

 VAR_30->ifp = FUNC_6(VAR_18);
 if (!VAR_30->ifp)
  return VAR_4;

 FUNC_9(&VAR_30->media, VAR_17, VAR_25, VAR_26);
 FUNC_8(&VAR_30->media, VAR_16 | VAR_15, 0, ((void*)0));
 FUNC_10(&VAR_30->media, VAR_16 | VAR_15);

 VAR_30->ifp->if_flags = VAR_13 | VAR_14;
 VAR_30->ifp->if_ioctl = VAR_24;
 VAR_30->ifp->if_start = VAR_29;
 VAR_30->ifp->if_init = VAR_23;
 VAR_30->ifp->if_mtu = VAR_5;
 VAR_30->ifp->if_softc = VAR_30;





 FUNC_7(VAR_30->ifp,
      FUNC_3(VAR_30->dev), FUNC_4(VAR_30->dev));

 VAR_30->ifp->if_snd.ifq_drv_maxlen = VAR_21 - 1;
 FUNC_0(&VAR_30->ifp->if_snd, VAR_30->ifp->if_snd.ifq_drv_maxlen);
 FUNC_1(&VAR_30->ifp->if_snd);

 VAR_30->ifp->if_hwassist = VAR_20;
 VAR_30->ifp->if_hwassist |= VAR_2;
 VAR_30->ifp->if_hwassist |= (VAR_0 | VAR_1 | VAR_3);

 VAR_30->ifp->if_capabilities = VAR_19;
 VAR_30->ifp->if_capabilities |= VAR_8;
 VAR_30->ifp->if_capabilities |= VAR_11;







 VAR_30->ifp->if_capenable = VAR_30->ifp->if_capabilities;
 VAR_30->ifp->if_baudrate = FUNC_2(10);







 FUNC_5(VAR_30->ifp, VAR_30->macaddr.mac_addr);

 return 0;
}
