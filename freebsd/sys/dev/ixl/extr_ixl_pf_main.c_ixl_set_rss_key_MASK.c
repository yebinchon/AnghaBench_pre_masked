
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct ixl_vsi {int vsi_num; } ;
struct TYPE_4__ {int asq_last_status; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_2__ aq; TYPE_1__ mac; } ;
struct ixl_pf {int dev; struct ixl_vsi vsi; struct i40e_hw hw; } ;
struct i40e_aqc_get_set_rss_key_data {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct i40e_aqc_get_set_rss_key_data*,int) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (struct i40e_hw*,int ,struct i40e_aqc_get_set_rss_key_data*) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int) ;
 int FUNC_6 (struct i40e_hw*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct ixl_pf *VAR_2)
{
 struct i40e_hw *VAR_3 = &VAR_2->hw;
 struct ixl_vsi *VAR_4 = &VAR_2->vsi;
 device_t VAR_5 = VAR_2->dev;
 u32 VAR_6[VAR_1];
 enum i40e_status_code VAR_7;





 FUNC_7(VAR_6);


 if (VAR_3->mac.type == VAR_0) {
  struct i40e_aqc_get_set_rss_key_data VAR_8;
  FUNC_1(VAR_6, &VAR_8, 52);
  VAR_7 = FUNC_3(VAR_3, VAR_4->vsi_num, &VAR_8);
  if (VAR_7)
   FUNC_2(VAR_5,
       "i40e_aq_set_rss_key status %s, error %s\n",
       FUNC_5(VAR_3, VAR_7),
       FUNC_4(VAR_3, VAR_3->aq.asq_last_status));
 } else {
  for (int VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
   FUNC_6(VAR_3, FUNC_0(VAR_9), VAR_6[VAR_9]);
 }
}
