
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer_per_cpu {TYPE_1__* reader_page; int read; } ;
struct ring_buffer_event {scalar_t__ type_len; } ;
struct buffer_page {int dummy; } ;
struct TYPE_2__ {unsigned int read; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct ring_buffer_event*) ;
 struct buffer_page* FUNC_2 (struct ring_buffer_per_cpu*) ;
 struct ring_buffer_event* FUNC_3 (struct ring_buffer_per_cpu*) ;
 int FUNC_4 (struct ring_buffer_per_cpu*,struct ring_buffer_event*) ;

__attribute__((used)) static void FUNC_5(struct ring_buffer_per_cpu *VAR_1)
{
 struct ring_buffer_event *VAR_2;
 struct buffer_page *VAR_3;
 unsigned VAR_4;

 VAR_3 = FUNC_2(VAR_1);


 if (FUNC_0(VAR_1, !VAR_3))
  return;

 VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->type_len <= VAR_0)
  VAR_1->read++;

 FUNC_4(VAR_1, VAR_2);

 VAR_4 = FUNC_1(VAR_2);
 VAR_1->reader_page->read += VAR_4;
}
