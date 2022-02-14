
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_7__ {int (* complete_io_handler ) (int *,int *) ;} ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;
typedef TYPE_4__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int *,int *) ;

SCI_STATUS FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_0,
   SCIC_SDS_REMOTE_DEVICE_T *VAR_1,
   SCIC_SDS_REQUEST_T *VAR_2
)
{
   return VAR_1->state_handlers->parent.complete_io_handler(
                                 &VAR_1->parent, &VAR_2->parent);
}
