
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {int cells; struct snd_seq_event_cell* tail; struct snd_seq_event_cell* head; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;



__attribute__((used)) static struct snd_seq_event_cell *FUNC_0(struct snd_seq_fifo *VAR_0)
{
 struct snd_seq_event_cell *VAR_1;

 if ((VAR_1 = VAR_0->head) != ((void*)0)) {
  VAR_0->head = VAR_1->next;


  if (VAR_0->tail == VAR_1)
   VAR_0->tail = ((void*)0);

  VAR_1->next = ((void*)0);
  VAR_0->cells--;
 }

 return VAR_1;
}
