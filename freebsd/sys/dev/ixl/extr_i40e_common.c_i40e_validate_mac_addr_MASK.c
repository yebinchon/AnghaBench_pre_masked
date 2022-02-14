
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int VAR_1 ;

enum i40e_status_code FUNC_2(u8 *VAR_2)
{
 enum i40e_status_code VAR_3 = VAR_1;

 FUNC_0("i40e_validate_mac_addr");





 if (FUNC_1(VAR_2) ||
     (VAR_2[0] == 0 && VAR_2[1] == 0 && VAR_2[2] == 0 &&
       VAR_2[3] == 0 && VAR_2[4] == 0 && VAR_2[5] == 0))
  VAR_3 = VAR_0;

 return VAR_3;
}
