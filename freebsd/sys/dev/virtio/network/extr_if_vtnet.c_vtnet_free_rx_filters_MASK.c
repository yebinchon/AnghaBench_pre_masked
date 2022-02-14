
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int * vtnet_vlan_filter; int * vtnet_mac_filter; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct vtnet_softc *VAR_1)
{

 if (VAR_1->vtnet_mac_filter != ((void*)0)) {
  FUNC_0(VAR_1->vtnet_mac_filter, VAR_0);
  VAR_1->vtnet_mac_filter = ((void*)0);
 }

 if (VAR_1->vtnet_vlan_filter != ((void*)0)) {
  FUNC_0(VAR_1->vtnet_vlan_filter, VAR_0);
  VAR_1->vtnet_vlan_filter = ((void*)0);
 }
}
