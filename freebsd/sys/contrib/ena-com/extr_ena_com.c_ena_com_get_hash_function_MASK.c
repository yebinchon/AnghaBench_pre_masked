
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ena_rss {int hash_func; int hash_key_dma_addr; struct ena_admin_feature_rss_flow_hash_control* hash_key; } ;
struct ena_com_dev {struct ena_rss rss; } ;
struct TYPE_3__ {int selected_func; } ;
struct TYPE_4__ {TYPE_1__ flow_hash_func; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;
struct ena_admin_feature_rss_flow_hash_control {scalar_t__ keys_num; int key; } ;
typedef enum ena_admin_hash_functions { ____Placeholder_ena_admin_hash_functions } ena_admin_hash_functions ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ,int,int ) ;
 int FUNC_1 (int *,int ,size_t) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ena_com_dev *VAR_1,
         enum ena_admin_hash_functions *VAR_2,
         u8 *VAR_3)
{
 struct ena_rss *VAR_4 = &VAR_1->rss;
 struct ena_admin_get_feat_resp VAR_5;
 struct ena_admin_feature_rss_flow_hash_control *VAR_6 =
  VAR_4->hash_key;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, &VAR_5,
        VAR_0,
        VAR_4->hash_key_dma_addr,
        sizeof(*VAR_4->hash_key), 0);
 if (FUNC_2(VAR_7))
  return VAR_7;

 VAR_4->hash_func = VAR_5.u.flow_hash_func.selected_func;
 if (VAR_2)
  *VAR_2 = VAR_4->hash_func;

 if (VAR_3)
  FUNC_1(VAR_3, VAR_6->key, (size_t)(VAR_6->keys_num) << 2);

 return 0;
}
