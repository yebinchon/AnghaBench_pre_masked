
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_4__ {size_t remote_node_entries; scalar_t__* device_table; } ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_5
)
{
   U32 VAR_6;
   SCI_STATUS VAR_7;
   SCI_STATUS VAR_8;

   VAR_7 = VAR_4;

   for (VAR_6 = 0; VAR_6 < VAR_5->remote_node_entries; VAR_6++)
   {
      if (VAR_5->device_table[VAR_6] != VAR_3)
      {

         VAR_8 = FUNC_2(VAR_5->device_table[VAR_6], 0);

         if (
                 (VAR_8 != VAR_4)
              && (VAR_8 != VAR_2)
            )
         {
            FUNC_0((
               FUNC_1(VAR_5),
               VAR_0 | VAR_1,
               "Controller stop operation failed to stop device 0x%x because of status %d.\n",
               VAR_5->device_table[VAR_6], VAR_8
            ));
         }
      }
   }

   return VAR_7;
}
