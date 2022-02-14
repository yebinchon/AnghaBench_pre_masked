
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_mtu; int if_softc; } ;
typedef TYPE_1__* priv_p ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ifnet*,int,scalar_t__) ;
 int FUNC_1 (struct ifnet*,struct ifreq* const,int *,int) ;
 int FUNC_2 (struct ifnet*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_7, u_long VAR_8, caddr_t VAR_9)
{
 const priv_p VAR_10 = (priv_p)VAR_7->if_softc;
 struct ifreq *const VAR_11 = (struct ifreq *)VAR_9;
 int VAR_12 = 0;




 switch (VAR_8) {


 case 132:
  VAR_12 = FUNC_0(VAR_7, VAR_8, VAR_9);
  break;
 case 134:
  break;


 case 131:




  if (VAR_7->if_flags & VAR_4) {
   if (!(VAR_7->if_drv_flags & VAR_3)) {
    VAR_7->if_drv_flags &= ~(VAR_2);
    VAR_7->if_drv_flags |= VAR_3;
   }
  } else {
   if (VAR_7->if_drv_flags & VAR_3)
    VAR_7->if_drv_flags &= ~(VAR_3 |
        VAR_2);
  }
  break;


 case 129:
  if (VAR_11->ifr_mtu > VAR_5 ||
      VAR_11->ifr_mtu < VAR_6)
   VAR_12 = VAR_0;
  else
   VAR_7->if_mtu = VAR_11->ifr_mtu;
  break;


 case 130:
 case 133:
  VAR_12 = FUNC_1(VAR_7, VAR_11, &VAR_10->media, VAR_8);
  break;


 case 136:
 case 135:
  VAR_12 = 0;
  break;
 case 128:
  VAR_12 = VAR_1;
  break;

 default:
  VAR_12 = VAR_0;
  break;
 }
 return (VAR_12);
}
