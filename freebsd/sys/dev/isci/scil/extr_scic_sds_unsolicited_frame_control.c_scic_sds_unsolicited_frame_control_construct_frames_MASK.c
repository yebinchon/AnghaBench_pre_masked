
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_9__ {int * array; } ;
struct TYPE_8__ {int * array; } ;
struct TYPE_7__ {TYPE_4__* array; } ;
struct TYPE_11__ {TYPE_3__ headers; TYPE_2__ address_table; TYPE_1__ buffers; } ;
struct TYPE_10__ {void* state; int * header; int * buffer; } ;
typedef int SCI_PHYSICAL_ADDRESS ;
typedef TYPE_4__ SCIC_SDS_UNSOLICITED_FRAME_T ;
typedef TYPE_5__ SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T ;
typedef scalar_t__ POINTER_UINT ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static
void FUNC_2(
   SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T *VAR_2,
   SCI_PHYSICAL_ADDRESS VAR_3,
   POINTER_UINT VAR_4,
   U32 VAR_5,
   U32 VAR_6
)
{
   U32 VAR_7;
   SCIC_SDS_UNSOLICITED_FRAME_T *VAR_8;



   for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
   {
      VAR_8 = &VAR_2->buffers.array[VAR_7];

      FUNC_0(
         VAR_2->address_table.array[VAR_7], 0, 0
      );
      VAR_8->buffer = ((void*)0);
      VAR_8->header = &VAR_2->headers.array[VAR_7];
      VAR_8->state = VAR_1;
   }



   for (VAR_7 = VAR_5;
        VAR_7 < VAR_5 + VAR_6;
        VAR_7++)
   {
      VAR_8 = &VAR_2->buffers.array[VAR_7];

      VAR_2->address_table.array[VAR_7] = VAR_3;

      VAR_8->buffer = (void*) VAR_4;
      VAR_8->header = &VAR_2->headers.array[VAR_7];
      VAR_8->state = VAR_1;



      VAR_4 += VAR_0;
      FUNC_1(
         VAR_3, VAR_0
      );
   }
}
