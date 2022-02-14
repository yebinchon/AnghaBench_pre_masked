
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_raw_obj {int (* wait_comp ) (struct bxe_softc*,struct ecore_raw_obj*) ;} ;
struct ecore_exe_queue_obj {int dummy; } ;
struct ecore_vlan_mac_obj {struct ecore_raw_obj raw; struct ecore_exe_queue_obj exe_queue; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bxe_softc*,int) ;
 int FUNC_1 (struct ecore_exe_queue_obj*) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_raw_obj*) ;

__attribute__((used)) static int FUNC_3(struct bxe_softc *VAR_2,
          struct ecore_vlan_mac_obj *VAR_3)
{
 int VAR_4 = 5000, VAR_5;
 struct ecore_exe_queue_obj *VAR_6 = &VAR_3->exe_queue;
 struct ecore_raw_obj *VAR_7 = &VAR_3->raw;

 while (VAR_4--) {

  VAR_5 = VAR_7->wait_comp(VAR_2, VAR_7);
  if (VAR_5)
   return VAR_5;


  if (!FUNC_1(VAR_6))
   FUNC_0(VAR_2, 1000);
  else
   return VAR_0;
 }

 return VAR_1;
}
