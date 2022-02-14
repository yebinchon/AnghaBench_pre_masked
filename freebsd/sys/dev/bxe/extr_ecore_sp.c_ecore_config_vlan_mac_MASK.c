
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_ramrod_params {unsigned long ramrod_flags; struct ecore_vlan_mac_obj* vlan_mac_obj; } ;
struct ecore_raw_obj {int (* wait_comp ) (struct bxe_softc*,struct ecore_raw_obj*) ;int (* clear_pending ) (struct ecore_raw_obj*) ;} ;
struct ecore_vlan_mac_obj {int exe_queue; struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned long*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bxe_softc*,struct ecore_vlan_mac_obj*,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_vlan_mac_ramrod_params*) ;
 int FUNC_6 (struct ecore_raw_obj*) ;
 int FUNC_7 (struct bxe_softc*,struct ecore_raw_obj*) ;

int FUNC_8(struct bxe_softc *VAR_6,
      struct ecore_vlan_mac_ramrod_params *VAR_7)
{
 int VAR_8 = VAR_1;
 struct ecore_vlan_mac_obj *VAR_9 = VAR_7->vlan_mac_obj;
 unsigned long *VAR_10 = &VAR_7->ramrod_flags;
 bool VAR_11 = FUNC_1(VAR_3, VAR_10);
 struct ecore_raw_obj *VAR_12 = &VAR_9->raw;




 if (!VAR_11) {
  VAR_8 = FUNC_5(VAR_6, VAR_7);
  if (VAR_8)
   return VAR_8;
 }




 if (!FUNC_3(&VAR_9->exe_queue))
  VAR_8 = VAR_0;

 if (FUNC_1(VAR_4, VAR_10)) {
  FUNC_0(VAR_6, "RAMROD_DRV_CLR_ONLY requested: clearing a pending bit.\n");
  VAR_12->clear_pending(VAR_12);
 }


 if (VAR_11 || FUNC_1(VAR_5, VAR_10) ||
     FUNC_1(VAR_2, VAR_10)) {
  VAR_8 = FUNC_2(VAR_6, VAR_7->vlan_mac_obj,
         &VAR_7->ramrod_flags);
  if (VAR_8 < 0)
   return VAR_8;
 }




 if (FUNC_1(VAR_2, &VAR_7->ramrod_flags)) {



  int VAR_13 = FUNC_4(&VAR_9->exe_queue) + 1;

  while (!FUNC_3(&VAR_9->exe_queue) &&
         VAR_13--) {


   VAR_8 = VAR_12->wait_comp(VAR_6, VAR_12);
   if (VAR_8)
    return VAR_8;


   VAR_8 = FUNC_2(VAR_6,
          VAR_7->vlan_mac_obj,
          &VAR_7->ramrod_flags);
   if (VAR_8 < 0)
    return VAR_8;
  }

  return VAR_1;
 }

 return VAR_8;
}
