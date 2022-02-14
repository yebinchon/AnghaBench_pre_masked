
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int high; int low; } ;
struct TYPE_8__ {TYPE_1__ device_address; } ;
struct TYPE_7__ {int high; int low; } ;
typedef TYPE_2__ SCI_SAS_ADDRESS_T ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_3__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_3,
   SCI_SAS_ADDRESS_T * VAR_4
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_5;
   VAR_5 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_get_sas_address(0x%x, 0x%x) enter\n",
      VAR_3, VAR_4
   ));

   VAR_4->low = VAR_5->device_address.low;
   VAR_4->high = VAR_5->device_address.high;
}
