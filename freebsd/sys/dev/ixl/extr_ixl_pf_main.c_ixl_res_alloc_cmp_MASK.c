
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_aqc_switch_resource_alloc_element_resp {scalar_t__ resource_type; } ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct i40e_aqc_switch_resource_alloc_element_resp *VAR_2, *VAR_3;
 VAR_2 = (const struct i40e_aqc_switch_resource_alloc_element_resp *)VAR_0;
 VAR_3 = (const struct i40e_aqc_switch_resource_alloc_element_resp *)VAR_1;

 return ((int)VAR_2->resource_type - (int)VAR_3->resource_type);
}
