
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct perf_event_context {struct list_head flexible_groups; struct list_head pinned_groups; } ;
struct TYPE_2__ {scalar_t__ pinned; } ;
struct perf_event {TYPE_1__ attr; } ;



__attribute__((used)) static struct list_head *
FUNC_0(struct perf_event *VAR_0, struct perf_event_context *VAR_1)
{
 if (VAR_0->attr.pinned)
  return &VAR_1->pinned_groups;
 else
  return &VAR_1->flexible_groups;
}
