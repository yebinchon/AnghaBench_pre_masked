
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int lock; int cur_time; } ;
typedef int snd_seq_real_time_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct snd_seq_timer *VAR_1,
        snd_seq_real_time_t VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_0(!VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_2);
 FUNC_2(&VAR_1->lock, VAR_3);
 VAR_1->cur_time = VAR_2;
 FUNC_3(&VAR_1->lock, VAR_3);
 return 0;
}
