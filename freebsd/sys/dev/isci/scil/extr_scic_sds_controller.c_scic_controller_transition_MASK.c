
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_8__ {scalar_t__ current_state_id; } ;
struct TYPE_9__ {TYPE_2__ state_machine; } ;
struct TYPE_10__ {int restrict_completions; TYPE_1__* port_table; TYPE_3__ parent; } ;
struct TYPE_7__ {scalar_t__ started_request_count; } ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_CONTROLLER_HANDLE_T ;
typedef TYPE_4__ SCIC_SDS_CONTROLLER_T ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

SCI_STATUS FUNC_6(
   SCI_CONTROLLER_HANDLE_T VAR_5,
   BOOL VAR_6
)
{
   SCI_STATUS VAR_7 = VAR_2;
   SCIC_SDS_CONTROLLER_T * VAR_8 = (SCIC_SDS_CONTROLLER_T*)VAR_5;
   U8 VAR_9;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0,
      "scic_controller_transition(0x%x) enter\n",
      VAR_5
   ));

   if (VAR_8->parent.state_machine.current_state_id
       == VAR_1)
   {


      for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
      {
         if (VAR_8->port_table[VAR_9].started_request_count != 0)
            return VAR_7;
      }

      FUNC_3(VAR_5);



      VAR_7 = FUNC_5(
                  VAR_8);
      if (VAR_7 == VAR_4)
      {
         FUNC_4(VAR_8);
         VAR_8->restrict_completions = VAR_6;
      }

      FUNC_2(VAR_5);
   }

   return VAR_7;
}
