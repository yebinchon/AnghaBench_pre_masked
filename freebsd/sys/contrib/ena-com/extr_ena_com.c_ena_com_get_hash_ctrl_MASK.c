
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ena_rss {TYPE_2__* hash_ctrl; int hash_ctrl_dma_addr; } ;
struct ena_com_dev {struct ena_rss rss; } ;
struct ena_admin_get_feat_resp {int dummy; } ;
typedef enum ena_admin_flow_hash_proto { ____Placeholder_ena_admin_flow_hash_proto } ena_admin_flow_hash_proto ;
struct TYPE_4__ {TYPE_1__* selected_fields; } ;
struct TYPE_3__ {int fields; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ,int,int ) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(struct ena_com_dev *VAR_1,
     enum ena_admin_flow_hash_proto VAR_2,
     u16 *VAR_3)
{
 struct ena_rss *VAR_4 = &VAR_1->rss;
 struct ena_admin_get_feat_resp VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_5,
        VAR_0,
        VAR_4->hash_ctrl_dma_addr,
        sizeof(*VAR_4->hash_ctrl), 0);
 if (FUNC_1(VAR_6))
  return VAR_6;

 if (VAR_3)
  *VAR_3 = VAR_4->hash_ctrl->selected_fields[VAR_2].fields;

 return 0;
}
