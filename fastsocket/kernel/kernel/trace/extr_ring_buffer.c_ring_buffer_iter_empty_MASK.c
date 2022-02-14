
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {scalar_t__ commit_page; } ;
struct ring_buffer_iter {scalar_t__ head_page; scalar_t__ head; struct ring_buffer_per_cpu* cpu_buffer; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*) ;

int FUNC_1(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer_per_cpu *VAR_1;

 VAR_1 = VAR_0->cpu_buffer;

 return VAR_0->head_page == VAR_1->commit_page &&
  VAR_0->head == FUNC_0(VAR_1);
}
