
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfront_info {int mac; struct ifnet* xn_ifp; int sc_media; int sc_lock; int xbdev; } ;
struct ifnet {int if_flags; int if_capenable; int if_capabilities; int if_hw_tsomaxsegsize; int if_hw_tsomaxsegcount; scalar_t__ if_hw_tsomax; int if_hwassist; int if_init; int if_qflush; int if_transmit; int if_ioctl; struct netfront_info* if_softc; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct netfront_info* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*,int ) ;
 struct ifnet* FUNC_4 (int ) ;
 int FUNC_5 (struct ifnet*,char*,int ) ;
 int FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,char*,char*,int ) ;
 int FUNC_10 (struct netfront_info*) ;
 int FUNC_11 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

int
FUNC_12(device_t VAR_21)
{
 struct netfront_info *VAR_22;
 int VAR_23;
 struct ifnet *VAR_24;

 VAR_22 = FUNC_1(VAR_21);

 VAR_22->xbdev = VAR_21;

 FUNC_9(&VAR_22->sc_lock, "xnsc", "netfront softc lock", VAR_12);

 FUNC_7(&VAR_22->sc_media, 0, VAR_17, VAR_16);
 FUNC_6(&VAR_22->sc_media, VAR_8|VAR_9, 0, ((void*)0));
 FUNC_8(&VAR_22->sc_media, VAR_8|VAR_9);

 VAR_23 = FUNC_11(VAR_21, VAR_22->mac);
 if (VAR_23 != 0)
  goto error;


 VAR_24 = VAR_22->xn_ifp = FUNC_4(VAR_10);
     VAR_24->if_softc = VAR_22;
     FUNC_5(VAR_24, "xn", FUNC_2(VAR_21));
     VAR_24->if_flags = VAR_5 | VAR_7 | VAR_6;
     VAR_24->if_ioctl = VAR_18;

 VAR_24->if_transmit = VAR_20;
 VAR_24->if_qflush = VAR_19;

     VAR_24->if_init = VAR_15;

     VAR_24->if_hwassist = VAR_14;

 VAR_24->if_capenable = VAR_24->if_capabilities =
     VAR_2|VAR_4|VAR_3;
 VAR_24->if_hw_tsomax = 65536 - (VAR_0 + VAR_1);
 VAR_24->if_hw_tsomaxsegcount = VAR_11;
 VAR_24->if_hw_tsomaxsegsize = VAR_13;

     FUNC_3(VAR_24, VAR_22->mac);
 FUNC_10(VAR_22);

 return (0);

error:
 FUNC_0(VAR_23 != 0, ("Error path with no error code specified"));
 return (VAR_23);
}
