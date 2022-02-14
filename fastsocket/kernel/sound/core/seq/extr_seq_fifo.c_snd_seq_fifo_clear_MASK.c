
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_fifo {int lock; int use_lock; int overflow; } ;
struct snd_seq_event_cell {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct snd_seq_event_cell* FUNC_1 (struct snd_seq_fifo*) ;
 int FUNC_2 (struct snd_seq_event_cell*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct snd_seq_fifo *VAR_0)
{
 struct snd_seq_event_cell *VAR_1;
 unsigned long VAR_2;


 FUNC_0(&VAR_0->overflow, 0);

 FUNC_3(&VAR_0->use_lock);
 FUNC_4(&VAR_0->lock, VAR_2);

 while ((VAR_1 = FUNC_1(VAR_0)) != ((void*)0)) {
  FUNC_2(VAR_1);
 }
 FUNC_5(&VAR_0->lock, VAR_2);
}
