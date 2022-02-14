
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssi_priv {int inuse; } ;
struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {size_t id; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct ssi_priv* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2,
         struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct ssi_priv *VAR_5 = &VAR_1[VAR_4->dai->cpu_dai->id];
 if (VAR_5->inuse) {
  FUNC_0("ssi: already in use!\n");
  return -VAR_0;
 } else
  VAR_5->inuse = 1;
 return 0;
}
