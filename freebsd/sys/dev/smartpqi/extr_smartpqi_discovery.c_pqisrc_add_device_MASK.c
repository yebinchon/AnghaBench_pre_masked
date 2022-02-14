
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
struct TYPE_4__ {int invalid; scalar_t__ expose_device; int volume_status; int volume_offline; int is_physical_device; int lun; int target; int bus; int model; int vendor; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ,int ,scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(pqisrc_softstate_t *VAR_1,
 pqi_scsi_dev_t *VAR_2)
{
 FUNC_0("IN\n");
 FUNC_1("vendor: %s model: %s bus:%d target:%d lun:%d is_physical_device:0x%x expose_device:0x%x volume_offline 0x%x volume_status 0x%x \n",
  VAR_2->vendor, VAR_2->model, VAR_2->bus, VAR_2->target, VAR_2->lun, VAR_2->is_physical_device, VAR_2->expose_device, VAR_2->volume_offline, VAR_2->volume_status);

 VAR_2->invalid = 0;

 if(VAR_2->expose_device) {

  FUNC_2(VAR_1,VAR_2);
 }
 FUNC_0("OUT\n");
 return VAR_0;

}
