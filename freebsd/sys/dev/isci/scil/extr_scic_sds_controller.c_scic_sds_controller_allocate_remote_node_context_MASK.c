
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
typedef size_t U16 ;
struct TYPE_3__ {int ** device_table; int available_remote_nodes; } ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,int ) ;

SCI_STATUS FUNC_2(
   SCIC_SDS_CONTROLLER_T * VAR_3,
   SCIC_SDS_REMOTE_DEVICE_T * VAR_4,
   U16 * VAR_5
)
{
   U16 VAR_6;
   U32 VAR_7 = FUNC_0(VAR_4);

   VAR_6 = FUNC_1(
                  &VAR_3->available_remote_nodes, VAR_7
              );

   if (VAR_6 != VAR_0)
   {
      VAR_3->device_table[VAR_6] = VAR_4;

      *VAR_5 = VAR_6;

      return VAR_2;
   }

   return VAR_1;
}
