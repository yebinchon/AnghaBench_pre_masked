
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ifreq {int ifr_mtu; } ;
struct ifnet {int if_mtu; struct epair_softc* if_softc; } ;
struct epair_softc {int media; } ;
typedef scalar_t__ caddr_t ;
 int FUNC_0 (struct ifnet*,int,scalar_t__) ;
 int FUNC_1 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_0, u_long VAR_1, caddr_t VAR_2)
{
 struct epair_softc *VAR_3;
 struct ifreq *VAR_4;
 int VAR_5;

 VAR_4 = (struct ifreq *)VAR_2;
 switch (VAR_1) {
 case 130:
 case 133:
 case 132:
  VAR_5 = 0;
  break;

 case 129:
 case 131:
  VAR_3 = VAR_0->if_softc;
  VAR_5 = FUNC_1(VAR_0, VAR_4, &VAR_3->media, VAR_1);
  break;

 case 128:

  VAR_0->if_mtu = VAR_4->ifr_mtu;
  VAR_5 = 0;
  break;

 default:

  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 }

 return (VAR_5);
}
