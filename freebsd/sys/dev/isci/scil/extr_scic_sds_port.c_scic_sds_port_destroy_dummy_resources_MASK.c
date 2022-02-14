
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int available_remote_nodes; } ;
struct TYPE_4__ {scalar_t__ reserved_tci; scalar_t__ reserved_rni; TYPE_3__* owning_controller; } ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *,int,scalar_t__) ;

__attribute__((used)) static
void FUNC_2(
   SCIC_SDS_PORT_T * VAR_1
)
{
   if (VAR_1->reserved_tci != VAR_0)
   {
      FUNC_0(
         VAR_1->owning_controller, VAR_1->reserved_tci
      );
   }

   if (VAR_1->reserved_rni != VAR_0)
   {
      FUNC_1(
         &VAR_1->owning_controller->available_remote_nodes, 1, VAR_1->reserved_rni
      );
   }

   VAR_1->reserved_rni = VAR_0;
   VAR_1->reserved_tci = VAR_0;
}
