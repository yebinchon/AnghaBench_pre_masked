
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_mmap {int dummy; } ;
struct perf_evlist {int nr_mmaps; int * mmap; TYPE_1__* threads; int cpus; } ;
struct TYPE_2__ {int nr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct perf_evlist *VAR_1)
{
 VAR_1->nr_mmaps = FUNC_1(VAR_1->cpus);
 if (FUNC_0(VAR_1->cpus))
  VAR_1->nr_mmaps = VAR_1->threads->nr;
 VAR_1->mmap = FUNC_2(VAR_1->nr_mmaps * sizeof(struct perf_mmap));
 return VAR_1->mmap != ((void*)0) ? 0 : -VAR_0;
}
