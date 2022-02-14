
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {unsigned long saved_ramrod_flags; int exe_queue; int head_exe_request; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct bxe_softc*,char*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bxe_softc*,int *,unsigned long*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct bxe_softc *VAR_3,
         struct ecore_vlan_mac_obj *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6 = VAR_4->saved_ramrod_flags;

 FUNC_1(VAR_3, "vlan_mac_lock execute pending command with ramrod flags %lu\n",
    VAR_6);
 VAR_4->head_exe_request = VAR_2;
 VAR_4->saved_ramrod_flags = 0;
 VAR_5 = FUNC_2(VAR_3, &VAR_4->exe_queue, &VAR_6);
 if ((VAR_5 != VAR_1) && (VAR_5 != VAR_0)) {
  FUNC_0("execution of pending commands failed with rc %d\n",
     VAR_5);



 }
}
