
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct trace_iterator {TYPE_1__* tr; struct ring_buffer_iter** buffer_iter; } ;
struct trace_entry {int dummy; } ;
struct ring_buffer_iter {int dummy; } ;
struct ring_buffer_event {int dummy; } ;
struct TYPE_2__ {int buffer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct trace_entry* FUNC_2 (struct ring_buffer_event*) ;
 struct ring_buffer_event* FUNC_3 (struct ring_buffer_iter*,int *) ;
 struct ring_buffer_event* FUNC_4 (int ,int,int *) ;

__attribute__((used)) static struct trace_entry *
FUNC_5(struct trace_iterator *VAR_0, int VAR_1, u64 *VAR_2)
{
 struct ring_buffer_event *VAR_3;
 struct ring_buffer_iter *VAR_4 = VAR_0->buffer_iter[VAR_1];


 FUNC_0();

 if (VAR_4)
  VAR_3 = FUNC_3(VAR_4, VAR_2);
 else
  VAR_3 = FUNC_4(VAR_0->tr->buffer, VAR_1, VAR_2);

 FUNC_1();

 return VAR_3 ? FUNC_2(VAR_3) : ((void*)0);
}
