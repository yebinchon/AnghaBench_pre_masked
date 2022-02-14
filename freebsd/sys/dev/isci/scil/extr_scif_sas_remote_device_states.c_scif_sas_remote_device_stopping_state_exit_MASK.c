
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* domain; } ;
struct TYPE_3__ {int device_start_count; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;



__attribute__((used)) static
void FUNC_0(
   SCI_BASE_OBJECT_T *VAR_0
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_1 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_0;


   VAR_1->domain->device_start_count--;
}
