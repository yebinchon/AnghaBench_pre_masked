
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filename; void* pgoff; void* len; void* start; void* tid; void* pid; } ;
union perf_event {TYPE_1__ mmap; } ;
typedef int u64 ;


 int FUNC_0 (scalar_t__,int) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (union perf_event*,void*) ;

__attribute__((used)) static void FUNC_5(union perf_event *VAR_0,
      bool VAR_1)
{
 VAR_0->mmap.pid = FUNC_1(VAR_0->mmap.pid);
 VAR_0->mmap.tid = FUNC_1(VAR_0->mmap.tid);
 VAR_0->mmap.start = FUNC_2(VAR_0->mmap.start);
 VAR_0->mmap.len = FUNC_2(VAR_0->mmap.len);
 VAR_0->mmap.pgoff = FUNC_2(VAR_0->mmap.pgoff);

 if (VAR_1) {
  void *VAR_2 = &VAR_0->mmap.filename;

  VAR_2 += FUNC_0(FUNC_3(VAR_2) + 1, sizeof(u64));
  FUNC_4(VAR_0, VAR_2);
 }
}
