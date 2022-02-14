
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u32 ;
struct virtchnl_rss_key {int key_len; int * key; int vsi_id; } ;
struct TYPE_5__ {int vsi_num; } ;
struct ixl_vf {int vf_num; TYPE_2__ vsi; } ;
struct TYPE_6__ {int asq_last_status; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_3__ aq; TYPE_1__ mac; } ;
struct ixl_pf {int dev; struct i40e_hw hw; } ;
struct i40e_aqc_get_set_rss_key_data {int extended_hash_key; int standard_rss_key; } ;
typedef int key_data ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct i40e_aqc_get_set_rss_key_data*,int) ;
 int FUNC_4 (int ,char*,int ,int,...) ;
 int FUNC_5 (struct i40e_hw*,int ,struct i40e_aqc_get_set_rss_key_data*) ;
 int FUNC_6 (struct i40e_hw*,int ) ;
 int FUNC_7 (struct ixl_pf*,struct ixl_vf*,int ,int ) ;
 int FUNC_8 (struct i40e_hw*,int) ;
 int FUNC_9 (struct i40e_hw*,int ,int ) ;
 int FUNC_10 (struct ixl_pf*,struct ixl_vf*,int ) ;

__attribute__((used)) static void
FUNC_11(struct ixl_pf *VAR_4, struct ixl_vf *VAR_5, void *VAR_6,
    uint16_t VAR_7)
{
 struct i40e_hw *VAR_8;
 struct virtchnl_rss_key *VAR_9;
 struct i40e_aqc_get_set_rss_key_data VAR_10;
 enum i40e_status_code VAR_11;

 VAR_8 = &VAR_4->hw;

 if (VAR_7 < sizeof(*VAR_9)) {
  FUNC_7(VAR_4, VAR_5, VAR_3,
      VAR_1);
  return;
 }

 VAR_9 = VAR_6;

 if (VAR_9->key_len > 52) {
  FUNC_4(VAR_4->dev, "VF %d: Key size in msg (%d) is greater than max key size (%d)\n",
      VAR_5->vf_num, VAR_9->key_len, 52);
  FUNC_7(VAR_4, VAR_5, VAR_3,
      VAR_1);
  return;
 }

 if (VAR_9->vsi_id != VAR_5->vsi.vsi_num) {
  FUNC_4(VAR_4->dev, "VF %d: VSI id in recvd message (%d) does not match expected id (%d)\n",
      VAR_5->vf_num, VAR_9->vsi_id, VAR_5->vsi.vsi_num);
  FUNC_7(VAR_4, VAR_5, VAR_3,
      VAR_1);
  return;
 }


 if (VAR_8->mac.type == VAR_2) {
  FUNC_3(&VAR_10, sizeof(VAR_10));
  if (VAR_9->key_len <= 40)
   FUNC_2(VAR_9->key, VAR_10.standard_rss_key, VAR_9->key_len);
  else {
   FUNC_2(VAR_9->key, VAR_10.standard_rss_key, 40);
   FUNC_2(&VAR_9->key[40], VAR_10.extended_hash_key, VAR_9->key_len - 40);
  }
  VAR_11 = FUNC_5(VAR_8, VAR_5->vsi.vsi_num, &VAR_10);
  if (VAR_11) {
   FUNC_4(VAR_4->dev, "i40e_aq_set_rss_key status %s, error %s\n",
       FUNC_8(VAR_8, VAR_11), FUNC_6(VAR_8, VAR_8->aq.asq_last_status));
   FUNC_7(VAR_4, VAR_5, VAR_3,
       VAR_0);
   return;
  }
 } else {
  for (int VAR_12 = 0; VAR_12 < (VAR_9->key_len / 4); VAR_12++)
   FUNC_9(VAR_8, FUNC_1(VAR_12, VAR_5->vf_num), ((u32 *)VAR_9->key)[VAR_12]);
 }

 FUNC_0(VAR_4->dev, "VF %d: Programmed key starting with 0x%x ok!",
     VAR_5->vf_num, VAR_9->key[0]);

 FUNC_10(VAR_4, VAR_5, VAR_3);
}
