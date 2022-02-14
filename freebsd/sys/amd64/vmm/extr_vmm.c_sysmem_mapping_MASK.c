
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm {TYPE_1__* mem_segs; } ;
struct mem_map {scalar_t__ len; size_t segid; } ;
struct TYPE_2__ {scalar_t__ sysmem; } ;



__attribute__((used)) static __inline bool
FUNC_0(struct vm *VAR_0, struct mem_map *VAR_1)
{

 if (VAR_1->len != 0 && VAR_0->mem_segs[VAR_1->segid].sysmem)
  return (1);
 else
  return (0);
}
