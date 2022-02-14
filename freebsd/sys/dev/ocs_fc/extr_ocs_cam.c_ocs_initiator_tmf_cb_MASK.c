
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_scsi_io_status_e ;
struct TYPE_6__ {int * response_data; int response_data_length; } ;
typedef TYPE_1__ ocs_scsi_cmd_resp_t ;
struct TYPE_7__ {int ocs; } ;
typedef TYPE_2__ ocs_io_t ;
typedef int int32_t ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int32_t
FUNC_3(ocs_io_t *VAR_0, ocs_scsi_io_status_e VAR_1,
  ocs_scsi_cmd_resp_t *VAR_2, uint32_t VAR_3, void *VAR_4)
{
 int32_t VAR_5 = 0;

 switch (VAR_1) {
 case 129:
 case 128:
  break;
 case 130:
  if (VAR_2->response_data_length == 0) {
   FUNC_1(VAR_0->ocs, "check response without data?!?\n");
   VAR_5 = -1;
   break;
  }

  if (VAR_2->response_data[3] != 0) {
   FUNC_1(VAR_0->ocs, "TMF status %08x\n",
    FUNC_0(*((uint32_t *)VAR_2->response_data)));
   VAR_5 = -1;
   break;
  }
  break;
 default:
  FUNC_1(VAR_0->ocs, "status=%#x\n", VAR_1);
  VAR_5 = -1;
 }

 FUNC_2(VAR_0);

 return VAR_5;
}
