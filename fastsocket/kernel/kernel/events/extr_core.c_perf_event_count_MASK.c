
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_event {int child_count; int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static inline u64 FUNC_2(struct perf_event *VAR_0)
{
 return FUNC_1(&VAR_0->count) + FUNC_0(&VAR_0->child_count);
}
