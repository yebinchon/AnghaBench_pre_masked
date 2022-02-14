
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_t ;
struct snd_seq_pool {int max_used; int lock; int event_alloc_failures; int event_alloc_success; int counter; struct snd_seq_event_cell* free; scalar_t__ closing; int output_sleep; int * ptr; } ;
struct snd_seq_event_cell {struct snd_seq_event_cell* next; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct snd_seq_pool *VAR_6,
         struct snd_seq_event_cell **VAR_7,
         int VAR_8, struct file *VAR_9)
{
 struct snd_seq_event_cell *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = -VAR_0;
 wait_queue_t VAR_13;

 if (VAR_6 == ((void*)0))
  return -VAR_1;

 *VAR_7 = ((void*)0);

 FUNC_3(&VAR_13, VAR_5);
 FUNC_10(&VAR_6->lock, VAR_11);
 if (VAR_6->ptr == ((void*)0)) {
  FUNC_8("seq: pool is not initialized\n");
  VAR_12 = -VAR_1;
  goto __error;
 }
 while (VAR_6->free == ((void*)0) && ! VAR_8 && ! VAR_6->closing) {

  FUNC_6(VAR_4);
  FUNC_0(&VAR_6->output_sleep, &VAR_13);
  FUNC_11(&VAR_6->lock);
  FUNC_5();
  FUNC_9(&VAR_6->lock);
  FUNC_4(&VAR_6->output_sleep, &VAR_13);

  if (FUNC_7(VAR_5)) {
   VAR_12 = -VAR_3;
   goto __error;
  }
 }
 if (VAR_6->closing) {
  VAR_12 = -VAR_2;
  goto __error;
 }

 VAR_10 = VAR_6->free;
 if (VAR_10) {
  int VAR_14;
  VAR_6->free = VAR_10->next;
  FUNC_1(&VAR_6->counter);
  VAR_14 = FUNC_2(&VAR_6->counter);
  if (VAR_6->max_used < VAR_14)
   VAR_6->max_used = VAR_14;
  VAR_6->event_alloc_success++;

  VAR_10->next = ((void*)0);
  VAR_12 = 0;
 } else
  VAR_6->event_alloc_failures++;
 *VAR_7 = VAR_10;

__error:
 FUNC_12(&VAR_6->lock, VAR_11);
 return VAR_12;
}
