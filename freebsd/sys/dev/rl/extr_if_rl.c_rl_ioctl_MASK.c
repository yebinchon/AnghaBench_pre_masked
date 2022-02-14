
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct rl_softc {int rl_if_flags; int rl_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; struct rl_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct rl_softc*,int ,int) ;
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
 int FUNC_1 (struct rl_softc*) ;
 int FUNC_2 (struct rl_softc*) ;






 struct mii_data* FUNC_3 (int ) ;
 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ,struct ifnet*) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct rl_softc*) ;
 int VAR_11 ;
 int FUNC_9 (struct rl_softc*) ;
 int FUNC_10 (struct rl_softc*) ;

__attribute__((used)) static int
FUNC_11(struct ifnet *VAR_12, u_long VAR_13, caddr_t VAR_14)
{
 struct ifreq *VAR_15 = (struct ifreq *)VAR_14;
 struct mii_data *VAR_16;
 struct rl_softc *VAR_17 = VAR_12->if_softc;
 int VAR_18 = 0, VAR_19;

 switch (VAR_13) {
 case 129:
  FUNC_1(VAR_17);
  if (VAR_12->if_flags & VAR_8) {
   if (VAR_12->if_drv_flags & VAR_6 &&
       ((VAR_12->if_flags ^ VAR_17->rl_if_flags) &
                            (VAR_7 | VAR_5)))
    FUNC_9(VAR_17);
                        else
    FUNC_8(VAR_17);
                } else if (VAR_12->if_drv_flags & VAR_6)
   FUNC_10(VAR_17);
  VAR_17->rl_if_flags = VAR_12->if_flags;
  FUNC_2(VAR_17);
  break;
 case 133:
 case 132:
  FUNC_1(VAR_17);
  FUNC_9(VAR_17);
  FUNC_2(VAR_17);
  break;
 case 131:
 case 128:
  VAR_16 = FUNC_3(VAR_17->rl_miibus);
  VAR_18 = FUNC_7(VAR_12, VAR_15, &VAR_16->mii_media, VAR_13);
  break;
 case 130:
  VAR_19 = VAR_15->ifr_reqcap ^ VAR_12->if_capenable;
  if ((VAR_19 & VAR_1) != 0 &&
      (VAR_12->if_capabilities & VAR_1) != 0) {
   if ((VAR_19 & VAR_4) != 0)
    VAR_12->if_capenable ^= VAR_4;
   if ((VAR_19 & VAR_3) != 0)
    VAR_12->if_capenable ^= VAR_3;
   if ((VAR_19 & VAR_2) != 0)
    VAR_12->if_capenable ^= VAR_2;
  }
  break;
 default:
  VAR_18 = FUNC_4(VAR_12, VAR_13, VAR_14);
  break;
 }

 return (VAR_18);
}
