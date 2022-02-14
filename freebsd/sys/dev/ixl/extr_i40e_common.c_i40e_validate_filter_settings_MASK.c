
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_filter_control_settings {int fcoe_filt_num; int fcoe_cntx_num; int pe_filt_num; int pe_cntx_num; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct i40e_hw*,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_1(struct i40e_hw *VAR_8,
    struct i40e_filter_control_settings *VAR_9)
{
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 u32 VAR_14;

 u32 VAR_15;


 switch (VAR_9->fcoe_filt_num) {
 case 136:
 case 133:
 case 131:
 case 128:
 case 137:
 case 132:
  VAR_11 = VAR_6;
  VAR_11 <<= (u32)VAR_9->fcoe_filt_num;
  break;
 default:
  return VAR_2;
 }

 switch (VAR_9->fcoe_cntx_num) {
 case 141:
 case 146:
 case 144:
 case 142:
  VAR_10 = VAR_0;
  VAR_10 <<= (u32)VAR_9->fcoe_cntx_num;
  break;
 default:
  return VAR_2;
 }


 switch (VAR_9->pe_filt_num) {
 case 136:
 case 133:
 case 131:
 case 128:
 case 137:
 case 132:
 case 129:
 case 138:
 case 134:
 case 130:
 case 135:
  VAR_13 = VAR_6;
  VAR_13 <<= (u32)VAR_9->pe_filt_num;
  break;
 default:
  return VAR_2;
 }

 switch (VAR_9->pe_cntx_num) {
 case 141:
 case 146:
 case 144:
 case 142:
 case 139:
 case 147:
 case 143:
 case 140:
 case 148:
 case 145:
  VAR_12 = VAR_0;
  VAR_12 <<= (u32)VAR_9->pe_cntx_num;
  break;
 default:
  return VAR_2;
 }


 VAR_15 = FUNC_0(VAR_8, VAR_3);
 VAR_14 = (VAR_15 & VAR_4)
       >> VAR_5;
 if (VAR_11 + VAR_10 > VAR_14)
  return VAR_1;

 return VAR_7;
}
