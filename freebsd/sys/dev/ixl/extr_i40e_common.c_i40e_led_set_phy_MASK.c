
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*,int ,int*) ;
 int FUNC_1 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_5, bool VAR_6,
           u16 VAR_7, u32 VAR_8)
{
 enum i40e_status_code VAR_9 = VAR_4;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;

 VAR_9 = FUNC_0(VAR_5, VAR_7, &VAR_11);
 if (VAR_9)
  return VAR_9;
 VAR_10 = VAR_11;
 if (VAR_11 & VAR_0) {
  VAR_11 = 0;
  VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_11);
  if (VAR_9)
   return VAR_9;
 }
 VAR_9 = FUNC_0(VAR_5, VAR_7, &VAR_11);
 if (VAR_9)
  goto restore_config;
 if (VAR_6)
  VAR_11 = VAR_1;
 else
  VAR_11 = 0;
 VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_11);
 if (VAR_9)
  goto restore_config;
 if (VAR_8 & VAR_3) {
  VAR_10 = (VAR_8 & VAR_2);
  VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_10);
 }
 return VAR_9;

restore_config:
 VAR_9 = FUNC_1(VAR_5, VAR_7, VAR_10);
 return VAR_9;
}
