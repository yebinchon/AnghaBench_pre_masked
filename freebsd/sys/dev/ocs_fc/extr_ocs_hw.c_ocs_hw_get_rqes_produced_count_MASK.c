
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t hw_rq_count; TYPE_2__** hw_rq; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_5__ {size_t entry_count; int ** rq_tracker; } ;
typedef TYPE_2__ hw_rq_t ;



uint32_t
FUNC_0(ocs_hw_t *VAR_0)
{
 uint32_t VAR_1 = 0;
 uint32_t VAR_2;
 uint32_t VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->hw_rq_count; VAR_2++) {
  hw_rq_t *VAR_4 = VAR_0->hw_rq[VAR_2];
  if (VAR_4->rq_tracker != ((void*)0)) {
   for (VAR_3 = 0; VAR_3 < VAR_4->entry_count; VAR_3++) {
    if (VAR_4->rq_tracker[VAR_3] != ((void*)0)) {
     VAR_1++;
    }
   }
  }
 }

 return VAR_1;
}
