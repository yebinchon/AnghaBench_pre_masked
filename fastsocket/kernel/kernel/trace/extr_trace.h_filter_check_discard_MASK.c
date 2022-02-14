
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;
struct ftrace_event_call {int flags; int filter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (struct ring_buffer*,struct ring_buffer_event*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int
FUNC_3(struct ftrace_event_call *VAR_1, void *VAR_2,
       struct ring_buffer *VAR_3,
       struct ring_buffer_event *VAR_4)
{
 if (FUNC_2(VAR_1->flags & VAR_0) &&
     !FUNC_0(VAR_1->filter, VAR_2)) {
  FUNC_1(VAR_3, VAR_4);
  return 1;
 }

 return 0;
}
