
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_pcm_substream* trigger_master; TYPE_1__* status; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 if (VAR_4->status->state == VAR_1)
  return -VAR_0;
 VAR_4->trigger_master = VAR_2;
 return 0;
}
