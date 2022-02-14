
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_heap {void** ptrs; scalar_t__ size; scalar_t__ max; scalar_t__ (* gt ) (void*,void*) ;} ;


 scalar_t__ FUNC_0 (void*,void*) ;
 scalar_t__ FUNC_1 (void*,void*) ;
 scalar_t__ FUNC_2 (void*,void*) ;
 scalar_t__ FUNC_3 (void*,void*) ;

void *FUNC_4(struct ptr_heap *VAR_0, void *VAR_1)
{
 void *VAR_2;
 void **VAR_3 = VAR_0->ptrs;
 int VAR_4;

 if (VAR_0->size < VAR_0->max) {

  VAR_4 = VAR_0->size++;
  while (VAR_4 > 0 && VAR_0->gt(VAR_1, VAR_3[(VAR_4-1)/2])) {
   VAR_3[VAR_4] = VAR_3[(VAR_4-1)/2];
   VAR_4 = (VAR_4-1)/2;
  }
  VAR_3[VAR_4] = VAR_1;
  return ((void*)0);
 }




 if (VAR_0->gt(VAR_1, VAR_3[0]))
  return VAR_1;


 VAR_2 = VAR_3[0];
 VAR_3[0] = VAR_1;
 VAR_4 = 0;

 while (1) {
  int VAR_5 = 2 * VAR_4 + 1;
  int VAR_6 = 2 * VAR_4 + 2;
  int VAR_7 = VAR_4;
  if (VAR_5 < VAR_0->size && VAR_0->gt(VAR_3[VAR_5], VAR_1))
   VAR_7 = VAR_5;
  if (VAR_6 < VAR_0->size && VAR_0->gt(VAR_3[VAR_6], VAR_3[VAR_7]))
   VAR_7 = VAR_6;
  if (VAR_7 == VAR_4)
   break;

  VAR_3[VAR_4] = VAR_3[VAR_7];
  VAR_3[VAR_7] = VAR_1;
  VAR_4 = VAR_7;
 }
 return VAR_2;
}
