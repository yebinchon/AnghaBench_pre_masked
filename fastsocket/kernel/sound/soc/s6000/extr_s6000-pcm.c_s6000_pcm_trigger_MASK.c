
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct s6000_pcm_dma_params {int (* trigger ) (struct snd_pcm_substream*,int,int) ;} ;
struct TYPE_4__ {TYPE_1__* cpu_dai; } ;
struct TYPE_3__ {struct s6000_pcm_dma_params* dma_data; } ;


 int VAR_0 ;






 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*,int,int) ;
 int FUNC_3 (struct snd_pcm_substream*,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_1->private_data;
 struct s6000_pcm_dma_params *VAR_4 = VAR_3->dai->cpu_dai->dma_data;
 int VAR_5;

 VAR_5 = VAR_4->trigger(VAR_1, VAR_2, 0);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  VAR_5 = FUNC_0(VAR_1);
  break;
 case 129:
 case 128:
 case 133:
  VAR_5 = FUNC_1(VAR_1);
  break;
 default:
  VAR_5 = -VAR_0;
 }
 if (VAR_5 < 0)
  return VAR_5;

 return VAR_4->trigger(VAR_1, VAR_2, 1);
}
