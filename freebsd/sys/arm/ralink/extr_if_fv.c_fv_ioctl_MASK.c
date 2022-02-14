
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct mii_data {int mii_media; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; int if_hwassist; struct fv_softc* if_softc; } ;
struct fv_softc {int fv_if_flags; int fv_ifmedia; int fv_miibus; int fv_detach; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct fv_softc*,int ) ;
 int FUNC_1 (struct fv_softc*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (struct fv_softc*) ;
 int FUNC_3 (struct fv_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 int FUNC_4 (struct ifnet*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct ifnet*,int,scalar_t__) ;
 int FUNC_7 (struct fv_softc*) ;
 int FUNC_8 (struct fv_softc*) ;
 int FUNC_9 (struct fv_softc*) ;
 int FUNC_10 (struct fv_softc*) ;
 int FUNC_11 (struct ifnet*,struct ifreq*,int *,int) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_12(struct ifnet *VAR_11, u_long VAR_12, caddr_t VAR_13)
{
 struct fv_softc *VAR_14 = VAR_11->if_softc;
 struct ifreq *VAR_15 = (struct ifreq *) VAR_13;



 int VAR_16;
 int VAR_17;

 switch (VAR_12) {
 case 129:
  FUNC_2(VAR_14);
  if (VAR_11->if_flags & VAR_7) {
   if (VAR_11->if_drv_flags & VAR_5) {
    if ((VAR_11->if_flags ^ VAR_14->fv_if_flags) &
        VAR_6) {
     VAR_17 = FUNC_0(VAR_14, VAR_0);
     FUNC_1(VAR_14, VAR_0, VAR_17 |
         VAR_8 | VAR_9);
    }
    if ((VAR_11->if_flags ^ VAR_14->fv_if_flags) &
        VAR_4) {
     VAR_17 = FUNC_0(VAR_14, VAR_0);
     FUNC_1(VAR_14, VAR_0, VAR_17 |
         VAR_8);
    }
   } else {
    if (VAR_14->fv_detach == 0)
     FUNC_7(VAR_14);
   }
  } else {
   if (VAR_11->if_drv_flags & VAR_5)
    FUNC_9(VAR_14);
  }
  VAR_14->fv_if_flags = VAR_11->if_flags;
  FUNC_3(VAR_14);
  VAR_16 = 0;
  break;
 case 133:
 case 132:





  VAR_16 = 0;
  break;
 case 131:
 case 128:




  VAR_16 = FUNC_11(VAR_11, VAR_15, &VAR_14->fv_ifmedia, VAR_12);

  break;
 case 130:
  VAR_16 = 0;
  break;
 default:
  VAR_16 = FUNC_6(VAR_11, VAR_12, VAR_13);
  break;
 }

 return (VAR_16);
}
