
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ena_com_llq_info {int desc_stride_ctrl; int descs_num_before_header; int desc_list_entry_size_ctrl; int header_location_ctrl; } ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; struct ena_com_llq_info llq_info; } ;
struct ena_admin_set_feat_resp {int dummy; } ;
struct TYPE_7__ {int descriptors_stride_ctrl_enabled; int desc_num_before_header_enabled; int entry_size_ctrl_enabled; int header_location_ctrl_enabled; } ;
struct TYPE_8__ {TYPE_3__ llq; } ;
struct TYPE_6__ {int feature_id; } ;
struct TYPE_5__ {int opcode; } ;
struct ena_admin_set_feat_cmd {TYPE_4__ u; TYPE_2__ feat_common; TYPE_1__ aq_common_descriptor; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct ena_admin_set_feat_cmd*,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ena_com_dev *VAR_2)
{
 struct ena_com_admin_queue *VAR_3;
 struct ena_admin_set_feat_cmd VAR_4;
 struct ena_admin_set_feat_resp VAR_5;
 struct ena_com_llq_info *VAR_6 = &VAR_2->llq_info;
 int VAR_7;

 FUNC_2(&VAR_4, 0x0, sizeof(VAR_4));
 VAR_3 = &VAR_2->admin_queue;

 VAR_4.aq_common_descriptor.opcode = VAR_1;
 VAR_4.feat_common.feature_id = VAR_0;

 VAR_4.u.llq.header_location_ctrl_enabled = VAR_6->header_location_ctrl;
 VAR_4.u.llq.entry_size_ctrl_enabled = VAR_6->desc_list_entry_size_ctrl;
 VAR_4.u.llq.desc_num_before_header_enabled = VAR_6->descs_num_before_header;
 VAR_4.u.llq.descriptors_stride_ctrl_enabled = VAR_6->desc_stride_ctrl;

 VAR_7 = FUNC_0(VAR_3,
         (struct ena_admin_aq_entry *)&VAR_4,
         sizeof(VAR_4),
         (struct ena_admin_acq_entry *)&VAR_5,
         sizeof(VAR_5));

 if (FUNC_3(VAR_7))
  FUNC_1("Failed to set LLQ configurations: %d\n", VAR_7);

 return VAR_7;
}
