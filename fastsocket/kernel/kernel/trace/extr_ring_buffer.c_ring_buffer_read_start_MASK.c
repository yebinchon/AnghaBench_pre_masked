
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int reader_lock; int lock; int record_disabled; } ;
struct ring_buffer_iter {struct ring_buffer_per_cpu* cpu_buffer; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 struct ring_buffer_iter* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ring_buffer_iter*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 () ;

struct ring_buffer_iter *
FUNC_9(struct ring_buffer *VAR_1, int VAR_2)
{
 struct ring_buffer_per_cpu *VAR_3;
 struct ring_buffer_iter *VAR_4;
 unsigned long VAR_5;

 if (!FUNC_3(VAR_2, VAR_1->cpumask))
  return ((void*)0);

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = VAR_1->buffers[VAR_2];

 VAR_4->cpu_buffer = VAR_3;

 FUNC_2(&VAR_3->record_disabled);
 FUNC_8();

 FUNC_6(&VAR_3->reader_lock, VAR_5);
 FUNC_0(&VAR_3->lock);
 FUNC_5(VAR_4);
 FUNC_1(&VAR_3->lock);
 FUNC_7(&VAR_3->reader_lock, VAR_5);

 return VAR_4;
}
