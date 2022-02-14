
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_mmap {struct perf_event_mmap_page* base; } ;
struct perf_event_mmap_page {unsigned long data_tail; } ;



__attribute__((used)) static inline void FUNC_0(struct perf_mmap *VAR_0,
      unsigned long VAR_1)
{
 struct perf_event_mmap_page *VAR_2 = VAR_0->base;





 VAR_2->data_tail = VAR_1;
}
