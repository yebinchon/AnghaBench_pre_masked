
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vte_softc {int vte_if_flags; int vte_miibus; } ;
struct mii_data {int mii_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct vte_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct vte_softc*) ;
 int FUNC_1 (struct vte_softc*) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_5 (struct vte_softc*) ;
 int FUNC_6 (struct vte_softc*) ;
 int FUNC_7 (struct vte_softc*) ;

__attribute__((used)) static int
FUNC_8(struct ifnet *VAR_4, u_long VAR_5, caddr_t VAR_6)
{
 struct vte_softc *VAR_7;
 struct ifreq *VAR_8;
 struct mii_data *VAR_9;
 int VAR_10;

 VAR_7 = VAR_4->if_softc;
 VAR_8 = (struct ifreq *)VAR_6;
 VAR_10 = 0;
 switch (VAR_5) {
 case 129:
  FUNC_0(VAR_7);
  if ((VAR_4->if_flags & VAR_3) != 0) {
   if ((VAR_4->if_drv_flags & VAR_1) != 0 &&
       ((VAR_4->if_flags ^ VAR_7->vte_if_flags) &
       (VAR_2 | VAR_0)) != 0)
    FUNC_6(VAR_7);
   else
    FUNC_5(VAR_7);
  } else if ((VAR_4->if_drv_flags & VAR_1) != 0)
   FUNC_7(VAR_7);
  VAR_7->vte_if_flags = VAR_4->if_flags;
  FUNC_1(VAR_7);
  break;
 case 132:
 case 131:
  FUNC_0(VAR_7);
  if ((VAR_4->if_drv_flags & VAR_1) != 0)
   FUNC_6(VAR_7);
  FUNC_1(VAR_7);
  break;
 case 128:
 case 130:
  VAR_9 = FUNC_2(VAR_7->vte_miibus);
  VAR_10 = FUNC_4(VAR_4, VAR_8, &VAR_9->mii_media, VAR_5);
  break;
 default:
  VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6);
  break;
 }

 return (VAR_10);
}
