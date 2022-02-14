
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_prioq {int lock; int cells; struct snd_seq_event_cell* tail; struct snd_seq_event_cell* head; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct snd_seq_event_cell *FUNC_3(struct snd_seq_prioq *VAR_0)
{
 struct snd_seq_event_cell *VAR_1;
 unsigned long VAR_2;

 if (VAR_0 == ((void*)0)) {
  FUNC_0("oops: snd_seq_prioq_cell_in() called with NULL prioq\n");
  return ((void*)0);
 }
 FUNC_1(&VAR_0->lock, VAR_2);

 VAR_1 = VAR_0->head;
 if (VAR_1) {
  VAR_0->head = VAR_1->next;


  if (VAR_0->tail == VAR_1)
   VAR_0->tail = ((void*)0);

  VAR_1->next = ((void*)0);
  VAR_0->cells--;
 }

 FUNC_2(&VAR_0->lock, VAR_2);
 return VAR_1;
}
