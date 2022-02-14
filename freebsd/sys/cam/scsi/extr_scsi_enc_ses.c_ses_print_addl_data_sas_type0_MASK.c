
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
struct ses_elm_sas_device_phy {int phy_addr; int parent_addr; int target_ports; int initiator_ports; int phy_id; } ;
struct TYPE_12__ {struct ses_elm_sas_device_phy* sasdev_phys; } ;
struct TYPE_11__ {TYPE_8__* sas; } ;
struct ses_addl_status {TYPE_4__ proto_data; TYPE_3__ proto_hdr; int hdr; } ;
struct sbuf {int dummy; } ;
struct TYPE_13__ {struct ses_addl_status addl; } ;
typedef TYPE_5__ ses_element_t ;
struct TYPE_14__ {TYPE_5__* elm_private; } ;
typedef TYPE_6__ enc_element_t ;
struct TYPE_10__ {int num_phys; } ;
struct TYPE_9__ {int dev_slot_num; } ;
struct TYPE_15__ {TYPE_2__ base_hdr; TYPE_1__ type0_eip; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sbuf*,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ses_elm_sas_device_phy*) ;
 scalar_t__ FUNC_5 (struct ses_elm_sas_device_phy*) ;
 scalar_t__ FUNC_6 (TYPE_8__*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_0, struct sbuf *VAR_1,
         enc_element_t *VAR_2)
{
 int VAR_3;
 ses_element_t *VAR_4;
 struct ses_addl_status *VAR_5;
 struct ses_elm_sas_device_phy *VAR_6;

 VAR_4 = VAR_2->elm_private;
 VAR_5 = &(VAR_4->addl);
 FUNC_1(VAR_1, ", SAS Slot: %d%s phys",
     VAR_5->proto_hdr.sas->base_hdr.num_phys,
     FUNC_6(VAR_5->proto_hdr.sas) ? "+" : "");
 if (FUNC_3(VAR_5->hdr))
  FUNC_1(VAR_1, " at slot %d",
      VAR_5->proto_hdr.sas->type0_eip.dev_slot_num);
 FUNC_1(VAR_1, "\n");
 if (VAR_5->proto_data.sasdev_phys == ((void*)0))
  return;
 for (VAR_3 = 0;VAR_3 < VAR_5->proto_hdr.sas->base_hdr.num_phys;VAR_3++) {
  VAR_6 = &VAR_5->proto_data.sasdev_phys[VAR_3];
  FUNC_1(VAR_1, "%s:  phy %d:", VAR_0, VAR_3);
  if (FUNC_5(VAR_6))

   FUNC_1(VAR_1, " SATA device\n");
  else {
   FUNC_1(VAR_1, " SAS device type %d phy %d",
       FUNC_4(VAR_6), VAR_6->phy_id);
   FUNC_0(VAR_6->initiator_ports, "Initiator");
   FUNC_0(VAR_6->target_ports, "Target");
   FUNC_1(VAR_1, "\n");
  }
  FUNC_1(VAR_1, "%s:  phy %d: parent %jx addr %jx\n",
      VAR_0, VAR_3,
      (uintmax_t)FUNC_2(VAR_6->parent_addr),
      (uintmax_t)FUNC_2(VAR_6->phy_addr));
 }
}
