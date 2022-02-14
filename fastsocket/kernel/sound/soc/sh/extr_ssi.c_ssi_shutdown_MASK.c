
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssi_priv {scalar_t__ inuse; } ;
struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {size_t id; } ;


 struct ssi_priv* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct ssi_priv *VAR_4 = &VAR_0[VAR_3->dai->cpu_dai->id];

 VAR_4->inuse = 0;
}
