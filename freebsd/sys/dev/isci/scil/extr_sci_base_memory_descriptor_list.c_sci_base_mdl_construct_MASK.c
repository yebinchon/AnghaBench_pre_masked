
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int next_mdl; scalar_t__ next_index; int * mde_array; int length; } ;
typedef int SCI_PHYSICAL_MEMORY_DESCRIPTOR_T ;
typedef int SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T ;
typedef TYPE_1__ SCI_BASE_MEMORY_DESCRIPTOR_LIST_T ;



void FUNC_0(
   SCI_BASE_MEMORY_DESCRIPTOR_LIST_T * VAR_0,
   SCI_PHYSICAL_MEMORY_DESCRIPTOR_T * VAR_1,
   U32 VAR_2,
   SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T VAR_3
)
{
   VAR_0->length = VAR_2;
   VAR_0->mde_array = VAR_1;
   VAR_0->next_index = 0;
   VAR_0->next_mdl = VAR_3;
}
