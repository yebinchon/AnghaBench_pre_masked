
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_add_remove_mcast_etag_completion {int mcast_etags_free; int mcast_etags_used; } ;
struct i40e_aqc_add_remove_mcast_etag {void* etag; void* pv_seid; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2, u16 VAR_3,
    u16 VAR_4, u16 *VAR_5, u16 *VAR_6,
    struct i40e_asq_cmd_details *VAR_7)
{
 struct i40e_aq_desc VAR_8;
 struct i40e_aqc_add_remove_mcast_etag *VAR_9 =
  (struct i40e_aqc_add_remove_mcast_etag *)&VAR_8.params.raw;
 struct i40e_aqc_add_remove_mcast_etag_completion *VAR_10 =
    (struct i40e_aqc_add_remove_mcast_etag_completion *)&VAR_8.params.raw;
 enum i40e_status_code VAR_11;


 if (VAR_3 == 0)
  return VAR_0;

 FUNC_3(&VAR_8,
       VAR_1);

 VAR_9->pv_seid = FUNC_0(VAR_3);
 VAR_9->etag = FUNC_0(VAR_4);

 VAR_11 = FUNC_2(VAR_2, &VAR_8, ((void*)0), 0, VAR_7);

 if (!VAR_11) {
  if (VAR_5 != ((void*)0))
   *VAR_5 = FUNC_1(VAR_10->mcast_etags_used);
  if (VAR_6 != ((void*)0))
   *VAR_6 = FUNC_1(VAR_10->mcast_etags_free);
 }

 return VAR_11;
}
