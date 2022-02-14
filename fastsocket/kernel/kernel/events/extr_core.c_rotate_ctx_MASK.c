
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int flexible_groups; int rotate_disable; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct perf_event_context *VAR_0)
{




 if (!VAR_0->rotate_disable)
  FUNC_0(&VAR_0->flexible_groups);
}
