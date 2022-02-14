
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_9__ {TYPE_3__* domains; } ;
struct TYPE_6__ {scalar_t__ current_state_id; } ;
struct TYPE_7__ {TYPE_1__ state_machine; } ;
struct TYPE_8__ {TYPE_2__ parent; } ;
typedef TYPE_4__ SCIF_SAS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
BOOL FUNC_0(
   SCIF_SAS_CONTROLLER_T * VAR_4
)
{
   U8 VAR_5;

   for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      if(VAR_4->domains[VAR_5].parent.state_machine.current_state_id ==
            VAR_1)
         return VAR_3;
   }

   return VAR_0;
}
