
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_mac_address_read_data {int port_mac; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int*,struct i40e_aqc_mac_address_read_data*,int *) ;
 int FUNC_1 (int *,int *,int,int ) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_3, u8 *VAR_4)
{
 struct i40e_aqc_mac_address_read_data VAR_5;
 enum i40e_status_code VAR_6;
 u16 VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_3, &VAR_7, &VAR_5, ((void*)0));
 if (VAR_6)
  return VAR_6;

 if (VAR_7 & VAR_0)
  FUNC_1(VAR_4, &VAR_5.port_mac, sizeof(VAR_5.port_mac),
   VAR_2);
 else
  VAR_6 = VAR_1;

 return VAR_6;
}
