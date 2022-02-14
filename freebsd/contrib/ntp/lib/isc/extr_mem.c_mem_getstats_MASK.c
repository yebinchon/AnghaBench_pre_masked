
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t total; size_t inuse; size_t max_size; TYPE_1__* stats; } ;
typedef TYPE_2__ isc__mem_t ;
struct TYPE_4__ {int totalgets; int gets; } ;



__attribute__((used)) static inline void
FUNC_0(isc__mem_t *VAR_0, size_t VAR_1) {
 VAR_0->total += VAR_1;
 VAR_0->inuse += VAR_1;

 if (VAR_1 > VAR_0->max_size) {
  VAR_0->stats[VAR_0->max_size].gets++;
  VAR_0->stats[VAR_0->max_size].totalgets++;
 } else {
  VAR_0->stats[VAR_1].gets++;
  VAR_0->stats[VAR_1].totalgets++;
 }
}
