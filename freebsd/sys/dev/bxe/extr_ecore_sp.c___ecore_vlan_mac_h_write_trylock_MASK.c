
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {scalar_t__ head_reader; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct bxe_softc *VAR_2,
         struct ecore_vlan_mac_obj *VAR_3)
{
 if (VAR_3->head_reader) {
  FUNC_0(VAR_2, "vlan_mac_lock writer - There are readers; Busy\n");
  return VAR_0;
 }

 FUNC_0(VAR_2, "vlan_mac_lock writer - Taken\n");
 return VAR_1;
}
