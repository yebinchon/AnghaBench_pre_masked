
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_6__ {int last; unsigned int size; } ;
typedef TYPE_1__ isc_heap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned int,void*) ;
 int FUNC_4 (TYPE_1__*) ;

isc_result_t
FUNC_5(isc_heap_t *VAR_2, void *VAR_3) {
 unsigned int VAR_4;

 FUNC_0(FUNC_2(VAR_2));

 VAR_4 = VAR_2->last + 1;
 FUNC_1(VAR_4 > 0);
 if (VAR_4 >= VAR_2->size && !FUNC_4(VAR_2))
  return (VAR_0);
 VAR_2->last = VAR_4;

 FUNC_3(VAR_2, VAR_4, VAR_3);

 return (VAR_1);
}
