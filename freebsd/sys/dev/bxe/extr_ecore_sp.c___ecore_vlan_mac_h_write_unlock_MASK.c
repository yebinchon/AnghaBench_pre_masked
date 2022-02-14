
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {scalar_t__ head_exe_request; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,struct ecore_vlan_mac_obj*) ;

__attribute__((used)) static void FUNC_2(struct bxe_softc *VAR_0,
         struct ecore_vlan_mac_obj *VAR_1)
{



 while(VAR_1->head_exe_request) {
  FUNC_0(VAR_0, "vlan_mac_lock - writer release encountered a pending request\n");
  FUNC_1(VAR_0, VAR_1);
 }
}
