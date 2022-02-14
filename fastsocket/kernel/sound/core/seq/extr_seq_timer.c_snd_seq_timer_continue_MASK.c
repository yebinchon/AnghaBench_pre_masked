
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {int running; int last_update; int ticks; int timeri; int initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct snd_seq_timer*) ;
 int FUNC_2 (struct snd_seq_timer*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct snd_seq_timer * VAR_2)
{
 if (! VAR_2->timeri)
  return -VAR_1;
 if (VAR_2->running)
  return -VAR_0;
 if (! VAR_2->initialized) {
  FUNC_2(VAR_2);
  if (FUNC_1(VAR_2) < 0)
   return -VAR_1;
 }
 FUNC_3(VAR_2->timeri, VAR_2->ticks);
 VAR_2->running = 1;
 FUNC_0(&VAR_2->last_update);
 return 0;
}
