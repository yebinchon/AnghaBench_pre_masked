
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_mac_address_read_data {int pf_lan_mac; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,int*,struct i40e_aqc_mac_address_read_data*,int *) ;
 int FUNC_1 (int *,int *,int,int ) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_2, u8 *VAR_3)
{
 struct i40e_aqc_mac_address_read_data VAR_4;
 enum i40e_status_code VAR_5;
 u16 VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_2, &VAR_6, &VAR_4, ((void*)0));

 if (VAR_6 & VAR_0)
  FUNC_1(VAR_3, &VAR_4.pf_lan_mac, sizeof(VAR_4.pf_lan_mac),
   VAR_1);

 return VAR_5;
}
