
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {int lock; int cells; struct snd_seq_event_cell* head; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct snd_seq_fifo *VAR_0,
          struct snd_seq_event_cell *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1) {
  FUNC_0(&VAR_0->lock, VAR_2);
  VAR_1->next = VAR_0->head;
  VAR_0->head = VAR_1;
  VAR_0->cells++;
  FUNC_1(&VAR_0->lock, VAR_2);
 }
}
