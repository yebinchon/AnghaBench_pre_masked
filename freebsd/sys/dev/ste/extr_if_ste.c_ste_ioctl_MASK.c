
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ste_softc {int ste_if_flags; int ste_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; struct ste_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct ste_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ste_softc*) ;
 int FUNC_2 (struct ste_softc*) ;
 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ,struct ifnet*) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct ste_softc*) ;
 int VAR_8 ;
 int FUNC_9 (struct ste_softc*) ;
 int FUNC_10 (struct ste_softc*) ;

__attribute__((used)) static int
FUNC_11(struct ifnet *VAR_9, u_long VAR_10, caddr_t VAR_11)
{
 struct ste_softc *VAR_12;
 struct ifreq *VAR_13;
 struct mii_data *VAR_14;
 int VAR_15 = 0, VAR_16;

 VAR_12 = VAR_9->if_softc;
 VAR_13 = (struct ifreq *)VAR_11;

 switch (VAR_10) {
 case 129:
  FUNC_1(VAR_12);
  if ((VAR_9->if_flags & VAR_5) != 0) {
   if ((VAR_9->if_drv_flags & VAR_3) != 0 &&
       ((VAR_9->if_flags ^ VAR_12->ste_if_flags) &
        (VAR_4 | VAR_2)) != 0)
    FUNC_9(VAR_12);
   else
    FUNC_8(VAR_12);
  } else if ((VAR_9->if_drv_flags & VAR_3) != 0)
   FUNC_10(VAR_12);
  VAR_12->ste_if_flags = VAR_9->if_flags;
  FUNC_2(VAR_12);
  break;
 case 133:
 case 132:
  FUNC_1(VAR_12);
  if ((VAR_9->if_drv_flags & VAR_3) != 0)
   FUNC_9(VAR_12);
  FUNC_2(VAR_12);
  break;
 case 131:
 case 128:
  VAR_14 = FUNC_3(VAR_12->ste_miibus);
  VAR_15 = FUNC_7(VAR_9, VAR_13, &VAR_14->mii_media, VAR_10);
  break;
 case 130:
  FUNC_1(VAR_12);
  VAR_16 = VAR_13->ifr_reqcap ^ VAR_9->if_capenable;
  if ((VAR_16 & VAR_1) != 0 &&
      (VAR_9->if_capabilities & VAR_1) != 0)
   VAR_9->if_capenable ^= VAR_1;
  FUNC_2(VAR_12);
  break;
 default:
  VAR_15 = FUNC_4(VAR_9, VAR_10, VAR_11);
  break;
 }

 return (VAR_15);
}
