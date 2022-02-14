
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int async; } ;
struct i40e_aq_desc {int datalen; int flags; void* cookie_low; void* cookie_high; } ;
typedef enum virtchnl_ops { ____Placeholder_virtchnl_ops } virtchnl_ops ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int details ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;
 int FUNC_4 (struct i40e_asq_cmd_details*,int ,int,int ) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_8,
    enum virtchnl_ops VAR_9,
    enum i40e_status_code VAR_10,
    u8 *VAR_11, u16 VAR_12,
    struct i40e_asq_cmd_details *VAR_13)
{
 struct i40e_aq_desc VAR_14;
 struct i40e_asq_cmd_details VAR_15;
 enum i40e_status_code VAR_16;

 FUNC_3(&VAR_14, VAR_7);
 VAR_14.flags |= FUNC_0((u16)VAR_3);
 VAR_14.cookie_high = FUNC_1(VAR_9);
 VAR_14.cookie_low = FUNC_1(VAR_10);
 if (VAR_12) {
  VAR_14.flags |= FUNC_0((u16)(VAR_0
      | VAR_2));
  if (VAR_12 > VAR_4)
   VAR_14.flags |= FUNC_0((u16)VAR_1);
  VAR_14.datalen = FUNC_0(VAR_12);
 }
 if (!VAR_13) {
  FUNC_4(&VAR_15, 0, sizeof(VAR_15), VAR_5);
  VAR_15.async = VAR_6;
  VAR_13 = &VAR_15;
 }
 VAR_16 = FUNC_2(VAR_8, (struct i40e_aq_desc *)&VAR_14, VAR_11,
           VAR_12, VAR_13);
 return VAR_16;
}
