
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * list; } ;
typedef scalar_t__ SCI_ITERATOR_HANDLE_T ;
typedef TYPE_1__ SCI_BASE_ITERATOR_T ;
typedef int SCI_ABSTRACT_LIST_T ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(
   SCI_ITERATOR_HANDLE_T VAR_0,
   SCI_ABSTRACT_LIST_T * VAR_1
)
{
    SCI_BASE_ITERATOR_T * VAR_2 = (SCI_BASE_ITERATOR_T *) VAR_0;

    FUNC_0(VAR_2, 0, sizeof(SCI_BASE_ITERATOR_T));
    VAR_2->list = VAR_1;
    FUNC_1(VAR_2);
}
