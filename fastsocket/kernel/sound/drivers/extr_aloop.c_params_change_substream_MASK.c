
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_runtime {int hw; } ;
struct loopback_pcm {TYPE_2__* cable; TYPE_1__* substream; } ;
struct TYPE_4__ {int hw; } ;
struct TYPE_3__ {struct snd_pcm_runtime* runtime; } ;



__attribute__((used)) static void FUNC_0(struct loopback_pcm *VAR_0,
        struct snd_pcm_runtime *VAR_1)
{
 struct snd_pcm_runtime *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->substream == ((void*)0))
  return;
 VAR_2 = VAR_0->substream->runtime;
 if (VAR_2 == ((void*)0))
  return;
 VAR_2->hw = VAR_0->cable->hw;
}
