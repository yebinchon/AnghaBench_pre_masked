
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {TYPE_2__* ops; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_4__ {int (* set_pll ) (struct snd_soc_dai*,int ,int ,int ) ;} ;
struct TYPE_3__ {struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_dai *VAR_3 = VAR_2->dai->codec_dai;


 return VAR_3->ops->set_pll(VAR_3, VAR_0, 0, 0);
}
