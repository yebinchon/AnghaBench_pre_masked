
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_heapindex_t ;
typedef int * isc_heapcompare_t ;
struct TYPE_4__ {unsigned int size_increment; int index; int * compare; int * array; scalar_t__ last; int * mctx; scalar_t__ size; int magic; } ;
typedef TYPE_1__ isc_heap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 unsigned int VAR_3 ;
 int FUNC_1 (int *,int **) ;
 TYPE_1__* FUNC_2 (int *,int) ;

isc_result_t
FUNC_3(isc_mem_t *VAR_4, isc_heapcompare_t VAR_5,
  isc_heapindex_t VAR_6, unsigned int VAR_7,
  isc_heap_t **VAR_8)
{
 isc_heap_t *VAR_9;

 FUNC_0(VAR_8 != ((void*)0) && *VAR_8 == ((void*)0));
 FUNC_0(VAR_5 != ((void*)0));

 VAR_9 = FUNC_2(VAR_4, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0))
  return (VAR_1);
 VAR_9->magic = VAR_0;
 VAR_9->size = 0;
 VAR_9->mctx = ((void*)0);
 FUNC_1(VAR_4, &VAR_9->mctx);
 if (VAR_7 == 0)
  VAR_9->size_increment = VAR_3;
 else
  VAR_9->size_increment = VAR_7;
 VAR_9->last = 0;
 VAR_9->array = ((void*)0);
 VAR_9->compare = VAR_5;
 VAR_9->index = VAR_6;

 *VAR_8 = VAR_9;

 return (VAR_2);
}
