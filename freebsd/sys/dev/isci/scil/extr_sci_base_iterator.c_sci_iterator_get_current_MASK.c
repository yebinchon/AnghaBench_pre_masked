
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * current; } ;
typedef scalar_t__ SCI_ITERATOR_HANDLE_T ;
typedef TYPE_1__ SCI_BASE_ITERATOR_T ;


 void* FUNC_0 (int *) ;

void * FUNC_1(
   SCI_ITERATOR_HANDLE_T VAR_0
)
{
   SCI_BASE_ITERATOR_T * VAR_1 = (SCI_BASE_ITERATOR_T *)VAR_0;

   void *VAR_2 = ((void*)0);

   if (VAR_1->current != ((void*)0))
   {
      VAR_2 = FUNC_0(VAR_1->current);
   }

   return VAR_2;
}
