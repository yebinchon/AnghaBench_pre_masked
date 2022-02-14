
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_13__ {int retain_tsend_io_length; void* ignore_send_frame; void* sglc_misreported; void* fw_version_too_low; void* override_fcfi; void* use_dif_sec_xri; void* use_dif_quarantine; void* disable_dump_loc; void* disable_ar_tgt_dif; void* use_unregistered_rpi; int unregistered_index; int unregistered_rid; void* fwrev; } ;
struct TYPE_10__ {int * count_method; scalar_t__* fw_name; } ;
struct TYPE_11__ {TYPE_1__ config; } ;
struct ocs_hw_s {char* hw_war_version; TYPE_6__ workaround; int os; TYPE_2__ sli; int * num_qentries; } ;
typedef TYPE_2__ sli4_t ;
typedef size_t sli4_qtype_e ;
struct TYPE_12__ {int workaround; int value; } ;
typedef TYPE_3__ hw_workaround_t ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ FUNC_1 (struct ocs_hw_s*,TYPE_3__*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_6__*,int ,int) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,int *,int *) ;

void
FUNC_8(struct ocs_hw_s *VAR_8)
{
 hw_workaround_t *VAR_9;
 sli4_t *VAR_10 = &VAR_8->sli;
 uint32_t VAR_11;


 FUNC_4(&VAR_8->workaround, 0, sizeof(VAR_8->workaround));





 if (VAR_8->hw_war_version) {
  VAR_8->workaround.fwrev = FUNC_5(VAR_8->hw_war_version);
 } else {
  VAR_8->workaround.fwrev = FUNC_5((char*) VAR_10->config.fw_name[0]);
 }


 for (VAR_11 = 0, VAR_9 = VAR_7; VAR_11 < FUNC_0(VAR_7); VAR_11++, VAR_9++) {
  if (FUNC_1(VAR_8, VAR_9)) {
   switch(VAR_9->workaround) {

   case 132: {
    FUNC_2(VAR_8->os, "Override: test: %d\n", VAR_9->value);
    break;
   }

   case 135: {
    FUNC_2(VAR_8->os, "HW Workaround: retain TSEND IO length\n");
    VAR_8->workaround.retain_tsend_io_length = 1;
    break;
   }
   case 138: {
    sli4_qtype_e VAR_12;

    FUNC_2(VAR_8->os, "HW Workaround: override max_qentries: %d\n", VAR_9->value);
    for (VAR_12 = VAR_1; VAR_12 < VAR_2; VAR_12++) {
     if (VAR_8->num_qentries[VAR_12] > VAR_9->value) {
      VAR_8->num_qentries[VAR_12] = VAR_9->value;
     }
    }
    break;
   }
   case 137: {
    FUNC_2(VAR_8->os, "HW Workaround: override RQ max_qentries: %d\n", VAR_9->value);
    if (VAR_8->num_qentries[VAR_3] > VAR_9->value) {
     VAR_8->num_qentries[VAR_3] = VAR_9->value;
    }
    break;
   }
   case 128: {
    FUNC_2(VAR_8->os, "HW Workaround: set WQE count method=%d\n", VAR_9->value);
    VAR_10->config.count_method[VAR_4] = VAR_9->value;
    FUNC_6(VAR_10);
    break;
   }
   case 134: {
    FUNC_2(VAR_8->os, "HW Workaround: set RQE count method=%d\n", VAR_9->value);
    VAR_10->config.count_method[VAR_3] = VAR_9->value;
    FUNC_6(VAR_10);
    break;
   }
   case 129:
    FUNC_2(VAR_8->os, "HW Workaround: use unreg'd RPI if rnode->indicator == 0xFFFF\n");
    VAR_8->workaround.use_unregistered_rpi = VAR_6;




    if (FUNC_7(&VAR_8->sli, VAR_5, &VAR_8->workaround.unregistered_rid,
     &VAR_8->workaround.unregistered_index)) {
     FUNC_3(VAR_8->os, "sli_resource_alloc unregistered RPI failed\n");
     VAR_8->workaround.use_unregistered_rpi = VAR_0;
    }
    break;
   case 142:
    FUNC_2(VAR_8->os, "HW Workaround: disable AR on T10-PI TSEND\n");
    VAR_8->workaround.disable_ar_tgt_dif = VAR_6;
    break;
   case 141:
    FUNC_2(VAR_8->os, "HW Workaround: disable set_dump_loc\n");
    VAR_8->workaround.disable_dump_loc = VAR_6;
    break;
   case 131:
    FUNC_2(VAR_8->os, "HW Workaround: use DIF quarantine\n");
    VAR_8->workaround.use_dif_quarantine = VAR_6;
    break;
   case 130:
    FUNC_2(VAR_8->os, "HW Workaround: use DIF secondary xri\n");
    VAR_8->workaround.use_dif_sec_xri = VAR_6;
    break;
   case 136:
    FUNC_2(VAR_8->os, "HW Workaround: override FCFI in SRB\n");
    VAR_8->workaround.override_fcfi = VAR_6;
    break;

   case 140:
    FUNC_2(VAR_8->os, "HW Workaround: fw version is below the minimum for this driver\n");
    VAR_8->workaround.fw_version_too_low = VAR_6;
    break;
   case 133:
    FUNC_2(VAR_8->os, "HW Workaround: SGLC misreported - chaining is enabled\n");
    VAR_8->workaround.sglc_misreported = VAR_6;
    break;
   case 139:
    FUNC_2(VAR_8->os, "HW Workaround: not SEND_FRAME capable - disabled\n");
    VAR_8->workaround.ignore_send_frame = VAR_6;
    break;
   }
  }
 }
}
