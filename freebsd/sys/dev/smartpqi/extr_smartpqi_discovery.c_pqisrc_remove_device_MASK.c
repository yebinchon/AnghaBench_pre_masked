
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
struct TYPE_4__ {int invalid; int volume_status; int volume_offline; int expose_device; int is_physical_device; int lun; int target; int bus; int model; int vendor; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(pqisrc_softstate_t *VAR_0,
 pqi_scsi_dev_t *VAR_1)
{
 FUNC_1("IN\n");
 FUNC_0("vendor: %s model: %s bus:%d target:%d lun:%d is_physical_device:0x%x expose_device:0x%x volume_offline 0x%x volume_status 0x%x \n",
  VAR_1->vendor, VAR_1->model, VAR_1->bus, VAR_1->target, VAR_1->lun, VAR_1->is_physical_device, VAR_1->expose_device, VAR_1->volume_offline, VAR_1->volume_status);


 VAR_1->invalid = 1;
 FUNC_2(VAR_0,VAR_1);
 FUNC_1("OUT\n");
}
