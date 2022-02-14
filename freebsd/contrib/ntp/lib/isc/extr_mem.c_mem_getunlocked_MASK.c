
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t max_size; unsigned int quota; size_t total; size_t inuse; TYPE_2__* stats; TYPE_1__** freelists; int memalloc_failures; int arg; void* (* memalloc ) (int ,size_t) ;} ;
typedef TYPE_3__ isc__mem_t ;
struct TYPE_7__ {int freefrags; int totalgets; int gets; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;


 int FUNC_0 (void*,int,size_t) ;
 int FUNC_1 (TYPE_3__*,size_t) ;
 size_t FUNC_2 (size_t) ;
 void* FUNC_3 (int ,size_t) ;

__attribute__((used)) static inline void *
FUNC_4(isc__mem_t *VAR_0, size_t VAR_1) {
 size_t VAR_2 = FUNC_2(VAR_1);
 void *VAR_3;

 if (VAR_1 >= VAR_0->max_size || VAR_2 >= VAR_0->max_size) {



  if (VAR_0->quota != 0U && VAR_0->total + VAR_1 > VAR_0->quota) {
   VAR_3 = ((void*)0);
   goto done;
  }
  VAR_3 = (VAR_0->memalloc)(VAR_0->arg, VAR_1);
  if (VAR_3 == ((void*)0)) {
   VAR_0->memalloc_failures++;
   goto done;
  }
  VAR_0->total += VAR_1;
  VAR_0->inuse += VAR_1;
  VAR_0->stats[VAR_0->max_size].gets++;
  VAR_0->stats[VAR_0->max_size].totalgets++;





  VAR_2 = VAR_1;
  goto done;
 }






 if (VAR_0->freelists[VAR_2] == ((void*)0) && !FUNC_1(VAR_0, VAR_2))
  return (((void*)0));




 VAR_3 = VAR_0->freelists[VAR_2];
 VAR_0->freelists[VAR_2] = VAR_0->freelists[VAR_2]->next;







 VAR_0->stats[VAR_1].gets++;
 VAR_0->stats[VAR_1].totalgets++;
 VAR_0->stats[VAR_2].freefrags--;
 VAR_0->inuse += VAR_2;

 done:






 return (VAR_3);
}
