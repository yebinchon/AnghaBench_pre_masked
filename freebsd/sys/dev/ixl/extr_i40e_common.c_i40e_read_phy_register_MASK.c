
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int device_id; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,int ,int ,int *) ;
 int FUNC_1 (struct i40e_hw*,int ,int ,int ,int *) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_1,
    u8 VAR_2, u16 VAR_3, u8 VAR_4, u16 *VAR_5)
{
 enum i40e_status_code VAR_6;

 switch (VAR_1->device_id) {
 case 130:
  VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_4,
        VAR_5);
  break;
 case 133:
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5);
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 return VAR_6;
}
