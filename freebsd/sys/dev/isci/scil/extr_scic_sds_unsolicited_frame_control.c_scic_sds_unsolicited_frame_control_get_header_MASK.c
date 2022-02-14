
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
struct TYPE_10__ {TYPE_3__* array; } ;
struct TYPE_7__ {size_t count; } ;
struct TYPE_11__ {TYPE_4__ buffers; TYPE_1__ address_table; } ;
struct TYPE_9__ {TYPE_2__* header; } ;
struct TYPE_8__ {int data; } ;
typedef int SCI_STATUS ;
typedef TYPE_5__ SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T ;


 int VAR_0 ;
 int VAR_1 ;

SCI_STATUS FUNC_0(
   SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T *VAR_2,
   U32 VAR_3,
   void **VAR_4
)
{
   if (VAR_3 < VAR_2->address_table.count)
   {


      *VAR_4 = &VAR_2->buffers.array[VAR_3].header->data;

      return VAR_1;
   }

   return VAR_0;
}
