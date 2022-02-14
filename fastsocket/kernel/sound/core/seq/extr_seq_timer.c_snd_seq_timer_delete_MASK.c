
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_timer {scalar_t__ running; } ;


 int FUNC_0 (struct snd_seq_timer*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct snd_seq_timer*) ;
 int FUNC_3 (struct snd_seq_timer*) ;

void FUNC_4(struct snd_seq_timer **VAR_0)
{
 struct snd_seq_timer *VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);

 if (VAR_1 == ((void*)0)) {
  FUNC_1("oops: snd_seq_timer_delete() called with NULL timer\n");
  return;
 }
 VAR_1->running = 0;


 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 FUNC_0(VAR_1);
}
