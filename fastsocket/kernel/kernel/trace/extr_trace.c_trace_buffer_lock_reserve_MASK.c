
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_entry {int type; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;


 struct trace_entry* FUNC_0 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_1 (struct ring_buffer*,unsigned long) ;
 int FUNC_2 (struct trace_entry*,unsigned long,int) ;

struct ring_buffer_event *
FUNC_3(struct ring_buffer *VAR_0,
     int VAR_1,
     unsigned long VAR_2,
     unsigned long VAR_3, int VAR_4)
{
 struct ring_buffer_event *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_2);
 if (VAR_5 != ((void*)0)) {
  struct trace_entry *VAR_6 = FUNC_0(VAR_5);

  FUNC_2(VAR_6, VAR_3, VAR_4);
  VAR_6->type = VAR_1;
 }

 return VAR_5;
}
