
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {scalar_t__ attached_stp_target; } ;
struct TYPE_7__ {TYPE_1__ bits; } ;
struct TYPE_8__ {TYPE_2__ u; } ;
struct TYPE_9__ {TYPE_3__ target_protocols; } ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_4__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;

U32 FUNC_2(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_5
)
{
   SCIC_SDS_REMOTE_DEVICE_T *VAR_6;
   VAR_6 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_5;

   FUNC_0((
      FUNC_1(VAR_6),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_get_suggested_reset_timeout(0x%x) enter\n",
      VAR_5
   ));

   if (VAR_6->target_protocols.u.bits.attached_stp_target)
   {
      return VAR_4;
   }

   return VAR_3;
}
