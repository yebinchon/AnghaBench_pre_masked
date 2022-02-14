
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_configure_partition_bw_data {int dummy; } ;
struct i40e_aq_desc {int datalen; int flags; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aqc_configure_partition_bw_data*,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_3,
   struct i40e_aqc_configure_partition_bw_data *VAR_4,
   struct i40e_asq_cmd_details *VAR_5)
{
 enum i40e_status_code VAR_6;
 struct i40e_aq_desc VAR_7;
 u16 VAR_8 = sizeof(*VAR_4);

 FUNC_2(&VAR_7,
    VAR_2);


 VAR_7.flags |= FUNC_0((u16)VAR_0);
 VAR_7.flags |= FUNC_0((u16)VAR_1);

 VAR_7.datalen = FUNC_0(VAR_8);

 VAR_6 = FUNC_1(VAR_3, &VAR_7, VAR_4, VAR_8, VAR_5);

 return VAR_6;
}
