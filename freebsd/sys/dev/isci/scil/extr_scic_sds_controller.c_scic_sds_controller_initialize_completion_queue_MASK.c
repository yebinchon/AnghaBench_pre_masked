
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_6__ {size_t completion_queue_get; size_t completion_queue_entries; int* completion_queue; scalar_t__ completion_event_entries; } ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (TYPE_1__*,size_t) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,size_t) ;
 size_t FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*,size_t) ;

void FUNC_8(
   SCIC_SDS_CONTROLLER_T *VAR_4
)
{
   U32 VAR_5;
   U32 VAR_6;
   U32 VAR_7;
   U32 VAR_8;

   VAR_4->completion_queue_get = 0;

   VAR_6 = (
        FUNC_1(VAR_4->completion_queue_entries - 1)
      | FUNC_0(VAR_4->completion_event_entries - 1)
   );

   FUNC_2(VAR_4, VAR_6);


   VAR_7 = (
        (FUNC_4(VAR_3, 0))
      | (FUNC_4(VAR_2, 0))
      | (FUNC_3(VAR_0))
      | (FUNC_3(VAR_1))
   );

   FUNC_5(VAR_4, VAR_7);

   VAR_4->completion_queue_get = VAR_7;


   VAR_8 = (
        (FUNC_6(VAR_3, 0))
      | (FUNC_6(VAR_2, 0))
   );

   FUNC_7(VAR_4, VAR_8);


   for (VAR_5 = 0; VAR_5 < VAR_4->completion_queue_entries; VAR_5++)
   {



      VAR_4->completion_queue[VAR_5] = 0x80000000;
   }
}
