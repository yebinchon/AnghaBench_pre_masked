
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifreq {int ifr_flags; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_mtu; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_0 (struct ifnet*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct ifnet *VAR_7, u_long VAR_8, caddr_t VAR_9)
{
 struct ifreq *const VAR_10 = (struct ifreq *) VAR_9;
 int VAR_11 = 0;




 switch (VAR_8) {


 case 131:
  VAR_7->if_flags |= VAR_4;
  VAR_7->if_drv_flags |= VAR_3;
  VAR_7->if_drv_flags &= ~(VAR_2);
  break;
 case 132:
  break;


 case 130:




  if (VAR_10->ifr_flags & VAR_4) {
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
  if (VAR_10->ifr_mtu > VAR_5
      || VAR_10->ifr_mtu < VAR_6)
   VAR_11 = VAR_0;
  else
   VAR_7->if_mtu = VAR_10->ifr_mtu;
  break;


 case 134:
 case 133:
  VAR_11 = 0;
  break;
 case 128:
  VAR_11 = VAR_1;
  break;

 default:
  VAR_11 = VAR_0;
  break;
 }
 return (VAR_11);
}
