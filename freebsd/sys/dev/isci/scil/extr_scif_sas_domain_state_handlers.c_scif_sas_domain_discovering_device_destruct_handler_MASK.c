
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int remote_device_list; } ;
struct TYPE_5__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCI_BASE_DOMAIN_T ;
typedef TYPE_2__ SCIF_SAS_DOMAIN_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_DOMAIN_T * VAR_2,
   SCI_BASE_REMOTE_DEVICE_T * VAR_3
)
{
   SCIF_SAS_DOMAIN_T * VAR_4 = (SCIF_SAS_DOMAIN_T *)VAR_2;

   FUNC_0((
      FUNC_2(VAR_2),
      VAR_0,
      "Domain:0x%x Device:0x%x State:0x%x device destruct in domain DISCOVERING state\n",
      VAR_2, VAR_3,
      FUNC_3(&VAR_2->state_machine)
   ));


   FUNC_1(
      &(VAR_4->remote_device_list),
      VAR_3
   );

   return VAR_1;
}
