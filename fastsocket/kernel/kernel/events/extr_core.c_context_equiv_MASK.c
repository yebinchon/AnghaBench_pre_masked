
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {scalar_t__ parent_ctx; scalar_t__ parent_gen; int pin_count; } ;



__attribute__((used)) static int FUNC_0(struct perf_event_context *VAR_0,
    struct perf_event_context *VAR_1)
{
 return VAR_0->parent_ctx && VAR_0->parent_ctx == VAR_1->parent_ctx
  && VAR_0->parent_gen == VAR_1->parent_gen
  && !VAR_0->pin_count && !VAR_1->pin_count;
}
