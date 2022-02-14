
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_instance {struct snd_timer* timer; } ;
struct TYPE_2__ {unsigned long (* c_resolution ) (struct snd_timer*) ;unsigned long resolution; } ;
struct snd_timer {TYPE_1__ hw; } ;


 unsigned long FUNC_0 (struct snd_timer*) ;

unsigned long FUNC_1(struct snd_timer_instance *VAR_0)
{
 struct snd_timer * VAR_1;

 if (VAR_0 == ((void*)0))
  return 0;
 if ((VAR_1 = VAR_0->timer) != ((void*)0)) {
  if (VAR_1->hw.c_resolution)
   return VAR_1->hw.c_resolution(VAR_1);
  return VAR_1->hw.resolution;
 }
 return 0;
}
