
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int period_size; unsigned int buffer_size; int rate; } ;
struct ct_timer_instance {unsigned int position; int lock; int timer; scalar_t__ running; struct ct_atc_pcm* apcm; struct snd_pcm_substream* substream; } ;
struct ct_atc_pcm {int (* interrupt ) (struct ct_atc_pcm*) ;} ;
struct TYPE_2__ {unsigned int (* pointer ) (struct snd_pcm_substream*) ;} ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct ct_atc_pcm*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct ct_timer_instance *VAR_3 = (struct ct_timer_instance *)VAR_2;
 struct snd_pcm_substream *VAR_4 = VAR_3->substream;
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 struct ct_atc_pcm *VAR_6 = VAR_3->apcm;
 unsigned int VAR_7 = VAR_5->period_size;
 unsigned int VAR_8 = VAR_5->buffer_size;
 unsigned long VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;

 VAR_10 = VAR_4->ops->pointer(VAR_4);
 VAR_11 = (VAR_10 + VAR_8 - VAR_3->position) % VAR_8;
 if (VAR_11 >= VAR_7 ||
     VAR_10 / VAR_7 != VAR_3->position / VAR_7) {
  VAR_6->interrupt(VAR_6);
  VAR_3->position = VAR_10;
 }


 VAR_12 = ((VAR_7 - (VAR_10 % VAR_7))
     * VAR_0 + (VAR_5->rate - 1)) / VAR_5->rate + VAR_0 * 5 / 1000;
 FUNC_1(&VAR_3->lock, VAR_9);
 if (VAR_3->running)
  FUNC_0(&VAR_3->timer, VAR_1 + VAR_12);
 FUNC_2(&VAR_3->lock, VAR_9);
}
