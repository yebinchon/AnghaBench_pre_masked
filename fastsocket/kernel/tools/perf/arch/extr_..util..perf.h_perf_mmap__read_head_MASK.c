
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_mmap {struct perf_event_mmap_page* base; } ;
struct perf_event_mmap_page {int data_head; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline unsigned int FUNC_1(struct perf_mmap *VAR_0)
{
 struct perf_event_mmap_page *VAR_1 = VAR_0->base;
 int VAR_2 = VAR_1->data_head;
 FUNC_0();
 return VAR_2;
}
