
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * free_pool; } ;
typedef TYPE_1__ SCI_ABSTRACT_LIST_T ;
typedef int SCI_ABSTRACT_ELEMENT_POOL_T ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(
   SCI_ABSTRACT_LIST_T * VAR_0,
   SCI_ABSTRACT_ELEMENT_POOL_T * VAR_1
)
{
   FUNC_0(VAR_0, 0, sizeof(SCI_ABSTRACT_LIST_T));
   VAR_0->free_pool = VAR_1;
}
