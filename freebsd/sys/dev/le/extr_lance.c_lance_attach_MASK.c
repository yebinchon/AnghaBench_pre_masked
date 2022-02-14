
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {int sc_enaddr; struct ifnet* sc_ifp; } ;
struct ifnet {int if_hdrlen; int if_capenable; int if_capabilities; } ;
struct ether_vlan_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int ) ;

void
FUNC_1(struct lance_softc *VAR_1)
{
 struct ifnet *VAR_2 = VAR_1->sc_ifp;


 FUNC_0(VAR_2, VAR_1->sc_enaddr);


 VAR_2->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_2->if_capabilities |= VAR_0;
 VAR_2->if_capenable |= VAR_0;
}
