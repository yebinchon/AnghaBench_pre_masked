
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {int flags; int cticks; scalar_t__ pticks; struct snd_timer* timer; } ;
struct snd_timer {int lock; int sticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_timer_instance*,int ) ;
 int FUNC_1 (struct snd_timer*,struct snd_timer_instance*,int ) ;
 int FUNC_2 (struct snd_timer_instance*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct snd_timer_instance *VAR_3)
{
 struct snd_timer *VAR_4;
 int VAR_5 = -VAR_0;
 unsigned long VAR_6;

 if (VAR_3 == ((void*)0))
  return VAR_5;
 if (VAR_3->flags & VAR_2)
  return FUNC_2(VAR_3);
 VAR_4 = VAR_3->timer;
 if (! VAR_4)
  return -VAR_0;
 FUNC_3(&VAR_4->lock, VAR_6);
 if (!VAR_3->cticks)
  VAR_3->cticks = 1;
 VAR_3->pticks = 0;
 VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_4->sticks);
 FUNC_4(&VAR_4->lock, VAR_6);
 FUNC_0(VAR_3, VAR_1);
 return VAR_5;
}
