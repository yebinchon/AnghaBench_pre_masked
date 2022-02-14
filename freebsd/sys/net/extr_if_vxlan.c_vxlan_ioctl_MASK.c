
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct vxlan_softc {int vxl_media; } ;
struct ifreq {int ifr_mtu; } ;
struct ifnet {int if_mtu; struct vxlan_softc* if_softc; } ;
struct ifdrv {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*,int,scalar_t__) ;
 int FUNC_1 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_2 (struct vxlan_softc*,struct ifdrv*,int) ;
 int FUNC_3 (struct vxlan_softc*) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_3, u_long VAR_4, caddr_t VAR_5)
{
 struct vxlan_softc *VAR_6;
 struct ifreq *VAR_7;
 struct ifdrv *VAR_8;
 int VAR_9;

 VAR_6 = VAR_3->if_softc;
 VAR_7 = (struct ifreq *) VAR_5;
 VAR_8 = (struct ifdrv *) VAR_5;

 VAR_9 = 0;

 switch (VAR_4) {
 case 135:
 case 134:
  break;

 case 133:
 case 131:
  VAR_9 = FUNC_2(VAR_6, VAR_8, VAR_4 == 133);
  break;

 case 130:
  VAR_9 = FUNC_3(VAR_6);
  break;

 case 129:
 case 132:
  VAR_9 = FUNC_1(VAR_3, VAR_7, &VAR_6->vxl_media, VAR_4);
  break;

 case 128:
  if (VAR_7->ifr_mtu < VAR_1 || VAR_7->ifr_mtu > VAR_2)
   VAR_9 = VAR_0;
  else
   VAR_3->if_mtu = VAR_7->ifr_mtu;
  break;

 default:
  VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5);
  break;
 }

 return (VAR_9);
}
