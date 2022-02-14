
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8k_pcm {int timer_lock; scalar_t__ timer_running; int timer; struct snd_emu8000* emu; } ;
struct snd_emu8000 {int dummy; } ;


 int FUNC_0 (struct snd_emu8000*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_emu8k_pcm *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct snd_emu8000 *VAR_3 = VAR_0->emu;

 FUNC_0(VAR_3, VAR_1, 0x807F);


 FUNC_2(&VAR_0->timer_lock, VAR_2);
 if (VAR_0->timer_running) {
  FUNC_1(&VAR_0->timer);
  VAR_0->timer_running = 0;
 }
 FUNC_3(&VAR_0->timer_lock, VAR_2);
}
