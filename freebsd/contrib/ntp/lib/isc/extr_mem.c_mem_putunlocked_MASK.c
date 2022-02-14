
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t max_size; size_t total; size_t inuse; TYPE_1__* stats; TYPE_3__** freelists; int arg; int (* memfree ) (int ,void*) ;} ;
typedef TYPE_2__ isc__mem_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_3__ element ;
struct TYPE_5__ {unsigned int gets; int freefrags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,size_t,size_t) ;
 int FUNC_2 (void*,int,size_t) ;
 size_t FUNC_3 (size_t) ;
 int FUNC_4 (int ,void*) ;

__attribute__((used)) static inline void
FUNC_5(isc__mem_t *VAR_0, void *VAR_1, size_t VAR_2) {
 size_t VAR_3 = FUNC_3(VAR_2);

 if (VAR_2 == VAR_0->max_size || VAR_3 >= VAR_0->max_size) {






  (VAR_0->memfree)(VAR_0->arg, VAR_1);
  FUNC_0(VAR_0->stats[VAR_0->max_size].gets != 0U);
  VAR_0->stats[VAR_0->max_size].gets--;
  FUNC_0(VAR_2 <= VAR_0->total);
  VAR_0->inuse -= VAR_2;
  VAR_0->total -= VAR_2;
  return;
 }
 ((element *)VAR_1)->next = VAR_0->freelists[VAR_3];
 VAR_0->freelists[VAR_3] = (element *)VAR_1;







 FUNC_0(VAR_0->stats[VAR_2].gets != 0U);
 VAR_0->stats[VAR_2].gets--;
 VAR_0->stats[VAR_3].freefrags++;
 VAR_0->inuse -= VAR_3;
}
