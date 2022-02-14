
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct snd_pcm_substream* trigger_master; } ;



__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_0, int VAR_1)
{
 VAR_0->runtime->trigger_master = VAR_0;
 return 0;
}
