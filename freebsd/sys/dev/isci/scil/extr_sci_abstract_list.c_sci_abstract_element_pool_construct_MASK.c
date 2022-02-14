
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int max_elements; struct TYPE_8__* elements; } ;
typedef TYPE_1__ SCI_ABSTRACT_ELEMENT_T ;
typedef TYPE_1__ SCI_ABSTRACT_ELEMENT_POOL_T ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

void FUNC_2(
   SCI_ABSTRACT_ELEMENT_POOL_T * VAR_0,
   SCI_ABSTRACT_ELEMENT_T * VAR_1,
   int VAR_2
)
{
   int VAR_3;

   FUNC_0(VAR_0, 0, sizeof(SCI_ABSTRACT_ELEMENT_POOL_T));
   FUNC_0(VAR_1, 0, sizeof(SCI_ABSTRACT_ELEMENT_T) * VAR_2);

   VAR_0->elements = VAR_1;
   VAR_0->max_elements = VAR_2;



   for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
   {
      FUNC_1(VAR_0, &(VAR_1[VAR_3]));
   }
}
