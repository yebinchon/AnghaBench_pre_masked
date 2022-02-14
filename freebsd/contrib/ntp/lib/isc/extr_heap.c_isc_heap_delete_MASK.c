
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int last; int ** array; scalar_t__ (* compare ) (void*,int *) ;} ;
typedef TYPE_1__ isc_heap_t ;
typedef scalar_t__ isc_boolean_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned int,int *) ;
 int FUNC_3 (TYPE_1__*,unsigned int,int *) ;
 scalar_t__ FUNC_4 (void*,int *) ;

void
FUNC_5(isc_heap_t *VAR_0, unsigned int VAR_1) {
 void *VAR_2;
 isc_boolean_t VAR_3;

 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_1 >= 1 && VAR_1 <= VAR_0->last);

 if (VAR_1 == VAR_0->last) {
  VAR_0->array[VAR_0->last] = ((void*)0);
  VAR_0->last--;
 } else {
  VAR_2 = VAR_0->array[VAR_0->last];
  VAR_0->array[VAR_0->last] = ((void*)0);
  VAR_0->last--;

  VAR_3 = VAR_0->compare(VAR_2, VAR_0->array[VAR_1]);
  VAR_0->array[VAR_1] = VAR_2;
  if (VAR_3)
   FUNC_2(VAR_0, VAR_1, VAR_0->array[VAR_1]);
  else
   FUNC_3(VAR_0, VAR_1, VAR_0->array[VAR_1]);
 }
}
