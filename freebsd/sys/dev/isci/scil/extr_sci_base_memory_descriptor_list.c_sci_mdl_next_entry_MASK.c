
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ next_index; scalar_t__ length; scalar_t__ next_mdl; } ;
typedef scalar_t__ SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T ;
typedef TYPE_1__ SCI_BASE_MEMORY_DESCRIPTOR_LIST_T ;


 scalar_t__ VAR_0 ;

void FUNC_0(
   SCI_MEMORY_DESCRIPTOR_LIST_HANDLE_T VAR_1
)
{
   SCI_BASE_MEMORY_DESCRIPTOR_LIST_T * VAR_2 = (SCI_BASE_MEMORY_DESCRIPTOR_LIST_T*) VAR_1;



   if (VAR_2->next_index < VAR_2->length)
      VAR_2->next_index++;
   else if (VAR_2->next_index == VAR_2->length)
   {


      if (VAR_2->next_mdl != VAR_0)
         FUNC_0(VAR_2->next_mdl);
   }
}
