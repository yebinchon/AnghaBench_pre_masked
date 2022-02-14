
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_mtu; } ;
struct ifnet {struct axgbe_softc* if_softc; } ;
struct axgbe_softc {int media; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct ifnet*,unsigned long,scalar_t__) ;
 int FUNC_1 (struct ifnet*,struct ifreq*,int *,unsigned long) ;
 int FUNC_2 (struct ifnet*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_3, unsigned long VAR_4, caddr_t VAR_5)
{
 struct axgbe_softc *VAR_6 = VAR_3->if_softc;
 struct ifreq *VAR_7 = (struct ifreq *)VAR_5;
 int VAR_8;

 switch(VAR_4) {
 case 128:
  if (VAR_7->ifr_mtu < VAR_1 || VAR_7->ifr_mtu > VAR_2)
   VAR_8 = VAR_0;
  else
   VAR_8 = FUNC_2(VAR_3, VAR_7->ifr_mtu);
  break;
 case 130:
  VAR_8 = 0;
  break;
 case 129:
 case 131:
  VAR_8 = FUNC_1(VAR_3, VAR_7, &VAR_6->media, VAR_4);
  break;
 default:
  VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5);
  break;
 }

 return (VAR_8);
}
