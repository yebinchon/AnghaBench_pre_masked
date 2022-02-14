
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct ring_buffer *VAR_0, int VAR_1)
{
 struct ring_buffer_per_cpu *VAR_2;

 if (!FUNC_1(VAR_1, VAR_0->cpumask))
  return;

 VAR_2 = VAR_0->buffers[VAR_1];
 FUNC_0(&VAR_2->record_disabled);
}
