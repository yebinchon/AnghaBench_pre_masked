
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_classification_ramrod_data {int dummy; } ecore_classification_ramrod_data ;
struct ecore_vlan_mac_registry_elem {int dummy; } ;
struct ecore_vlan_mac_obj {int (* check_add ) (struct bxe_softc*,struct ecore_vlan_mac_obj*,union ecore_classification_ramrod_data*) ;struct ecore_vlan_mac_registry_elem* (* check_del ) (struct bxe_softc*,struct ecore_vlan_mac_obj*,union ecore_classification_ramrod_data*) ;} ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ecore_vlan_mac_registry_elem* FUNC_0 (struct bxe_softc*,struct ecore_vlan_mac_obj*,union ecore_classification_ramrod_data*) ;
 int FUNC_1 (struct bxe_softc*,struct ecore_vlan_mac_obj*,union ecore_classification_ramrod_data*) ;

__attribute__((used)) static bool FUNC_2(struct bxe_softc *VAR_2,
        struct ecore_vlan_mac_obj *VAR_3,
        struct ecore_vlan_mac_obj *VAR_4,
        union ecore_classification_ramrod_data *VAR_5)
{
 struct ecore_vlan_mac_registry_elem *VAR_6;
 int VAR_7;




 VAR_6 = VAR_3->check_del(VAR_2, VAR_3, VAR_5);


 VAR_7 = VAR_4->check_add(VAR_2, VAR_4, VAR_5);




 if (VAR_7 || !VAR_6)
  return VAR_0;

 return VAR_1;
}
