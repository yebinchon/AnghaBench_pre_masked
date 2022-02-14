
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_lldp_get_mib {int type; int remote_len; int local_len; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; int datalen; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,void*,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_8, u8 VAR_9,
    u8 VAR_10, void *VAR_11, u16 VAR_12,
    u16 *VAR_13, u16 *VAR_14,
    struct i40e_asq_cmd_details *VAR_15)
{
 struct i40e_aq_desc VAR_16;
 struct i40e_aqc_lldp_get_mib *VAR_17 =
  (struct i40e_aqc_lldp_get_mib *)&VAR_16.params.raw;
 struct i40e_aqc_lldp_get_mib *VAR_18 =
  (struct i40e_aqc_lldp_get_mib *)&VAR_16.params.raw;
 enum i40e_status_code VAR_19;

 if (VAR_12 == 0 || !VAR_11)
  return VAR_6;

 FUNC_3(&VAR_16, VAR_7);

 VAR_16.flags |= FUNC_0((u16)VAR_0);

 VAR_17->type = VAR_10 & VAR_5;
 VAR_17->type |= ((VAR_9 << VAR_4) &
         VAR_3);

 VAR_16.datalen = FUNC_0(VAR_12);

 VAR_16.flags |= FUNC_0((u16)VAR_0);
 if (VAR_12 > VAR_2)
  VAR_16.flags |= FUNC_0((u16)VAR_1);

 VAR_19 = FUNC_2(VAR_8, &VAR_16, VAR_11, VAR_12, VAR_15);
 if (!VAR_19) {
  if (VAR_13 != ((void*)0))
   *VAR_13 = FUNC_1(VAR_18->local_len);
  if (VAR_14 != ((void*)0))
   *VAR_14 = FUNC_1(VAR_18->remote_len);
 }

 return VAR_19;
}
