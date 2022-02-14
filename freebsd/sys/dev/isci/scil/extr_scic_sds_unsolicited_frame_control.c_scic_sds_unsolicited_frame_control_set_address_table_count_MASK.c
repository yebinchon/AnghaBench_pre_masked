
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; } ;
struct TYPE_5__ {int count; } ;
struct TYPE_7__ {TYPE_2__ address_table; TYPE_1__ buffers; } ;
typedef TYPE_3__ SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(
   SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T *VAR_2
)
{
   VAR_2->address_table.count = VAR_1;
   while (
            (VAR_2->address_table.count < VAR_2->buffers.count)
         && (VAR_2->address_table.count < VAR_0)
         )
   {
      VAR_2->address_table.count <<= 1;
   }
}
