
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* ifm_cur; int ifm_media; } ;
struct TYPE_10__ {TYPE_4__ mii_media; } ;
struct nlm_xlpge_softc {int block; int port; int if_flags; int dev_addr; TYPE_2__ xlpge_mii; struct ifnet* xlpge_if; int xlpge_dev; } ;
struct TYPE_13__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_transmit; TYPE_7__ if_snd; scalar_t__ if_hwassist; int if_init; int if_ioctl; scalar_t__ if_capabilities; scalar_t__ if_capenable; struct nlm_xlpge_softc* if_softc; } ;
typedef int device_t ;
struct TYPE_11__ {struct ifnet* xlpge_if; } ;
struct TYPE_9__ {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_7__*,int ) ;
 int FUNC_1 (TYPE_7__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ifnet*,int ) ;
 struct ifnet* FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int,int ,int *) ;
 int FUNC_9 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int) ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (struct nlm_xlpge_softc*) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_12(struct nlm_xlpge_softc *VAR_14)
{
 struct ifnet *VAR_15;
 device_t VAR_16;
 int VAR_17 = VAR_14->block * 4 + VAR_14->port;

 VAR_16 = VAR_14->xlpge_dev;
 VAR_15 = VAR_14->xlpge_if = FUNC_6(VAR_6);

 VAR_8[VAR_17].xlpge_if = VAR_15;

 if (VAR_15 == ((void*)0)) {
  FUNC_4(VAR_16, "cannot if_alloc()\n");
  return (VAR_0);
 }
 VAR_15->if_softc = VAR_14;
 FUNC_7(VAR_15, FUNC_2(VAR_16), FUNC_3(VAR_16));
 VAR_15->if_flags = VAR_1 | VAR_3 | VAR_2;
 VAR_14->if_flags = VAR_15->if_flags;

 VAR_15->if_capabilities = 0;
 VAR_15->if_capenable = VAR_15->if_capabilities;
 VAR_15->if_ioctl = VAR_10;
 VAR_15->if_init = VAR_9 ;
 VAR_15->if_hwassist = 0;
 VAR_15->if_snd.ifq_drv_maxlen = VAR_7;
 FUNC_0(&VAR_15->if_snd, VAR_15->if_snd.ifq_drv_maxlen);
 FUNC_1(&VAR_15->if_snd);

 FUNC_9(&VAR_14->xlpge_mii.mii_media, 0, VAR_11,
     VAR_12);
 FUNC_8(&VAR_14->xlpge_mii.mii_media, VAR_5 | VAR_4, 0, ((void*)0));
 FUNC_10(&VAR_14->xlpge_mii.mii_media, VAR_5 | VAR_4);
 VAR_14->xlpge_mii.mii_media.ifm_media =
     VAR_14->xlpge_mii.mii_media.ifm_cur->ifm_media;
 FUNC_11(VAR_14);

 FUNC_5(VAR_15, VAR_14->dev_addr);


 VAR_15->if_transmit = VAR_13;

 return (0);
}
