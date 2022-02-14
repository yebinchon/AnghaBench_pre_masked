
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_platform {TYPE_2__* pcm_ops; } ;
struct snd_soc_pcm_runtime {struct snd_soc_dai_link* dai; struct snd_soc_device* socdev; } ;
struct snd_soc_device {struct snd_soc_card* card; } ;
struct snd_soc_dai_link {TYPE_1__* ops; struct snd_soc_dai* codec_dai; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {TYPE_3__* ops; } ;
struct snd_soc_codec {int active; } ;
struct snd_soc_card {struct snd_soc_codec* codec; struct snd_soc_platform* platform; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_6__ {int (* hw_free ) (struct snd_pcm_substream*,struct snd_soc_dai*) ;} ;
struct TYPE_5__ {int (* hw_free ) (struct snd_pcm_substream*) ;} ;
struct TYPE_4__ {int (* hw_free ) (struct snd_pcm_substream*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_soc_dai*,int) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*,struct snd_soc_dai*) ;
 int FUNC_6 (struct snd_pcm_substream*,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_device *VAR_3 = VAR_2->socdev;
 struct snd_soc_dai_link *VAR_4 = VAR_2->dai;
 struct snd_soc_card *VAR_5 = VAR_3->card;
 struct snd_soc_platform *VAR_6 = VAR_5->platform;
 struct snd_soc_dai *VAR_7 = VAR_4->cpu_dai;
 struct snd_soc_dai *VAR_8 = VAR_4->codec_dai;
 struct snd_soc_codec *VAR_9 = VAR_5->codec;

 FUNC_0(&VAR_0);


 if (!VAR_9->active)
  FUNC_2(VAR_8, 1);


 if (VAR_4->ops && VAR_4->ops->hw_free)
  VAR_4->ops->hw_free(VAR_1);


 if (VAR_6->pcm_ops->hw_free)
  VAR_6->pcm_ops->hw_free(VAR_1);


 if (VAR_8->ops->hw_free)
  VAR_8->ops->hw_free(VAR_1, VAR_8);

 if (VAR_7->ops->hw_free)
  VAR_7->ops->hw_free(VAR_1, VAR_7);

 FUNC_1(&VAR_0);
 return 0;
}
