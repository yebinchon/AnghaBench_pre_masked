
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* suspend_handler ) (TYPE_2__*,int ) ;} ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (TYPE_2__*,int ) ;

SCI_STATUS FUNC_1(
   SCIC_SDS_REMOTE_DEVICE_T *VAR_0,
   U32 VAR_1
)
{
   return VAR_0->state_handlers->suspend_handler(VAR_0, VAR_1);
}
