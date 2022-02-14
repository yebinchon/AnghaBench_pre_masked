
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_3__ {size_t max_controller_count; int * controllers; } ;
typedef TYPE_1__ SCIC_SDS_LIBRARY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;



U8 FUNC_0(
   SCIC_SDS_LIBRARY_T * VAR_0,
   SCIC_SDS_CONTROLLER_T * VAR_1
)
{
   U8 VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->max_controller_count; VAR_2++)
   {
      if (VAR_1 == &VAR_0->controllers[VAR_2])
      {
         return VAR_2;
      }
   }

   return 0xff;
}
