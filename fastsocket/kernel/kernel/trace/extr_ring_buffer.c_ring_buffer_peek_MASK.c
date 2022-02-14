
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ring_buffer_per_cpu {int reader_lock; } ;
struct ring_buffer_event {scalar_t__ type_len; } ;
struct ring_buffer {int cpumask; struct ring_buffer_per_cpu** buffers; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct ring_buffer_per_cpu*) ;
 struct ring_buffer_event* FUNC_4 (struct ring_buffer_per_cpu*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct ring_buffer_event *
FUNC_8(struct ring_buffer *VAR_1, int VAR_2, u64 *VAR_3)
{
 struct ring_buffer_per_cpu *VAR_4 = VAR_1->buffers[VAR_2];
 struct ring_buffer_event *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_2, VAR_1->cpumask))
  return ((void*)0);

 VAR_7 = FUNC_5();
 again:
 FUNC_2(VAR_6);
 if (VAR_7)
  FUNC_6(&VAR_4->reader_lock);
 VAR_5 = FUNC_4(VAR_4, VAR_3);
 if (VAR_5 && VAR_5->type_len == VAR_0)
  FUNC_3(VAR_4);
 if (VAR_7)
  FUNC_7(&VAR_4->reader_lock);
 FUNC_1(VAR_6);

 if (VAR_5 && VAR_5->type_len == VAR_0)
  goto again;

 return VAR_5;
}
