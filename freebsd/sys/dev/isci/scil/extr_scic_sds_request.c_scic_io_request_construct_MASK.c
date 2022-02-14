
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_13__ {int task_context_buffer; int command_buffer; } ;
struct TYPE_10__ {scalar_t__ attached_smp_target; scalar_t__ attached_stp_target; scalar_t__ attached_ssp_target; } ;
struct TYPE_11__ {TYPE_1__ bits; } ;
struct TYPE_12__ {TYPE_2__ u; } ;
typedef int SMP_REQUEST_T ;
typedef TYPE_3__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef void* SCI_IO_REQUEST_HANDLE_T ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef int SATA_FIS_REG_H2D_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,TYPE_3__*) ;
 int FUNC_5 (int *,int *,int ,void*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_8 ;

SCI_STATUS FUNC_10(
   SCI_CONTROLLER_HANDLE_T VAR_9,
   SCI_REMOTE_DEVICE_HANDLE_T VAR_10,
   U16 VAR_11,
   void * VAR_12,
   void * VAR_13,
   SCI_IO_REQUEST_HANDLE_T * VAR_14
)
{
   SCI_STATUS VAR_15 = VAR_6;
   SCIC_SDS_REQUEST_T * VAR_16;
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_17;

   VAR_16 = (SCIC_SDS_REQUEST_T * )VAR_13;

   FUNC_0((
      FUNC_3(VAR_9),
      (VAR_1
      |VAR_0
      |VAR_2),
      "scic_io_request_construct(0x%x, 0x%x, 0x02x, 0x%x, 0x%x, 0x%x) enter\n",
      VAR_9, VAR_10,
      VAR_11, VAR_12,
      VAR_16, VAR_14
   ));


   FUNC_5(
      (SCIC_SDS_CONTROLLER_T *)VAR_9,
      (SCIC_SDS_REMOTE_DEVICE_T *)VAR_10,
      VAR_11,
      VAR_12,
      VAR_16
   );

   if (
         FUNC_6((SCIC_SDS_REMOTE_DEVICE_T *)VAR_10)
      == VAR_3
      )
   {
      return VAR_4;
   }

   FUNC_4(VAR_10, &VAR_17);

   if (VAR_17.u.bits.attached_ssp_target)
   {
      FUNC_8(VAR_16);
   }
   else if (VAR_17.u.bits.attached_stp_target)
   {
      FUNC_9(VAR_16);
      FUNC_2(VAR_16->command_buffer, 0, sizeof(SATA_FIS_REG_H2D_T));
   }
   else if (VAR_17.u.bits.attached_smp_target)
   {
      FUNC_7(VAR_16);
      FUNC_2(VAR_16->command_buffer, 0, sizeof(SMP_REQUEST_T));
   }
   else
   {
      VAR_15 = VAR_5;
   }

   if (VAR_15 == VAR_6)
   {
      FUNC_2(
         VAR_16->task_context_buffer,
         0,
         FUNC_1(VAR_7, VAR_8)
      );
      *VAR_14 = VAR_13;
   }

   return VAR_15;
}
