
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t inuse; size_t max_size; TYPE_1__* stats; } ;
typedef TYPE_2__ isc__mem_t ;
struct TYPE_4__ {unsigned int gets; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static inline void
FUNC_2(isc__mem_t *VAR_0, void *VAR_1, size_t VAR_2) {
 FUNC_1(VAR_1);

 FUNC_0(VAR_0->inuse >= VAR_2);
 VAR_0->inuse -= VAR_2;

 if (VAR_2 > VAR_0->max_size) {
  FUNC_0(VAR_0->stats[VAR_0->max_size].gets > 0U);
  VAR_0->stats[VAR_0->max_size].gets--;
 } else {
  FUNC_0(VAR_0->stats[VAR_2].gets > 0U);
  VAR_0->stats[VAR_2].gets--;
 }
}
