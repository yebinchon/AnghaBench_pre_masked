
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_pf_vf_message {void* id; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int datalen; int flags; void* cookie_low; void* cookie_high; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_6, u16 VAR_7,
    u32 VAR_8, u32 VAR_9, u8 *VAR_10, u16 VAR_11,
    struct i40e_asq_cmd_details *VAR_12)
{
 struct i40e_aq_desc VAR_13;
 struct i40e_aqc_pf_vf_message *VAR_14 =
  (struct i40e_aqc_pf_vf_message *)&VAR_13.params.raw;
 enum i40e_status_code VAR_15;

 FUNC_3(&VAR_13, VAR_5);
 VAR_14->id = FUNC_1(VAR_7);
 VAR_13.cookie_high = FUNC_1(VAR_8);
 VAR_13.cookie_low = FUNC_1(VAR_9);
 VAR_13.flags |= FUNC_0((u16)VAR_3);
 if (VAR_11) {
  VAR_13.flags |= FUNC_0((u16)(VAR_0 |
      VAR_2));
  if (VAR_11 > VAR_4)
   VAR_13.flags |= FUNC_0((u16)VAR_1);
  VAR_13.datalen = FUNC_0(VAR_11);
 }
 VAR_15 = FUNC_2(VAR_6, &VAR_13, VAR_10, VAR_11, VAR_12);

 return VAR_15;
}
