
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai_link* dai; struct snd_soc_device* socdev; } ;
struct snd_soc_device {struct snd_soc_card* card; } ;
struct snd_soc_dai_link {int rate; scalar_t__ symmetric_rates; struct snd_soc_dai* codec_dai; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {scalar_t__ symmetric_rates; } ;
struct snd_soc_card {int dev; } ;
struct snd_pcm_substream {int runtime; struct snd_soc_pcm_runtime* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_soc_device *VAR_3 = VAR_2->socdev;
 struct snd_soc_card *VAR_4 = VAR_3->card;
 struct snd_soc_dai_link *VAR_5 = VAR_2->dai;
 struct snd_soc_dai *VAR_6 = VAR_5->cpu_dai;
 struct snd_soc_dai *VAR_7 = VAR_5->codec_dai;
 int VAR_8;

 if (VAR_7->symmetric_rates || VAR_6->symmetric_rates ||
     VAR_5->symmetric_rates) {
  FUNC_0(VAR_4->dev, "Symmetry forces %dHz rate\n",
   VAR_5->rate);

  VAR_8 = FUNC_2(VAR_1->runtime,
         VAR_0,
         VAR_5->rate,
         VAR_5->rate);
  if (VAR_8 < 0) {
   FUNC_1(VAR_4->dev,
    "Unable to apply rate symmetry constraint: %d\n", VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
