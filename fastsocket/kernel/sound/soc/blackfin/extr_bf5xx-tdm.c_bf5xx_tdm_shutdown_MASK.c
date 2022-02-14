
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int active; } ;
struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {scalar_t__ configured; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct snd_pcm_substream *VAR_1,
 struct snd_soc_dai *VAR_2)
{

 if (!VAR_2->active)
  VAR_0.configured = 0;
}
