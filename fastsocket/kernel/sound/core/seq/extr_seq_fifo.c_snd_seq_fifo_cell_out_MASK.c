
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_t ;
struct snd_seq_fifo {int lock; int input_sleep; } ;
struct snd_seq_event_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int VAR_4 ;
 struct snd_seq_event_cell* FUNC_1 (struct snd_seq_fifo*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;

int FUNC_12(struct snd_seq_fifo *VAR_5,
     struct snd_seq_event_cell **VAR_6, int VAR_7)
{
 struct snd_seq_event_cell *VAR_8;
 unsigned long VAR_9;
 wait_queue_t VAR_10;

 if (FUNC_7(!VAR_5))
  return -VAR_1;

 *VAR_6 = ((void*)0);
 FUNC_2(&VAR_10, VAR_4);
 FUNC_9(&VAR_5->lock, VAR_9);
 while ((VAR_8 = FUNC_1(VAR_5)) == ((void*)0)) {
  if (VAR_7) {

   FUNC_11(&VAR_5->lock, VAR_9);
   return -VAR_0;
  }
  FUNC_5(VAR_3);
  FUNC_0(&VAR_5->input_sleep, &VAR_10);
  FUNC_10(&VAR_5->lock);
  FUNC_4();
  FUNC_8(&VAR_5->lock);
  FUNC_3(&VAR_5->input_sleep, &VAR_10);
  if (FUNC_6(VAR_4)) {
   FUNC_11(&VAR_5->lock, VAR_9);
   return -VAR_2;
  }
 }
 FUNC_11(&VAR_5->lock, VAR_9);
 *VAR_6 = VAR_8;

 return 0;
}
