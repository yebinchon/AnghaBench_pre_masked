
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ena_com_admin_queue {int dummy; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;
struct ena_admin_set_feat_resp {int dummy; } ;
struct TYPE_7__ {int mtu; } ;
struct TYPE_8__ {TYPE_3__ mtu; } ;
struct TYPE_6__ {int feature_id; } ;
struct TYPE_5__ {scalar_t__ flags; int opcode; } ;
struct ena_admin_set_feat_cmd {TYPE_4__ u; TYPE_2__ feat_common; TYPE_1__ aq_common_descriptor; } ;
struct ena_admin_aq_entry {int dummy; } ;
struct ena_admin_acq_entry {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ena_com_dev*,int ) ;
 int FUNC_1 (struct ena_com_admin_queue*,struct ena_admin_aq_entry*,int,struct ena_admin_acq_entry*,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct ena_admin_set_feat_cmd*,int,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct ena_com_dev *VAR_3, int VAR_4)
{
 struct ena_com_admin_queue *VAR_5;
 struct ena_admin_set_feat_cmd VAR_6;
 struct ena_admin_set_feat_resp VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_3, VAR_0)) {
  FUNC_2("Feature %d isn't supported\n", VAR_0);
  return VAR_2;
 }

 FUNC_4(&VAR_6, 0x0, sizeof(VAR_6));
 VAR_5 = &VAR_3->admin_queue;

 VAR_6.aq_common_descriptor.opcode = VAR_1;
 VAR_6.aq_common_descriptor.flags = 0;
 VAR_6.feat_common.feature_id = VAR_0;
 VAR_6.u.mtu.mtu = VAR_4;

 VAR_8 = FUNC_1(VAR_5,
         (struct ena_admin_aq_entry *)&VAR_6,
         sizeof(VAR_6),
         (struct ena_admin_acq_entry *)&VAR_7,
         sizeof(VAR_7));

 if (FUNC_5(VAR_8))
  FUNC_3("Failed to set mtu %d. error: %d\n", VAR_4, VAR_8);

 return VAR_8;
}
