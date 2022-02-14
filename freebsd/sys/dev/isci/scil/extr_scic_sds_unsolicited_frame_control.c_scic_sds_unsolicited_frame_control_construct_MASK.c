
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int U8 ;
typedef int U32 ;
struct TYPE_11__ {int count; void** array; void* physical_address; } ;
struct TYPE_10__ {int * array; void* physical_address; } ;
struct TYPE_9__ {int count; } ;
struct TYPE_13__ {scalar_t__ get; TYPE_3__ address_table; TYPE_2__ headers; TYPE_1__ buffers; } ;
struct TYPE_12__ {scalar_t__ virtual_address; void* physical_address; } ;
typedef int SCU_UNSOLICITED_FRAME_HEADER_T ;
typedef TYPE_4__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef void* SCI_PHYSICAL_ADDRESS ;
typedef TYPE_5__ SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef int POINTER_UINT ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (TYPE_5__*,void*,int ,int,int) ;

void FUNC_3(
   SCIC_SDS_UNSOLICITED_FRAME_CONTROL_T *VAR_1,
   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T *VAR_2,
   SCIC_SDS_CONTROLLER_T *VAR_3
)
{
   U32 VAR_4;
   U32 VAR_5;
   U32 VAR_6;
   U32 VAR_7;
   U32 VAR_8;
   SCI_PHYSICAL_ADDRESS VAR_9;



   VAR_6 = VAR_1->buffers.count
                              * VAR_0;
   VAR_4 = VAR_1->address_table.count
                              - VAR_1->buffers.count;
   VAR_5 = VAR_1->buffers.count;
   VAR_7 = VAR_4
                              * sizeof(SCU_UNSOLICITED_FRAME_HEADER_T);
   VAR_8 = VAR_5
                              * sizeof(SCU_UNSOLICITED_FRAME_HEADER_T);




   VAR_9 = VAR_2->physical_address;
   VAR_1->headers.physical_address = VAR_9;
   FUNC_0(
      VAR_1->headers.physical_address, VAR_6);
   FUNC_1(
      VAR_1->headers.physical_address, VAR_7);

   VAR_1->headers.array = (SCU_UNSOLICITED_FRAME_HEADER_T*)
      ((U8 *)VAR_2->virtual_address + VAR_6 - VAR_7);






   VAR_1->address_table.physical_address = VAR_9;
   FUNC_0(
      VAR_1->address_table.physical_address, VAR_6);
   FUNC_0(
      VAR_1->address_table.physical_address, VAR_8);

   VAR_1->address_table.array = (SCI_PHYSICAL_ADDRESS*)
      ((U8 *)VAR_2->virtual_address + VAR_6 + VAR_8);

   VAR_1->get = 0;
   FUNC_2(
      VAR_1,
      VAR_9,
      (POINTER_UINT) VAR_2->virtual_address,
      VAR_4,
      VAR_5
   );
}
