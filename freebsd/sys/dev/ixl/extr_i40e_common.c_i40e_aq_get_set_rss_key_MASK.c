
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_aqc_get_set_rss_key_data {int dummy; } ;
struct i40e_aqc_get_set_rss_key {int vsi_id; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {int flags; TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aqc_get_set_rss_key_data*,int,int *) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_3(struct i40e_hw *VAR_7,
          u16 VAR_8,
          struct i40e_aqc_get_set_rss_key_data *VAR_9,
          bool VAR_10)
{
 enum i40e_status_code VAR_11;
 struct i40e_aq_desc VAR_12;
 struct i40e_aqc_get_set_rss_key *VAR_13 =
   (struct i40e_aqc_get_set_rss_key *)&VAR_12.params.raw;
 u16 VAR_14 = sizeof(struct i40e_aqc_get_set_rss_key_data);

 if (VAR_10)
  FUNC_2(&VAR_12,
        VAR_6);
 else
  FUNC_2(&VAR_12,
        VAR_5);


 VAR_12.flags |= FUNC_0((u16)VAR_3);
 VAR_12.flags |= FUNC_0((u16)VAR_4);

 VAR_13->vsi_id =
   FUNC_0((u16)((VAR_8 <<
       VAR_1) &
       VAR_0));
 VAR_13->vsi_id |= FUNC_0((u16)VAR_2);

 VAR_11 = FUNC_1(VAR_7, &VAR_12, VAR_9, VAR_14, ((void*)0));

 return VAR_11;
}
