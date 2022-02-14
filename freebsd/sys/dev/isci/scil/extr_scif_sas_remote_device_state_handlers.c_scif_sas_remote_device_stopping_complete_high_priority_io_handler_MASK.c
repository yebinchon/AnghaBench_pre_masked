
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* domain; int request_count; } ;
struct TYPE_5__ {scalar_t__ is_internal; } ;
struct TYPE_4__ {int controller; } ;
typedef int SCI_STATUS ;
typedef int SCI_IO_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIF_SAS_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_REMOTE_DEVICE_T ;
typedef int SCIF_SAS_INTERNAL_IO_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5,
   void * VAR_6,
   SCI_IO_STATUS VAR_7
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_8 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                          VAR_4;
   SCIF_SAS_REQUEST_T * VAR_9 = (SCIF_SAS_REQUEST_T *) VAR_5;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_1 | VAR_0,
      "scif_sas_remote_device_stopping_complete_high_priority_io_handler(0x%x,0x%x,0x%x) enter\n",
      VAR_4, VAR_5, VAR_6
   ));

   VAR_8->request_count--;

   if (VAR_9->is_internal == VAR_3)
   {
      FUNC_2(
         VAR_8->domain->controller,
         (SCIF_SAS_INTERNAL_IO_REQUEST_T *) VAR_5,
         VAR_2
      );
   }

   return VAR_2;
}
