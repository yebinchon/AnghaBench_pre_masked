
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {int period_size; int rate; } ;
struct ct_timer_instance {int running; int lock; int timer; TYPE_1__* substream; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ct_timer_instance *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->substream->runtime;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_2->running = 1;
 FUNC_0(&VAR_2->timer,
    VAR_1 + (VAR_3->period_size * VAR_0 +
        (VAR_3->rate - 1)) / VAR_3->rate);
 FUNC_2(&VAR_2->lock, VAR_4);
}
