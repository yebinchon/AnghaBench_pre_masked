
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_5__ {int (* complete_handler ) (int *) ;} ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__ SCIC_SDS_REQUEST_T ;


 int FUNC_0 (int *) ;

SCI_STATUS FUNC_1(
   SCIC_SDS_REQUEST_T *VAR_0
)
{
   return VAR_0->state_handlers->parent.complete_handler(&VAR_0->parent);
}
