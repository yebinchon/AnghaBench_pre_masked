
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct ndis_softc {int ifmedia; int ndis_hwassist; int ndis_dev; struct ifnet* ifp; } ;
struct TYPE_3__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_baudrate; int if_hwassist; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct ndis_softc* if_softc; } ;
typedef int eaddr ;


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
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int *) ;
 struct ifnet* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int ,int ) ;
 int FUNC_7 (int *,int,int ,int *) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (struct ndis_softc*,int ,int *,int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (struct ndis_softc*) ;

__attribute__((used)) static int
FUNC_12(struct ndis_softc *VAR_18)
{
 struct ifnet *VAR_19;
 u_char VAR_20[VAR_1];
 int VAR_21;

 VAR_19 = FUNC_5(VAR_11);
 if (VAR_19 == ((void*)0))
  return (VAR_0);
 VAR_18->ifp = VAR_19;
 VAR_19->if_softc = VAR_18;


 FUNC_11(VAR_18);




 VAR_21 = sizeof(VAR_20);
 FUNC_10(VAR_18, VAR_12, VAR_20, &VAR_21);

 FUNC_6(VAR_19, FUNC_2(VAR_18->ndis_dev),
     FUNC_3(VAR_18->ndis_dev));
 VAR_19->if_flags = VAR_2 | VAR_4 | VAR_3;
 VAR_19->if_ioctl = VAR_13;
 VAR_19->if_start = VAR_16;
 VAR_19->if_init = VAR_17;
 VAR_19->if_baudrate = 10000000;
 FUNC_0(&VAR_19->if_snd, 50);
 VAR_19->if_snd.ifq_drv_maxlen = 25;
 FUNC_1(&VAR_19->if_snd);
 VAR_19->if_capenable = VAR_19->if_capabilities;
 VAR_19->if_hwassist = VAR_18->ndis_hwassist;

 FUNC_8(&VAR_18->ifmedia, VAR_10, VAR_15,
     VAR_14);
 FUNC_7(&VAR_18->ifmedia, VAR_8|VAR_6, 0, ((void*)0));
 FUNC_7(&VAR_18->ifmedia, VAR_8|VAR_6|VAR_9, 0, ((void*)0));
 FUNC_7(&VAR_18->ifmedia, VAR_8|VAR_5, 0, ((void*)0));
 FUNC_7(&VAR_18->ifmedia, VAR_8|VAR_5|VAR_9, 0, ((void*)0));
 FUNC_7(&VAR_18->ifmedia, VAR_8|VAR_7, 0, ((void*)0));
 FUNC_9(&VAR_18->ifmedia, VAR_8|VAR_7);
 FUNC_4(VAR_19, VAR_20);

 return (0);
}
