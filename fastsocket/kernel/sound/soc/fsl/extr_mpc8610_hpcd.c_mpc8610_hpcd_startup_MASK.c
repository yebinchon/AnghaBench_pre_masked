
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* socdev; TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_5__* pcm; struct snd_soc_pcm_runtime* private_data; } ;
struct mpc8610_hpcd_data {int codec_clk_direction; int clk_frequency; int cpu_clk_direction; int dai_format; } ;
struct TYPE_10__ {TYPE_4__* card; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {TYPE_2__* dev; } ;
struct TYPE_7__ {struct mpc8610_hpcd_data* platform_data; } ;
struct TYPE_6__ {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_dai*,int ) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_soc_pcm_runtime *VAR_1 = VAR_0->private_data;
 struct snd_soc_dai *VAR_2 = VAR_1->dai->codec_dai;
 struct snd_soc_dai *VAR_3 = VAR_1->dai->cpu_dai;
 struct mpc8610_hpcd_data *VAR_4 =
  VAR_1->socdev->dev->platform_data;
 int VAR_5 = 0;


 VAR_5 = FUNC_1(VAR_3, VAR_4->dai_format);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->pcm->card->dev,
   "could not set CPU driver audio format\n");
  return VAR_5;
 }


 VAR_5 = FUNC_1(VAR_2, VAR_4->dai_format);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->pcm->card->dev,
   "could not set codec driver audio format\n");
  return VAR_5;
 }





 VAR_5 = FUNC_2(VAR_3, 0,
     VAR_4->clk_frequency,
     VAR_4->cpu_clk_direction);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->pcm->card->dev,
   "could not set CPU driver clock parameters\n");
  return VAR_5;
 }





 VAR_5 = FUNC_2(VAR_2, 0,
     VAR_4->clk_frequency,
     VAR_4->codec_clk_direction);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->pcm->card->dev,
   "could not set codec driver clock params\n");
  return VAR_5;
 }

 return 0;
}
