
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct fsi_priv {int dummy; } ;
struct TYPE_6__ {struct fsi_priv fsib; struct fsi_priv fsia; } ;
struct TYPE_5__ {TYPE_1__* cpu_dai; } ;
struct TYPE_4__ {int id; } ;


 TYPE_3__* VAR_0 ;

__attribute__((used)) static struct fsi_priv *FUNC_0(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2;
 struct fsi_priv *VAR_3 = ((void*)0);

 if (!VAR_1 || !VAR_0)
  return ((void*)0);

 VAR_2 = VAR_1->private_data;
 switch (VAR_2->dai->cpu_dai->id) {
 case 0:
  VAR_3 = &VAR_0->fsia;
  break;
 case 1:
  VAR_3 = &VAR_0->fsib;
  break;
 }

 return VAR_3;
}
