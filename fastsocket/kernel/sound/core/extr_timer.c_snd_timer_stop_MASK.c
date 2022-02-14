
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {scalar_t__ pticks; int ticks; int cticks; struct snd_timer* timer; } ;
struct snd_timer {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_timer_instance*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct snd_timer_instance *VAR_2)
{
 struct snd_timer *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, 0, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_3 = VAR_2->timer;
 if (!VAR_3)
  return -VAR_0;
 FUNC_1(&VAR_3->lock, VAR_4);
 VAR_2->cticks = VAR_2->ticks;
 VAR_2->pticks = 0;
 FUNC_2(&VAR_3->lock, VAR_4);
 return 0;
}
