
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_3__ {scalar_t__ constant_memory_attributes; scalar_t__ constant_memory_alignment; scalar_t__ constant_memory_size; } ;
typedef TYPE_1__ SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

U32 FUNC_3(
   SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T VAR_0,
   U32 VAR_1
)
{
   U32 VAR_2 = 0;
   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T * VAR_3;

   FUNC_0(VAR_0);
   VAR_3 = FUNC_1(VAR_0);
   while (VAR_3 != ((void*)0))
   {
      if ( (VAR_3->constant_memory_attributes == VAR_1)
         || (VAR_1 == 0) )
         VAR_2 += (VAR_3->constant_memory_size + VAR_3->constant_memory_alignment);

      FUNC_2(VAR_0);
      VAR_3 = FUNC_1(VAR_0);
   }

   return VAR_2;
}
