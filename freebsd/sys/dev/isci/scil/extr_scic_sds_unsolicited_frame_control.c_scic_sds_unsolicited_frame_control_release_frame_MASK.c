
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_8__ {int count; int * array; } ;
struct TYPE_7__ {TYPE_1__* array; } ;
struct TYPE_9__ {int get; TYPE_3__ address_table; TYPE_2__ buffers; } ;
struct TYPE_6__ {scalar_t__ state; } ;
typedef TYPE_4__ SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T ;
typedef int BOOL ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (size_t,size_t,int,int) ;
 size_t FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

BOOL FUNC_5(
   SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T *VAR_5,
   U32 VAR_6
)
{
   U32 VAR_7;
   U32 VAR_8;

   VAR_7 = VAR_5->get & (VAR_5->address_table.count - 1);
   VAR_8 = VAR_5->get & VAR_5->address_table.count;




   while (
            (
               (FUNC_3(
                   VAR_5->address_table.array[VAR_7]) == 0)
            && (FUNC_4(
                   VAR_5->address_table.array[VAR_7]) == 0)
            )
         && (VAR_7 < VAR_5->address_table.count)
         )
   {
      VAR_7++;
   }



   FUNC_0(VAR_7 < VAR_5->address_table.count);

   if (VAR_6 < VAR_5->address_table.count)
   {
      VAR_5->buffers.array[VAR_6].state = VAR_4;



      if (VAR_7 == VAR_6)
      {
         while (
                  VAR_5->buffers.array[VAR_7].state
               == VAR_4
               )
         {
            VAR_5->buffers.array[VAR_7].state = VAR_3;

            FUNC_1(
               VAR_7,
               VAR_8,
               VAR_5->address_table.count - 1,
               VAR_5->address_table.count
            );
         }

         VAR_5->get =
                  (FUNC_2(VAR_0) | VAR_8 | VAR_7);

         return VAR_2;
      }
      else
      {


      }
   }

   return VAR_1;
}
