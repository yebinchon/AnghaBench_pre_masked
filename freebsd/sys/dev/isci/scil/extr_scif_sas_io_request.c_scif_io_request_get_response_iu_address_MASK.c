
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int core_object; } ;
struct TYPE_4__ {TYPE_1__ parent; } ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_2__ SCIF_SAS_IO_REQUEST_T ;


 void* FUNC_0 (int ) ;

void * FUNC_1(
   SCI_IO_REQUEST_HANDLE_T VAR_0
)
{
   SCIF_SAS_IO_REQUEST_T * VAR_1 = (SCIF_SAS_IO_REQUEST_T*)VAR_0;

   return (FUNC_0(VAR_1->parent.core_object ));
}
