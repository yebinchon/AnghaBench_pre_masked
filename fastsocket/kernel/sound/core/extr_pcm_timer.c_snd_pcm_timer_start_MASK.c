
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int dummy; } ;
struct snd_pcm_substream {int timer_running; } ;


 struct snd_pcm_substream* FUNC_0 (struct snd_timer*) ;

__attribute__((used)) static int FUNC_1(struct snd_timer * VAR_0)
{
 struct snd_pcm_substream *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_1->timer_running = 1;
 return 0;
}
