
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** array; int (* index ) (void*,unsigned int) ;scalar_t__ (* compare ) (void*,void*) ;} ;
typedef TYPE_1__ isc_heap_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 int FUNC_4 (void*,unsigned int) ;
 int FUNC_5 (void*,unsigned int) ;

__attribute__((used)) static void
FUNC_6(isc_heap_t *VAR_0, unsigned int VAR_1, void *VAR_2) {
 unsigned int VAR_3;

 for (VAR_3 = FUNC_2(VAR_1) ;
      VAR_1 > 1 && VAR_0->compare(VAR_2, VAR_0->array[VAR_3]) ;
      VAR_1 = VAR_3, VAR_3 = FUNC_2(VAR_1)) {
  VAR_0->array[VAR_1] = VAR_0->array[VAR_3];
  if (VAR_0->index != ((void*)0))
   (VAR_0->index)(VAR_0->array[VAR_1], VAR_1);
 }
 VAR_0->array[VAR_1] = VAR_2;
 if (VAR_0->index != ((void*)0))
  (VAR_0->index)(VAR_0->array[VAR_1], VAR_1);

 FUNC_1(FUNC_0(VAR_1));
}
