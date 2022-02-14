
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* start_io_handler ) (TYPE_2__*,int *,int *) ;} ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 int FUNC_0 (TYPE_2__*,int *,int *) ;

SCI_STATUS FUNC_1(
   SCIC_SDS_PORT_T *VAR_0,
   SCIC_SDS_REMOTE_DEVICE_T *VAR_1,
   SCIC_SDS_REQUEST_T *VAR_2
)
{
   return VAR_0->state_handlers->start_io_handler(
                                       VAR_0, VAR_1, VAR_2);
}
