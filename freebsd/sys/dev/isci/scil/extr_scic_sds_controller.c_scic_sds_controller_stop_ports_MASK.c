
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_10__ {size_t logical_port_entries; TYPE_2__* port_table; } ;
struct TYPE_9__ {scalar_t__ (* stop_handler ) (int *) ;} ;
struct TYPE_8__ {int logical_port_index; int parent; TYPE_1__* state_handlers; } ;
struct TYPE_7__ {TYPE_3__ parent; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_4__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_5
)
{
   U32 VAR_6;
   SCI_STATUS VAR_7;
   SCI_STATUS VAR_8;

   VAR_7 = VAR_4;

   for (VAR_6 = 0; VAR_6 < VAR_5->logical_port_entries; VAR_6++)
   {
      VAR_8 = VAR_5->port_table[VAR_6].
         state_handlers->parent.stop_handler(&VAR_5->port_table[VAR_6].parent);
      if (
            (VAR_8 != VAR_4)
         && (VAR_8 != VAR_3)
         )
      {
         VAR_7 = VAR_2;

         FUNC_0((
            FUNC_1(VAR_5),
            VAR_0 | VAR_1,
            "Controller stop operation failed to stop port %d because of status %d.\n",
            VAR_5->port_table[VAR_6].logical_port_index, VAR_8
         ));
      }
   }

   return VAR_7;
}
