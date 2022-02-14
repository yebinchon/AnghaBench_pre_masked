
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {int use_lock; int input_sleep; int lock; int cells; struct snd_seq_event_cell* head; struct snd_seq_event_cell* tail; int overflow; int pool; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;
struct snd_seq_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct snd_seq_event*,struct snd_seq_event_cell**,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct snd_seq_fifo *VAR_2,
     struct snd_seq_event *VAR_3)
{
 struct snd_seq_event_cell *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 if (FUNC_1(!VAR_2))
  return -VAR_0;

 FUNC_4(&VAR_2->use_lock);
 VAR_6 = FUNC_2(VAR_2->pool, VAR_3, &VAR_4, 1, ((void*)0));
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_1)
   FUNC_0(&VAR_2->overflow);
  FUNC_3(&VAR_2->use_lock);
  return VAR_6;
 }


 FUNC_5(&VAR_2->lock, VAR_5);
 if (VAR_2->tail != ((void*)0))
  VAR_2->tail->next = VAR_4;
 VAR_2->tail = VAR_4;
 if (VAR_2->head == ((void*)0))
  VAR_2->head = VAR_4;
 VAR_2->cells++;
 FUNC_6(&VAR_2->lock, VAR_5);


 if (FUNC_7(&VAR_2->input_sleep))
  FUNC_8(&VAR_2->input_sleep);

 FUNC_3(&VAR_2->use_lock);

 return 0;

}
