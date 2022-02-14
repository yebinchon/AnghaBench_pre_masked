
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_instance {int flags; unsigned int ticks; unsigned int cticks; scalar_t__ pticks; struct snd_timer* timer; } ;
struct snd_timer {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_timer_instance*,int ) ;
 int FUNC_1 (struct snd_timer*,struct snd_timer_instance*,unsigned int) ;
 int FUNC_2 (struct snd_timer_instance*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct snd_timer_instance *VAR_3, unsigned int VAR_4)
{
 struct snd_timer *VAR_5;
 int VAR_6 = -VAR_0;
 unsigned long VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 < 1)
  return -VAR_0;
 if (VAR_3->flags & VAR_2) {
  VAR_6 = FUNC_2(VAR_3);
  FUNC_0(VAR_3, VAR_1);
  return VAR_6;
 }
 VAR_5 = VAR_3->timer;
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 FUNC_3(&VAR_5->lock, VAR_7);
 VAR_3->ticks = VAR_3->cticks = VAR_4;
 VAR_3->pticks = 0;
 VAR_6 = FUNC_1(VAR_5, VAR_3, VAR_4);
 FUNC_4(&VAR_5->lock, VAR_7);
 FUNC_0(VAR_3, VAR_1);
 return VAR_6;
}
