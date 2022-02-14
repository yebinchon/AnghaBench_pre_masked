
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; size_t size_increment; void** array; int mctx; } ;
typedef TYPE_1__ isc_heap_t ;
typedef int isc_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 void** FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,void**,int) ;
 int FUNC_4 (void**,void**,int) ;

__attribute__((used)) static isc_boolean_t
FUNC_5(isc_heap_t *VAR_2) {
 void **VAR_3;
 size_t VAR_4;

 FUNC_0(FUNC_1(VAR_2));

 VAR_4 = VAR_2->size + VAR_2->size_increment;
 VAR_3 = FUNC_2(VAR_2->mctx, VAR_4 * sizeof(void *));
 if (VAR_3 == ((void*)0))
  return (VAR_0);
 if (VAR_2->array != ((void*)0)) {
  FUNC_4(VAR_3, VAR_2->array, VAR_2->size * sizeof(void *));
  FUNC_3(VAR_2->mctx, VAR_2->array,
       VAR_2->size * sizeof(void *));
 }
 VAR_2->size = VAR_4;
 VAR_2->array = VAR_3;

 return (VAR_1);
}
