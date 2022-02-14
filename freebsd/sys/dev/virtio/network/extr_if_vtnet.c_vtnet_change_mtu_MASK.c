
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_hdr_size; int vtnet_flags; int vtnet_rx_new_clsize; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_mtu; int if_drv_flags; } ;
struct ether_vlan_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vtnet_softc*) ;

__attribute__((used)) static int
FUNC_1(struct vtnet_softc *VAR_8, int VAR_9)
{
 struct ifnet *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = VAR_8->vtnet_ifp;

 if (VAR_9 < VAR_1 || VAR_9 > VAR_7)
  return (VAR_0);

 VAR_11 = VAR_8->vtnet_hdr_size + sizeof(struct ether_vlan_header) +
     VAR_9;





 if (VAR_11 <= VAR_3) {
  VAR_12 = VAR_3;
 } else if ((VAR_8->vtnet_flags & VAR_6) == 0) {

  if (VAR_11 > VAR_4)
   return (VAR_0);
  VAR_12 = VAR_4;
 } else
  VAR_12 = VAR_5;

 VAR_10->if_mtu = VAR_9;
 VAR_8->vtnet_rx_new_clsize = VAR_12;

 if (VAR_10->if_drv_flags & VAR_2) {
  VAR_10->if_drv_flags &= ~VAR_2;
  FUNC_0(VAR_8);
 }

 return (0);
}
