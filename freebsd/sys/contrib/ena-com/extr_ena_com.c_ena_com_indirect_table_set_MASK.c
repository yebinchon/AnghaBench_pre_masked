
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ena_rss {unsigned long long tbl_log_size; int rss_ind_tbl_dma_addr; } ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_rss rss; struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_set_feat_resp {int dummy; } ;
struct TYPE_10__ {unsigned long long length; int address; } ;
struct TYPE_8__ {unsigned long long size; int inline_index; } ;
struct TYPE_9__ {TYPE_3__ ind_table; } ;
struct TYPE_7__ {int feature_id; } ;
struct TYPE_6__ {int flags; int opcode; } ;
struct ena_admin_set_feat_cmd {TYPE_5__ control_buffer; TYPE_4__ u; TYPE_2__ feat_common; TYPE_1__ aq_common_descriptor; } ;
struct ena_admin_rss_ind_table_entry {int dummy; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ena_com_dev*,int ) ;
 int FUNC_1 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_2 (struct ena_com_dev*) ;
 int FUNC_3 (struct ena_com_dev*,int *,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct ena_admin_set_feat_cmd*,int,int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ena_com_dev *VAR_4)
{
 struct ena_com_admin_queue *VAR_5 = &VAR_4->admin_queue;
 struct ena_rss *VAR_6 = &VAR_4->rss;
 struct ena_admin_set_feat_cmd VAR_7;
 struct ena_admin_set_feat_resp VAR_8;
 int VAR_9;

 if (!FUNC_0(VAR_4,
      VAR_1)) {
  FUNC_4("Feature %d isn't supported\n",
       VAR_1);
  return VAR_3;
 }

 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9) {
  FUNC_5("Failed to convert host indirection table to device table\n");
  return VAR_9;
 }

 FUNC_6(&VAR_7, 0x0, sizeof(VAR_7));

 VAR_7.aq_common_descriptor.opcode = VAR_2;
 VAR_7.aq_common_descriptor.flags =
  VAR_0;
 VAR_7.feat_common.feature_id = VAR_1;
 VAR_7.u.ind_table.size = VAR_6->tbl_log_size;
 VAR_7.u.ind_table.inline_index = 0xFFFFFFFF;

 VAR_9 = FUNC_3(VAR_4,
       &VAR_7.control_buffer.address,
       VAR_6->rss_ind_tbl_dma_addr);
 if (FUNC_7(VAR_9)) {
  FUNC_5("memory address set failed\n");
  return VAR_9;
 }

 VAR_7.control_buffer.length = (1ULL << VAR_6->tbl_log_size) *
  sizeof(struct ena_admin_rss_ind_table_entry);

 VAR_9 = FUNC_1(VAR_5,
         (struct ena_admin_aq_entry *)&VAR_7,
         sizeof(VAR_7),
         (struct ena_admin_acq_entry *)&VAR_8,
         sizeof(VAR_8));

 if (FUNC_7(VAR_9))
  FUNC_5("Failed to set indirect table. error: %d\n", VAR_9);

 return VAR_9;
}
