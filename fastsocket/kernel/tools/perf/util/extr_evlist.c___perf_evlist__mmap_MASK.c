
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_evlist {TYPE_1__* mmap; int mmap_len; } ;
struct TYPE_2__ {int mask; int * base; scalar_t__ prev; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ,int,int ,int,int ) ;
 int FUNC_1 (struct perf_evlist*,int) ;

__attribute__((used)) static int FUNC_2(struct perf_evlist *VAR_2,
          int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 VAR_2->mmap[VAR_3].prev = 0;
 VAR_2->mmap[VAR_3].mask = VAR_5;
 VAR_2->mmap[VAR_3].base = FUNC_0(((void*)0), VAR_2->mmap_len, VAR_4,
          VAR_1, VAR_6, 0);
 if (VAR_2->mmap[VAR_3].base == VAR_0) {
  VAR_2->mmap[VAR_3].base = ((void*)0);
  return -1;
 }

 FUNC_1(VAR_2, VAR_6);
 return 0;
}
