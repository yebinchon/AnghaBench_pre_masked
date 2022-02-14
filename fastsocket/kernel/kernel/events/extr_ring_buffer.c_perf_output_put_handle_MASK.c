
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {int wakeup; int nest; int head; TYPE_1__* user_page; } ;
struct perf_output_handle {unsigned long wakeup; struct ring_buffer* rb; } ;
struct TYPE_2__ {unsigned long data_head; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (struct perf_output_handle*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct perf_output_handle *VAR_0)
{
 struct ring_buffer *VAR_1 = VAR_0->rb;
 unsigned long VAR_2;

again:
 VAR_2 = FUNC_2(&VAR_1->head);





 if (!FUNC_0(&VAR_1->nest))
  goto out;






 VAR_1->user_page->data_head = VAR_2;





 if (FUNC_5(VAR_2 != FUNC_2(&VAR_1->head))) {
  FUNC_1(&VAR_1->nest);
  goto again;
 }

 if (VAR_0->wakeup != FUNC_2(&VAR_1->wakeup))
  FUNC_3(VAR_0);

out:
 FUNC_4();
}
