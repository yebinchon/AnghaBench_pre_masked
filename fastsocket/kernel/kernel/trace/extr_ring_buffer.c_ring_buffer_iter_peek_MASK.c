
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ring_buffer_per_cpu {int reader_lock; } ;
struct ring_buffer_iter {struct ring_buffer_per_cpu* cpu_buffer; } ;
struct ring_buffer_event {scalar_t__ type_len; } ;


 scalar_t__ VAR_0 ;
 struct ring_buffer_event* FUNC_0 (struct ring_buffer_iter*,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct ring_buffer_event *
FUNC_3(struct ring_buffer_iter *VAR_1, u64 *VAR_2)
{
 struct ring_buffer_per_cpu *VAR_3 = VAR_1->cpu_buffer;
 struct ring_buffer_event *VAR_4;
 unsigned long VAR_5;

 again:
 FUNC_1(&VAR_3->reader_lock, VAR_5);
 VAR_4 = FUNC_0(VAR_1, VAR_2);
 FUNC_2(&VAR_3->reader_lock, VAR_5);

 if (VAR_4 && VAR_4->type_len == VAR_0)
  goto again;

 return VAR_4;
}
