
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_add_tag {void* queue_number; void* flags; void* tag; void* seid; } ;
struct i40e_aqc_add_remove_tag_completion {int tags_free; int tags_used; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3, bool VAR_4,
    u16 VAR_5, u16 VAR_6, u16 VAR_7,
    u16 *VAR_8, u16 *VAR_9,
    struct i40e_asq_cmd_details *VAR_10)
{
 struct i40e_aq_desc VAR_11;
 struct i40e_aqc_add_tag *VAR_12 =
  (struct i40e_aqc_add_tag *)&VAR_11.params.raw;
 struct i40e_aqc_add_remove_tag_completion *VAR_13 =
  (struct i40e_aqc_add_remove_tag_completion *)&VAR_11.params.raw;
 enum i40e_status_code VAR_14;

 if (VAR_5 == 0)
  return VAR_1;

 FUNC_3(&VAR_11, VAR_2);

 VAR_12->seid = FUNC_0(VAR_5);
 VAR_12->tag = FUNC_0(VAR_6);
 if (VAR_4) {
  VAR_12->flags = FUNC_0(VAR_0);
  VAR_12->queue_number = FUNC_0(VAR_7);
 }

 VAR_14 = FUNC_2(VAR_3, &VAR_11, ((void*)0), 0, VAR_10);

 if (!VAR_14) {
  if (VAR_8 != ((void*)0))
   *VAR_8 = FUNC_1(VAR_13->tags_used);
  if (VAR_9 != ((void*)0))
   *VAR_9 = FUNC_1(VAR_13->tags_free);
 }

 return VAR_14;
}
