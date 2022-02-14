
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int min_nr; int curr_nr; void* pool_data; void* (* alloc ) (int,void*) ;int * free; int wait; int lock; void* elements; } ;
typedef TYPE_1__ mempool_t ;
typedef int mempool_free_t ;
typedef void* (* mempool_alloc_t ) (int,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (int,int,int) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int,void*) ;
 scalar_t__ FUNC_7 (int) ;

mempool_t *FUNC_8(int VAR_2, mempool_alloc_t *VAR_3,
   mempool_free_t *VAR_4, void *VAR_5, int VAR_6)
{
 mempool_t *VAR_7;
 VAR_7 = FUNC_4(sizeof(*VAR_7), VAR_0 | VAR_1, VAR_6);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->elements = FUNC_4(VAR_2 * sizeof(void *),
     VAR_0, VAR_6);
 if (!VAR_7->elements) {
  FUNC_3(VAR_7);
  return ((void*)0);
 }
 FUNC_5(&VAR_7->lock);
 VAR_7->min_nr = VAR_2;
 VAR_7->pool_data = VAR_5;
 FUNC_2(&VAR_7->wait);
 VAR_7->alloc = *VAR_3;
 VAR_7->free = VAR_4;




 while (VAR_7->curr_nr < VAR_7->min_nr) {
  void *VAR_8;

  VAR_8 = VAR_7->alloc(VAR_0, VAR_7->pool_data);
  if (FUNC_7(!VAR_8)) {
   FUNC_1(VAR_7);
   return ((void*)0);
  }
  FUNC_0(VAR_7, VAR_8);
 }
 return VAR_7;
}
