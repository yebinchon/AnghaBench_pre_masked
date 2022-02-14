
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
typedef size_t U16 ;
struct TYPE_3__ {int available_remote_nodes; int ** device_table; } ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,size_t) ;

void FUNC_2(
   SCIC_SDS_CONTROLLER_T * VAR_1,
   SCIC_SDS_REMOTE_DEVICE_T * VAR_2,
   U16 VAR_3
)
{
   U32 VAR_4 = FUNC_0(VAR_2);

   if (VAR_1->device_table[VAR_3] == VAR_2)
   {
      VAR_1->device_table[VAR_3] = VAR_0;

      FUNC_1(
         &VAR_1->available_remote_nodes, VAR_4, VAR_3
      );
   }
}
