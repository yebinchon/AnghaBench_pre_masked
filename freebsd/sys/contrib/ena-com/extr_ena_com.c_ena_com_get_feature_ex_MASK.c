
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_get_feat_resp {int dummy; } ;
struct TYPE_6__ {int feature_id; int feature_version; } ;
struct TYPE_5__ {scalar_t__ length; int address; } ;
struct TYPE_4__ {scalar_t__ flags; int opcode; } ;
struct ena_admin_get_feat_cmd {TYPE_3__ feat_common; TYPE_2__ control_buffer; TYPE_1__ aq_common_descriptor; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef int get_cmd ;
typedef enum ena_admin_aq_feature_id { ____Placeholder_ena_admin_aq_feature_id } ena_admin_aq_feature_id ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ena_com_dev*,int) ;
 int FUNC_1 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_2 (struct ena_com_dev*,int *,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct ena_admin_get_feat_cmd*,int,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct ena_com_dev *VAR_3,
      struct ena_admin_get_feat_resp *VAR_4,
      enum ena_admin_aq_feature_id VAR_5,
      dma_addr_t VAR_6,
      u32 VAR_7,
      u8 VAR_8)
{
 struct ena_com_admin_queue *VAR_9;
 struct ena_admin_get_feat_cmd VAR_10;
 int VAR_11;

 if (!FUNC_0(VAR_3, VAR_5)) {
  FUNC_3("Feature %d isn't supported\n", VAR_5);
  return VAR_2;
 }

 FUNC_5(&VAR_10, 0x0, sizeof(VAR_10));
 VAR_9 = &VAR_3->admin_queue;

 VAR_10.aq_common_descriptor.opcode = VAR_1;

 if (VAR_7)
  VAR_10.aq_common_descriptor.flags =
   VAR_0;
 else
  VAR_10.aq_common_descriptor.flags = 0;

 VAR_11 = FUNC_2(VAR_3,
       &VAR_10.control_buffer.address,
       VAR_6);
 if (FUNC_6(VAR_11)) {
  FUNC_4("memory address set failed\n");
  return VAR_11;
 }

 VAR_10.control_buffer.length = VAR_7;
 VAR_10.feat_common.feature_version = VAR_8;
 VAR_10.feat_common.feature_id = VAR_5;

 VAR_11 = FUNC_1(VAR_9,
         (struct ena_admin_aq_entry *)
         &VAR_10,
         sizeof(VAR_10),
         (struct ena_admin_acq_entry *)
         VAR_4,
         sizeof(*VAR_4));

 if (FUNC_6(VAR_11))
  FUNC_4("Failed to submit get_feature command %d error: %d\n",
       VAR_5, VAR_11);

 return VAR_11;
}
