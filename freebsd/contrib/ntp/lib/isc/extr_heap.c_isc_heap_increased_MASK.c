
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int last; int * array; } ;
typedef TYPE_1__ isc_heap_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned int,int ) ;

void
FUNC_3(isc_heap_t *VAR_0, unsigned int VAR_1) {
 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_1 >= 1 && VAR_1 <= VAR_0->last);

 FUNC_2(VAR_0, VAR_1, VAR_0->array[VAR_1]);
}
