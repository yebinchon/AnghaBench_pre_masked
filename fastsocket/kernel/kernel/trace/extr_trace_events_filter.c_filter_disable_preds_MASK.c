
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ftrace_event_call {int flags; struct event_filter* filter; } ;
struct event_filter {TYPE_1__** preds; scalar_t__ n_preds; } ;
struct TYPE_2__ {int fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ftrace_event_call *VAR_3)
{
 struct event_filter *VAR_4 = VAR_3->filter;
 int VAR_5;

 VAR_3->flags &= ~VAR_1;
 VAR_4->n_preds = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_4->preds[VAR_5]->fn = VAR_2;
}
