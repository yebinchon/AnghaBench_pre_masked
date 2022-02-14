
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {scalar_t__ commit_page; struct ring_buffer* buffer; } ;
struct ring_buffer_iter {scalar_t__ head; scalar_t__ head_page; struct ring_buffer_per_cpu* cpu_buffer; } ;
struct ring_buffer_event {int dummy; } ;
struct ring_buffer {int dummy; } ;


 scalar_t__ FUNC_0 (struct ring_buffer_per_cpu*,int) ;
 scalar_t__ FUNC_1 (struct ring_buffer_per_cpu*) ;
 unsigned int FUNC_2 (struct ring_buffer_event*) ;
 int FUNC_3 (struct ring_buffer_iter*) ;
 struct ring_buffer_event* FUNC_4 (struct ring_buffer_iter*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct ring_buffer_iter*,struct ring_buffer_event*) ;

__attribute__((used)) static void FUNC_7(struct ring_buffer_iter *VAR_0)
{
 struct ring_buffer *VAR_1;
 struct ring_buffer_per_cpu *VAR_2;
 struct ring_buffer_event *VAR_3;
 unsigned VAR_4;

 VAR_2 = VAR_0->cpu_buffer;
 VAR_1 = VAR_2->buffer;




 if (VAR_0->head >= FUNC_5(VAR_0->head_page)) {

  if (VAR_0->head_page == VAR_2->commit_page)
   return;
  FUNC_3(VAR_0);
  return;
 }

 VAR_3 = FUNC_4(VAR_0);

 VAR_4 = FUNC_2(VAR_3);





 if (FUNC_0(VAR_2,
         (VAR_0->head_page == VAR_2->commit_page) &&
         (VAR_0->head + VAR_4 > FUNC_1(VAR_2))))
  return;

 FUNC_6(VAR_0, VAR_3);

 VAR_0->head += VAR_4;


 if ((VAR_0->head >= FUNC_5(VAR_0->head_page)) &&
     (VAR_0->head_page != VAR_2->commit_page))
  FUNC_7(VAR_0);
}
