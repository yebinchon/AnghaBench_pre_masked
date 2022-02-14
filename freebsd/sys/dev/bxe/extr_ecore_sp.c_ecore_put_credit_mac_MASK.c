
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_vlan_mac_obj {struct ecore_credit_pool_obj* macs_pool; } ;
struct ecore_credit_pool_obj {int (* put ) (struct ecore_credit_pool_obj*,int) ;} ;


 int FUNC_0 (struct ecore_credit_pool_obj*,int) ;

__attribute__((used)) static bool FUNC_1(struct ecore_vlan_mac_obj *VAR_0)
{
 struct ecore_credit_pool_obj *VAR_1 = VAR_0->macs_pool;

 return VAR_1->put(VAR_1, 1);
}
