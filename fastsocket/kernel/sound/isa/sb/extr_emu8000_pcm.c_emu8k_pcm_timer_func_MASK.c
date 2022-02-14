
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct snd_emu8k_pcm {int last_ptr; int buf_size; int period_pos; int period_size; int timer_lock; int substream; TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct snd_emu8k_pcm*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct snd_emu8k_pcm *VAR_2 = (struct snd_emu8k_pcm *)VAR_1;
 int VAR_3, VAR_4;

 FUNC_3(&VAR_2->timer_lock);

 VAR_3 = FUNC_1(VAR_2, 0);
 if (VAR_3 < VAR_2->last_ptr)
  VAR_4 = VAR_3 + VAR_2->buf_size - VAR_2->last_ptr;
 else
  VAR_4 = VAR_3 - VAR_2->last_ptr;
 VAR_2->period_pos += VAR_4;
 VAR_2->last_ptr = VAR_3;


 VAR_2->timer.expires = VAR_0 + 1;
 FUNC_0(&VAR_2->timer);


 if (VAR_2->period_pos >= (int)VAR_2->period_size) {
  VAR_2->period_pos %= VAR_2->period_size;
  FUNC_4(&VAR_2->timer_lock);
  FUNC_2(VAR_2->substream);
  return;
 }
 FUNC_4(&VAR_2->timer_lock);
}
