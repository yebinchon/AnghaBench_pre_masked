
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct busdma_bufzone {scalar_t__ size; } ;
typedef TYPE_1__* busdma_bufalloc_t ;
typedef scalar_t__ bus_size_t ;
struct TYPE_3__ {int num_zones; struct busdma_bufzone* buf_zones; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

struct busdma_bufzone *
FUNC_1(busdma_bufalloc_t VAR_1, bus_size_t VAR_2)
{
 struct busdma_bufzone *VAR_3;
 int VAR_4;

 if (VAR_2 > VAR_0)
  return (((void*)0));

 for (VAR_4 = 0, VAR_3 = VAR_1->buf_zones; VAR_4 < VAR_1->num_zones; ++VAR_4, ++VAR_3) {
  if (VAR_3->size >= VAR_2)
   return (VAR_3);
 }

 FUNC_0("Didn't find a buffer zone of the right size");
}
