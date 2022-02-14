
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int controller; } ;
struct TYPE_4__ {TYPE_2__* domain; } ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static
void FUNC_1(
   SCI_BASE_OBJECT_T *VAR_0
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_1 = (SCIF_SAS_REMOTE_DEVICE_T *)VAR_0;


   FUNC_0(
      VAR_1->domain->controller, VAR_1->domain, VAR_1
   );
}
