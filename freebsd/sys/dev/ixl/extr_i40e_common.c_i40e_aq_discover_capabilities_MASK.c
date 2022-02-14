
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_list_capabilites {int count; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int datalen; int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_admin_queue_opc { ____Placeholder_i40e_admin_queue_opc } i40e_admin_queue_opc ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,void*,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_4 (struct i40e_aq_desc*,int) ;
 int FUNC_5 (struct i40e_hw*,void*,int ,int) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_7,
    void *VAR_8, u16 VAR_9, u16 *VAR_10,
    enum i40e_admin_queue_opc VAR_11,
    struct i40e_asq_cmd_details *VAR_12)
{
 struct i40e_aqc_list_capabilites *VAR_13;
 struct i40e_aq_desc VAR_14;
 enum i40e_status_code VAR_15 = VAR_4;

 VAR_13 = (struct i40e_aqc_list_capabilites *)&VAR_14.params.raw;

 if (VAR_11 != VAR_6 &&
  VAR_11 != VAR_5) {
  VAR_15 = VAR_3;
  goto exit;
 }

 FUNC_4(&VAR_14, VAR_11);

 VAR_14.flags |= FUNC_0((u16)VAR_0);
 if (VAR_9 > VAR_2)
  VAR_14.flags |= FUNC_0((u16)VAR_1);

 VAR_15 = FUNC_3(VAR_7, &VAR_14, VAR_8, VAR_9, VAR_12);
 *VAR_10 = FUNC_1(VAR_14.datalen);

 if (VAR_15)
  goto exit;

 FUNC_5(VAR_7, VAR_8, FUNC_2(VAR_13->count),
      VAR_11);

exit:
 return VAR_15;
}
