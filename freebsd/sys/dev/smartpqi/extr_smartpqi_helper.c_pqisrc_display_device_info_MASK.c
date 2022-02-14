
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
struct TYPE_3__ {int raid_level; int queue_depth; scalar_t__ expose_device; scalar_t__ offload_enabled_pending; scalar_t__ offload_config; int model; int vendor; int lun; int target; int bus; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,char*,int ,int ,int ,int ,int ,int ,char,char,char,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(pqisrc_softstate_t *VAR_0,
 char *VAR_1, pqi_scsi_dev_t *VAR_2)
{
 FUNC_0( "%s scsi BTL %d:%d:%d:  %.8s %.16s %-12s SSDSmartPathCap%c En%c Exp%c qd=%d\n",
  VAR_1,
  VAR_2->bus,
  VAR_2->target,
  VAR_2->lun,
  VAR_2->vendor,
  VAR_2->model,
  FUNC_1(VAR_2->raid_level),
  VAR_2->offload_config ? '+' : '-',
  VAR_2->offload_enabled_pending ? '+' : '-',
  VAR_2->expose_device ? '+' : '-',
  VAR_2->queue_depth);
 FUNC_1(VAR_2->raid_level);
}
