
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int is_in_link_training; } ;
struct TYPE_9__ {TYPE_1__* state_handlers; } ;
struct TYPE_8__ {int (* link_up_handler ) (TYPE_2__*,TYPE_3__*) ;} ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;
typedef TYPE_3__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;

void FUNC_1(
   SCIC_SDS_PORT_T *VAR_1,
   SCIC_SDS_PHY_T *VAR_2
)
{
   VAR_2->is_in_link_training = VAR_0;

   VAR_1->state_handlers->link_up_handler(VAR_1, VAR_2);
}
