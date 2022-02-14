
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ring_buffer_per_cpu {int read_stamp; TYPE_2__* reader_page; } ;
struct ring_buffer_iter {TYPE_2__* head_page; int read_stamp; int head; struct ring_buffer_per_cpu* cpu_buffer; } ;
struct TYPE_4__ {TYPE_1__* page; int read; int list; } ;
struct TYPE_3__ {int time_stamp; } ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer_per_cpu *VAR_1 = VAR_0->cpu_buffer;


 if (FUNC_0(&VAR_1->reader_page->list)) {
  VAR_0->head_page = FUNC_1(VAR_1);
  if (FUNC_2(!VAR_0->head_page))
   return;
  VAR_0->head = VAR_0->head_page->read;
 } else {
  VAR_0->head_page = VAR_1->reader_page;
  VAR_0->head = VAR_1->reader_page->read;
 }
 if (VAR_0->head)
  VAR_0->read_stamp = VAR_1->read_stamp;
 else
  VAR_0->read_stamp = VAR_0->head_page->page->time_stamp;
}
