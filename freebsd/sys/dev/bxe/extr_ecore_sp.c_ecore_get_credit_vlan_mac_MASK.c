
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {struct ecore_credit_pool_obj* vlans_pool; struct ecore_credit_pool_obj* macs_pool; } ;
struct ecore_credit_pool_obj {int (* put ) (struct ecore_credit_pool_obj*,int) ;int (* get ) (struct ecore_credit_pool_obj*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_credit_pool_obj*,int) ;
 int FUNC_1 (struct ecore_credit_pool_obj*,int) ;
 int FUNC_2 (struct ecore_credit_pool_obj*,int) ;

__attribute__((used)) static bool FUNC_3(struct ecore_vlan_mac_obj *VAR_2)
{
 struct ecore_credit_pool_obj *VAR_3 = VAR_2->macs_pool;
 struct ecore_credit_pool_obj *VAR_4 = VAR_2->vlans_pool;

 if (!VAR_3->get(VAR_3, 1))
  return VAR_0;

 if (!VAR_4->get(VAR_4, 1)) {
  VAR_3->put(VAR_3, 1);
  return VAR_0;
 }

 return VAR_1;
}
