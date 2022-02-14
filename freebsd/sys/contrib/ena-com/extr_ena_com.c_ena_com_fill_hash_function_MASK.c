
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct ena_rss {int hash_func; void* hash_init_val; int hash_key_dma_addr; struct ena_admin_feature_rss_flow_hash_control* hash_key; } ;
struct ena_com_dev {struct ena_rss rss; } ;
struct TYPE_3__ {int supported_func; } ;
struct TYPE_4__ {TYPE_1__ flow_hash_func; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;
struct ena_admin_feature_rss_flow_hash_control {int keys_num; int key; } ;
typedef enum ena_admin_hash_functions { ____Placeholder_ena_admin_hash_functions } ena_admin_hash_functions ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ,int,int ) ;
 int FUNC_1 (struct ena_com_dev*,int *,int *) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int ,int const*,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ena_com_dev *VAR_3,
          enum ena_admin_hash_functions VAR_4,
          const u8 *VAR_5, u16 VAR_6, u32 VAR_7)
{
 struct ena_rss *VAR_8 = &VAR_3->rss;
 struct ena_admin_get_feat_resp VAR_9;
 struct ena_admin_feature_rss_flow_hash_control *VAR_10 =
  VAR_8->hash_key;
 int VAR_11;


 if (FUNC_5(VAR_6 & 0x3))
  return VAR_1;

 VAR_11 = FUNC_0(VAR_3, &VAR_9,
        VAR_0,
        VAR_8->hash_key_dma_addr,
        sizeof(*VAR_8->hash_key), 0);
 if (FUNC_5(VAR_11))
  return VAR_11;

 if (!((1 << VAR_4) & VAR_9.u.flow_hash_func.supported_func)) {
  FUNC_3("Flow hash function %d isn't supported\n", VAR_4);
  return VAR_2;
 }

 switch (VAR_4) {
 case 128:
  if (VAR_6 > sizeof(VAR_10->key)) {
   FUNC_3("key len (%hu) is bigger than the max supported (%zu)\n",
        VAR_6, sizeof(VAR_10->key));
   return VAR_1;
  }

  FUNC_4(VAR_10->key, VAR_5, VAR_6);
  VAR_8->hash_init_val = VAR_7;
  VAR_10->keys_num = VAR_6 >> 2;
  break;
 case 129:
  VAR_8->hash_init_val = VAR_7;
  break;
 default:
  FUNC_3("Invalid hash function (%d)\n", VAR_4);
  return VAR_1;
 }

 VAR_8->hash_func = VAR_4;
 VAR_11 = FUNC_2(VAR_3);


 if (FUNC_5(VAR_11))
  FUNC_1(VAR_3, ((void*)0), ((void*)0));

 return VAR_11;
}
