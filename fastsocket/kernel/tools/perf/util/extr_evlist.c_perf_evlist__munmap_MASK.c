
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_evlist {int nr_mmaps; TYPE_1__* mmap; int mmap_len; } ;
struct TYPE_2__ {int * base; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct perf_evlist *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_mmaps; VAR_1++) {
  if (VAR_0->mmap[VAR_1].base != ((void*)0)) {
   FUNC_1(VAR_0->mmap[VAR_1].base, VAR_0->mmap_len);
   VAR_0->mmap[VAR_1].base = ((void*)0);
  }
 }

 FUNC_0(VAR_0->mmap);
 VAR_0->mmap = ((void*)0);
}
