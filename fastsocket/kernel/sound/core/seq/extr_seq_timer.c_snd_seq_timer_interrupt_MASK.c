
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {struct snd_seq_queue* callback_data; } ;
struct snd_seq_timer {unsigned long skew; unsigned long skew_base; int lock; int last_update; int tick; int cur_time; int running; } ;
struct snd_seq_queue {struct snd_seq_timer* timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_seq_queue*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct snd_timer_instance *VAR_0,
        unsigned long VAR_1,
        unsigned long VAR_2)
{
 unsigned long VAR_3;
 struct snd_seq_queue *VAR_4 = VAR_0->callback_data;
 struct snd_seq_timer *VAR_5;

 if (VAR_4 == ((void*)0))
  return;
 VAR_5 = VAR_4->timer;
 if (VAR_5 == ((void*)0))
  return;
 if (!VAR_5->running)
  return;

 VAR_1 *= VAR_2;
 if (VAR_5->skew != VAR_5->skew_base) {

  VAR_1 = (VAR_1 >> 16) * VAR_5->skew +
   (((VAR_1 & 0xffff) * VAR_5->skew) >> 16);
 }

 FUNC_4(&VAR_5->lock, VAR_3);


 FUNC_2(&VAR_5->cur_time, VAR_1);


 FUNC_3(&VAR_5->tick, VAR_1);


 FUNC_0(&VAR_5->last_update);

 FUNC_5(&VAR_5->lock, VAR_3);


 FUNC_1(VAR_4, 1, 0);
}
