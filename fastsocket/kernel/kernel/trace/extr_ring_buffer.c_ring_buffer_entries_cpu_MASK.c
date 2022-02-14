
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {unsigned long read; int overrun; int entries; } ;
struct ring_buffer {struct ring_buffer_per_cpu** buffers; int cpumask; } ;


 int FUNC_0 (int,int ) ;
 unsigned long FUNC_1 (int *) ;

unsigned long FUNC_2(struct ring_buffer *VAR_0, int VAR_1)
{
 struct ring_buffer_per_cpu *VAR_2;
 unsigned long VAR_3;

 if (!FUNC_0(VAR_1, VAR_0->cpumask))
  return 0;

 VAR_2 = VAR_0->buffers[VAR_1];
 VAR_3 = (FUNC_1(&VAR_2->entries) - FUNC_1(&VAR_2->overrun))
  - VAR_2->read;

 return VAR_3;
}
