
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct lance_softc {int sc_flags; int sc_media; } ;
struct ifreq {int dummy; } ;
struct ifnet {int if_flags; int if_drv_flags; struct lance_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lance_softc*) ;
 int VAR_7 ;
 int FUNC_1 (struct lance_softc*) ;





 int FUNC_2 (struct ifnet*,int,scalar_t__) ;
 int FUNC_3 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_4 (struct lance_softc*) ;
 int FUNC_5 (struct lance_softc*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_8, u_long VAR_9, caddr_t VAR_10)
{
 struct lance_softc *VAR_11 = VAR_8->if_softc;
 struct ifreq *VAR_12 = (struct ifreq *)VAR_10;
 int VAR_13 = 0;

 switch (VAR_9) {
 case 129:
  FUNC_0(VAR_11);
  if (VAR_8->if_flags & VAR_3) {
   if (!(VAR_11->sc_flags & VAR_7)) {
    VAR_11->sc_flags |= VAR_7;
    FUNC_4(VAR_11);
   }
  } else if (VAR_11->sc_flags & VAR_7) {
   VAR_11->sc_flags &= ~VAR_7;
   FUNC_4(VAR_11);
  }

  if ((VAR_8->if_flags & VAR_0) &&
      !(VAR_11->sc_flags & VAR_5)) {
   VAR_11->sc_flags |= VAR_5;
   FUNC_4(VAR_11);
  } else if (!(VAR_8->if_flags & VAR_0) &&
      (VAR_11->sc_flags & VAR_5)) {
   VAR_11->sc_flags &= ~VAR_5;
   FUNC_4(VAR_11);
  }

  if (!(VAR_8->if_flags & VAR_4) &&
      VAR_8->if_drv_flags & VAR_2) {




   FUNC_5(VAR_11);
  } else if (VAR_8->if_flags & VAR_4 &&
      !(VAR_8->if_drv_flags & VAR_2)) {




   FUNC_4(VAR_11);
  }






  FUNC_1(VAR_11);
  break;

 case 132:
 case 131:




  FUNC_0(VAR_11);
  if (VAR_8->if_drv_flags & VAR_2)
   FUNC_4(VAR_11);
  FUNC_1(VAR_11);
  break;

 case 130:
 case 128:
  VAR_13 = FUNC_3(VAR_8, VAR_12, &VAR_11->sc_media, VAR_9);
  break;

 default:
  VAR_13 = FUNC_2(VAR_8, VAR_9, VAR_10);
  break;
 }

 return (VAR_13);
}
