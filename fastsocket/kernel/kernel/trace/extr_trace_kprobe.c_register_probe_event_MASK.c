
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int trace; } ;
struct TYPE_4__ {int print_fmt; } ;
struct ftrace_event_call {TYPE_1__ fmt; int name; struct trace_probe* data; int profile_disable; int profile_enable; int profile_count; int unregfunc; int regfunc; scalar_t__ enabled; int id; int flags; TYPE_2__* event; int define_fields; void* raw_init; } ;
struct trace_probe {TYPE_2__ event; struct ftrace_event_call call; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (struct trace_probe*) ;
 int FUNC_5 (struct ftrace_event_call*) ;
 scalar_t__ FUNC_6 (struct trace_probe*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct trace_probe *VAR_12)
{
 struct ftrace_event_call *VAR_13 = &VAR_12->call;
 int VAR_14;


 if (FUNC_6(VAR_12)) {
  VAR_12->event.trace = VAR_6;
  VAR_13->raw_init = VAR_9;
  VAR_13->define_fields = VAR_4;
 } else {
  VAR_12->event.trace = VAR_5;
  VAR_13->raw_init = VAR_9;
  VAR_13->define_fields = VAR_3;
 }
 if (FUNC_4(VAR_12) < 0)
  return -VAR_1;
 VAR_13->event = &VAR_12->event;
 VAR_13->id = FUNC_3(&VAR_12->event);
 VAR_13->flags = VAR_2;
 if (!VAR_13->id) {
  FUNC_1(VAR_13->fmt.print_fmt);
  return -VAR_0;
 }
 VAR_13->enabled = 0;
 VAR_13->regfunc = VAR_8;
 VAR_13->unregfunc = VAR_7;






 VAR_13->data = VAR_12;
 VAR_14 = FUNC_5(VAR_13);
 if (VAR_14) {
  FUNC_2("Failed to register kprobe event: %s\n", VAR_13->name);
  FUNC_1(VAR_13->fmt.print_fmt);
  FUNC_7(&VAR_12->event);
 }
 return VAR_14;
}
