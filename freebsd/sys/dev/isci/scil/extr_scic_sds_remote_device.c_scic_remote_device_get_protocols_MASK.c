
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int all; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
struct TYPE_12__ {TYPE_3__ target_protocols; } ;
struct TYPE_8__ {int all; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_4__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_5__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;

void FUNC_2(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_3,
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T * VAR_4
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_5 = (SCIC_SDS_REMOTE_DEVICE_T *)
                                            VAR_3;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_1 |
      VAR_2 |
      VAR_0,
      "scic_remote_device_get_protocols(0x%x) enter\n",
      VAR_3
   ));

   VAR_4->u.all = VAR_5->target_protocols.u.all;
}
