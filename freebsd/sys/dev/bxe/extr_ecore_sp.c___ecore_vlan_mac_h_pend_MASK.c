
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {unsigned long saved_ramrod_flags; int head_exe_request; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct bxe_softc *VAR_1,
        struct ecore_vlan_mac_obj *VAR_2,
        unsigned long VAR_3)
{
 VAR_2->head_exe_request = VAR_0;
 VAR_2->saved_ramrod_flags = VAR_3;
 FUNC_0(VAR_1, "Placing pending execution with ramrod flags %lu\n",
    VAR_3);
}
