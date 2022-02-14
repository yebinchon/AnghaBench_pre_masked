
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsocket {int target_iomap_size; struct rs_iomap* target_iomap; } ;
struct TYPE_2__ {scalar_t__ length; } ;
struct rs_iomap {scalar_t__ offset; TYPE_1__ sge; } ;
typedef scalar_t__ off_t ;



__attribute__((used)) static struct rs_iomap *FUNC_0(struct rsocket *VAR_0, off_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->target_iomap_size; VAR_2++) {
  if (VAR_1 >= VAR_0->target_iomap[VAR_2].offset &&
      VAR_1 < VAR_0->target_iomap[VAR_2].offset + VAR_0->target_iomap[VAR_2].sge.length)
   return &VAR_0->target_iomap[VAR_2];
 }
 return ((void*)0);
}
