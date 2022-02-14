
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_6__ {int internal_io_timer; } ;
struct TYPE_4__ {scalar_t__ is_internal; } ;
struct TYPE_5__ {TYPE_1__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCI_BASE_CONTROLLER_T ;
typedef TYPE_2__ SCIF_SAS_IO_REQUEST_T ;
typedef TYPE_3__ SCIF_SAS_INTERNAL_IO_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int *,int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCI_BASE_CONTROLLER_T * VAR_4,
   SCI_BASE_REMOTE_DEVICE_T * VAR_5,
   SCI_BASE_REQUEST_T * VAR_6,
   U16 VAR_7
)
{
   SCI_STATUS VAR_8;
   SCIF_SAS_IO_REQUEST_T * VAR_9 = (SCIF_SAS_IO_REQUEST_T *)VAR_6;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0 | VAR_1,
      "scif_sas_controller_ready_start_high_priority_io_handler(0x%x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_4, VAR_5, VAR_6, VAR_7
   ));

   VAR_8 = FUNC_3(
               VAR_4, VAR_5, VAR_6, VAR_7);

   if (VAR_8 == VAR_3)
   {


      if (VAR_9->parent.is_internal)
      {
         SCIF_SAS_INTERNAL_IO_REQUEST_T * VAR_10 =
            (SCIF_SAS_INTERNAL_IO_REQUEST_T *)VAR_9;


         FUNC_2(
            (SCI_CONTROLLER_HANDLE_T)VAR_4,
             VAR_10->internal_io_timer,
             VAR_2
         );
      }
   }
   else
   {





      FUNC_0((
         FUNC_1(VAR_4),
         VAR_0 | VAR_1,
         "scif_controller_start_high_priority_io(0x%x, 0x%x), starting io failed\n",
         VAR_4, VAR_9
      ));
   }

   return VAR_8;
}
