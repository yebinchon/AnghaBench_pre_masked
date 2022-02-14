
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_11__ {int physical_port_index; TYPE_4__* owning_controller; int ** phy_table; } ;
struct TYPE_8__ {TYPE_1__* phys; } ;
struct TYPE_9__ {TYPE_2__ sds1; } ;
struct TYPE_10__ {TYPE_3__ user_parameters; } ;
struct TYPE_7__ {scalar_t__ max_speed_generation; } ;
typedef TYPE_5__ SCIC_SDS_PORT_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

BOOL FUNC_0(
   SCIC_SDS_PORT_T *VAR_3,
   U32 VAR_4
)
{

   U32 VAR_5 = VAR_1;
   U32 VAR_6;

   if ((VAR_3->physical_port_index == 1) && (VAR_4 != 1))
   {
      return VAR_0;
   }

   if (VAR_3->physical_port_index == 3 && VAR_4 != 3)
   {
      return VAR_0;
   }

   if (
          (VAR_3->physical_port_index == 2)
       && ((VAR_4 == 0) || (VAR_4 == 1))
      )
   {
      return VAR_0;
   }

   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
      if ( (VAR_3->phy_table[VAR_6] != ((void*)0))
         && (VAR_6 != VAR_4) )
      {
         VAR_5 = VAR_6;
      }
   }



   if (
         (VAR_5 < VAR_1)
      && (VAR_3->owning_controller->user_parameters.sds1.phys[
             VAR_4].max_speed_generation !=
          VAR_3->owning_controller->user_parameters.sds1.phys[
             VAR_5].max_speed_generation)
      )
      return VAR_0;

   return VAR_2;
}
