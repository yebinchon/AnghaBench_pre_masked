
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {scalar_t__ head_exe_request; int head_reader; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bxe_softc*,char*,...) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_vlan_mac_obj*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_0,
       struct ecore_vlan_mac_obj *VAR_1)
{
 if (!VAR_1->head_reader) {
  FUNC_0("Need to release vlan mac reader lock, but lock isn't taken\n");



 } else {
  VAR_1->head_reader--;
  FUNC_1(VAR_0, "vlan_mac_lock - decreased readers to %d\n",
     VAR_1->head_reader);
 }




 if (!VAR_1->head_reader && VAR_1->head_exe_request) {
  FUNC_1(VAR_0, "vlan_mac_lock - reader release encountered a pending request\n");


  FUNC_2(VAR_0, VAR_1);
 }
}
