
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_filter_control_settings {scalar_t__ hash_lut_size; scalar_t__ enable_macvlan; scalar_t__ enable_ethtype; scalar_t__ enable_fdir; scalar_t__ fcoe_cntx_num; scalar_t__ fcoe_filt_num; scalar_t__ pe_cntx_num; scalar_t__ pe_filt_num; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct i40e_hw*,int ) ;
 int FUNC_1 (struct i40e_hw*,struct i40e_filter_control_settings*) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_17,
    struct i40e_filter_control_settings *VAR_18)
{
 enum i40e_status_code VAR_19 = VAR_16;
 u32 VAR_20 = 0;
 u32 VAR_21;

 if (!VAR_18)
  return VAR_0;


 VAR_19 = FUNC_1(VAR_17, VAR_18);
 if (VAR_19)
  return VAR_19;


 VAR_21 = FUNC_0(VAR_17, VAR_2);


 VAR_21 &= ~VAR_10;
 VAR_21 |= ((u32)VAR_18->pe_filt_num << VAR_11) &
  VAR_10;

 VAR_21 &= ~VAR_8;
 VAR_21 |= ((u32)VAR_18->pe_cntx_num << VAR_9) &
  VAR_8;


 VAR_21 &= ~VAR_14;
 VAR_21 |= ((u32)VAR_18->fcoe_filt_num <<
   VAR_15) &
  VAR_14;

 VAR_21 &= ~VAR_12;
 VAR_21 |= ((u32)VAR_18->fcoe_cntx_num <<
   VAR_13) &
  VAR_12;


 VAR_21 &= ~VAR_5;
 if (VAR_18->hash_lut_size == VAR_1)
  VAR_20 = 1;
 VAR_21 |= (VAR_20 << VAR_6) &
  VAR_5;


 if (VAR_18->enable_fdir)
  VAR_21 |= VAR_4;
 if (VAR_18->enable_ethtype)
  VAR_21 |= VAR_3;
 if (VAR_18->enable_macvlan)
  VAR_21 |= VAR_7;

 FUNC_2(VAR_17, VAR_2, VAR_21);

 return VAR_16;
}
