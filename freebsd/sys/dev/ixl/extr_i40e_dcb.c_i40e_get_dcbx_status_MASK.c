
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*,int ) ;

enum i40e_status_code FUNC_1(struct i40e_hw *VAR_5, u16 *VAR_6)
{
 u32 VAR_7;

 if (!VAR_6)
  return VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_1);
 *VAR_6 = (u16)((VAR_7 & VAR_2) >>
   VAR_3);

 return VAR_4;
}
