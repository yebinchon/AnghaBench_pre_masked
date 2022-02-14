
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {int record_disabled; } ;
struct ring_buffer_iter {struct ring_buffer_per_cpu* cpu_buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ring_buffer_iter*) ;

void
FUNC_2(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer_per_cpu *VAR_1 = VAR_0->cpu_buffer;

 FUNC_0(&VAR_1->record_disabled);
 FUNC_1(VAR_0);
}
