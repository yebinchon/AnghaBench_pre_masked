
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {struct ecore_credit_pool_obj* vlans_pool; } ;
struct ecore_credit_pool_obj {int (* get_entry ) (struct ecore_credit_pool_obj*,int*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ecore_credit_pool_obj*,int*) ;

__attribute__((used)) static bool FUNC_2(struct ecore_vlan_mac_obj *VAR_0, int *VAR_1)
{
 struct ecore_credit_pool_obj *VAR_2 = VAR_0->vlans_pool;

 FUNC_0(!VAR_2);

 return VAR_2->get_entry(VAR_2, VAR_1);
}
