
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
typedef scalar_t__ U16 ;
struct TYPE_3__ {int constant_memory_alignment; int constant_memory_size; scalar_t__ constant_memory_attributes; int * virtual_address; int physical_address; } ;
typedef TYPE_1__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

BOOL FUNC_1(
   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T * VAR_2,
   U32 VAR_3,
   U32 VAR_4,
   U16 VAR_5
)
{

   U32 VAR_6 = FUNC_0(VAR_2->physical_address);

   if (
         ((VAR_6 & (VAR_3 - 1)) != 0)
      || (VAR_2->constant_memory_alignment != VAR_3)
      || (VAR_2->constant_memory_size != VAR_4)
      || (VAR_2->virtual_address == ((void*)0))
      || (VAR_2->constant_memory_attributes != VAR_5)
      )
   {
      return VAR_0;
   }

   return VAR_1;
}
