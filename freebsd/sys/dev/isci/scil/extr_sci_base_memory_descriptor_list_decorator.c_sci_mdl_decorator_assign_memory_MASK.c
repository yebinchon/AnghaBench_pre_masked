
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U64 ;
typedef scalar_t__ U32 ;
struct TYPE_3__ {scalar_t__ constant_memory_attributes; int constant_memory_alignment; scalar_t__ constant_memory_size; int physical_address; void* virtual_address; } ;
typedef TYPE_1__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int SCI_PHYSICAL_ADDRESS ;
typedef int SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T ;
typedef int POINTER_UINT ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(
   SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T VAR_0,
   U32 VAR_1,
   POINTER_UINT VAR_2,
   SCI_PHYSICAL_ADDRESS VAR_3
)
{
   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T * VAR_4;
   U64 VAR_5;

   VAR_5
      = ((U64) FUNC_1(VAR_3))
        | (((U64) FUNC_2(VAR_3)) << 32);

   FUNC_3(VAR_0);
   VAR_4 = FUNC_4(VAR_0);
   while (VAR_4 != ((void*)0))
   {



      if ( (VAR_4->constant_memory_attributes == VAR_1)
         || (VAR_1 == 0) )
      {

         if ((VAR_2 % VAR_4->constant_memory_alignment) != 0)
         {
            VAR_2
               += (VAR_4->constant_memory_alignment -
                   (VAR_2 % VAR_4->constant_memory_alignment));
         }


         if ((VAR_5 % VAR_4->constant_memory_alignment) != 0)
         {
            VAR_5
               += (VAR_4->constant_memory_alignment -
                   (VAR_5 % VAR_4->constant_memory_alignment));
         }


         VAR_4->virtual_address = (void *)VAR_2;
         FUNC_0(
            VAR_4->physical_address,
            (U32) (VAR_5 >> 32),
            (U32) (VAR_5 & 0xFFFFFFFF)
         );

         VAR_2 += VAR_4->constant_memory_size;
         VAR_5 += VAR_4->constant_memory_size;
      }


      FUNC_5(VAR_0);
      VAR_4 = FUNC_4 (VAR_0);
   }
}
