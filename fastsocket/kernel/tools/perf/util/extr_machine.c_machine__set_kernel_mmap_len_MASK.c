
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long long start; unsigned long long len; } ;
union perf_event {TYPE_1__ mmap; } ;
struct machine {TYPE_2__** vmlinux_maps; } ;
struct TYPE_4__ {unsigned long long start; unsigned long long end; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct machine *VAR_1,
      union perf_event *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1->vmlinux_maps[VAR_3]->start = VAR_2->mmap.start;
  VAR_1->vmlinux_maps[VAR_3]->end = (VAR_2->mmap.start +
         VAR_2->mmap.len);




  if (VAR_1->vmlinux_maps[VAR_3]->end == 0)
   VAR_1->vmlinux_maps[VAR_3]->end = ~0ULL;
 }
}
