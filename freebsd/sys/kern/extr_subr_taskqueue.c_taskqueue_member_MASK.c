
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct taskqueue {int tq_tcount; struct thread** tq_threads; } ;



int
FUNC_0(struct taskqueue *VAR_0, struct thread *VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 0;

 for (VAR_2 = 0, VAR_3 = 0; ; VAR_2++) {
  if (VAR_0->tq_threads[VAR_2] == ((void*)0))
   continue;
  if (VAR_0->tq_threads[VAR_2] == VAR_1) {
   VAR_4 = 1;
   break;
  }
  if (++VAR_3 >= VAR_0->tq_tcount)
   break;
 }
 return (VAR_4);
}
