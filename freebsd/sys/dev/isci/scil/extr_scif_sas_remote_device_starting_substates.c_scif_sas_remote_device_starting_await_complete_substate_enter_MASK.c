
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* domain; } ;
struct TYPE_4__ {int device_start_count; int device_start_in_progress_count; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_2__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static
void FUNC_1(
   SCI_BASE_OBJECT_T *VAR_2
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_2;

   FUNC_0(
      VAR_3,
      VAR_1,
      VAR_0
   );

   VAR_3->domain->device_start_in_progress_count++;
   VAR_3->domain->device_start_count++;
}
