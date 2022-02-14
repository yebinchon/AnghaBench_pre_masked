
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct trace_iterator {struct trace_array* tr; struct ring_buffer_iter** buffer_iter; } ;
struct trace_array {scalar_t__ time_start; TYPE_1__** data; } ;
struct ring_buffer_iter {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {unsigned long skipped_entries; } ;


 struct ring_buffer_event* FUNC_0 (struct ring_buffer_iter*,scalar_t__*) ;
 int FUNC_1 (struct ring_buffer_iter*) ;
 int FUNC_2 (struct ring_buffer_iter*,int *) ;

__attribute__((used)) static void FUNC_3(struct trace_iterator *VAR_0, int VAR_1)
{
 struct trace_array *VAR_2 = VAR_0->tr;
 struct ring_buffer_event *VAR_3;
 struct ring_buffer_iter *VAR_4;
 unsigned long VAR_5 = 0;
 u64 VAR_6;

 VAR_2->data[VAR_1]->skipped_entries = 0;

 if (!VAR_0->buffer_iter[VAR_1])
  return;

 VAR_4 = VAR_0->buffer_iter[VAR_1];
 FUNC_1(VAR_4);






 while ((VAR_3 = FUNC_0(VAR_4, &VAR_6))) {
  if (VAR_6 >= VAR_0->tr->time_start)
   break;
  VAR_5++;
  FUNC_2(VAR_4, ((void*)0));
 }

 VAR_2->data[VAR_1]->skipped_entries = VAR_5;
}
