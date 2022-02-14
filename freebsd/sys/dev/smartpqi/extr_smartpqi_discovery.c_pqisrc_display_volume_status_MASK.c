
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
struct TYPE_3__ {int volume_status; int lun; int target; int bus; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,int ,int ,int ,char*) ;
 int FUNC_1 (char*) ;
__attribute__((used)) static void FUNC_2(pqisrc_softstate_t *VAR_0,
 pqi_scsi_dev_t *VAR_1)
{
 char *VAR_2;

 FUNC_1("IN\n");
 switch (VAR_1->volume_status) {
 case 137:
  VAR_2 = "Volume is online.";
  break;
 case 129:
  VAR_2 = "Volume is undergoing background erase process.";
  break;
 case 138:
  VAR_2 = "Volume is waiting for transforming volume.";
  break;
 case 128:
  VAR_2 = "Volume is undergoing rapid parity initialization process.";
  break;
 case 134:
  VAR_2 = "Volume is queued for rapid parity initialization process.";
  break;
 case 139:
  VAR_2 = "Volume is encrypted and cannot be accessed because key is not present.";
  break;
 case 133:
  VAR_2 = "Volume is not encrypted and cannot be accessed because controller is in encryption-only mode.";
  break;
 case 131:
  VAR_2 = "Volume is undergoing encryption process.";
  break;
 case 130:
  VAR_2 = "Volume is undergoing encryption re-keying process.";
  break;
 case 140:
  VAR_2 = "Volume is encrypted and cannot be accessed because controller does not have encryption enabled.";
  break;
 case 136:
  VAR_2 = "Volume is pending migration to encrypted state, but process has not started.";
  break;
 case 135:
  VAR_2 = "Volume is encrypted and is pending encryption rekeying.";
  break;
 case 132:
  VAR_2 = "Volume status is not available through vital product data pages.";
  break;
 default:
  VAR_2 = "Volume is in an unknown state.";
  break;
 }

 FUNC_0("scsi BTL %d:%d:%d %s\n",
  VAR_1->bus, VAR_1->target, VAR_1->lun, VAR_2);
 FUNC_1("OUT\n");
}
