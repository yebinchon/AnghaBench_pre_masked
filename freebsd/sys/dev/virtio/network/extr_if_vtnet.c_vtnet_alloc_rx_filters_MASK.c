
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vtnet_softc {int vtnet_flags; int * vtnet_vlan_filter; int * vtnet_mac_filter; } ;
struct vtnet_mac_filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct vtnet_softc *VAR_7)
{

 if (VAR_7->vtnet_flags & VAR_4) {
  VAR_7->vtnet_mac_filter = FUNC_0(sizeof(struct vtnet_mac_filter),
      VAR_1, VAR_2 | VAR_3);
  if (VAR_7->vtnet_mac_filter == ((void*)0))
   return (VAR_0);
 }

 if (VAR_7->vtnet_flags & VAR_5) {
  VAR_7->vtnet_vlan_filter = FUNC_0(sizeof(uint32_t) *
      VAR_6, VAR_1, VAR_2 | VAR_3);
  if (VAR_7->vtnet_vlan_filter == ((void*)0))
   return (VAR_0);
 }

 return (0);
}
