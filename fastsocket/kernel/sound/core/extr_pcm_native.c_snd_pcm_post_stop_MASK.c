
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ timer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int tsleep; int sleep; TYPE_1__* status; int trigger_tstamp; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 if (VAR_3->status->state != VAR_2) {
  FUNC_0(VAR_1);
  if (VAR_1->timer)
   FUNC_1(VAR_1->timer, VAR_0,
      &VAR_3->trigger_tstamp);
  VAR_3->status->state = VAR_2;
 }
 FUNC_2(&VAR_3->sleep);
 FUNC_2(&VAR_3->tsleep);
}
