
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_platform {int (* remove ) (struct platform_device*) ;} ;
struct snd_soc_device {struct snd_soc_codec_device* codec_dev; struct snd_soc_card* card; } ;
struct snd_soc_dai {int (* remove ) (struct platform_device*,struct snd_soc_dai*) ;} ;
struct snd_soc_codec_device {int (* remove ) (struct platform_device*) ;} ;
struct snd_soc_card {int num_links; int (* remove ) (struct platform_device*) ;TYPE_1__* dai_link; int delayed_work; int instantiated; struct snd_soc_platform* platform; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 struct snd_soc_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,struct snd_soc_dai*) ;
 int FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 int VAR_1;
 struct snd_soc_device *VAR_2 = FUNC_0(VAR_0);
 struct snd_soc_card *VAR_3 = VAR_2->card;
 struct snd_soc_platform *VAR_4 = VAR_3->platform;
 struct snd_soc_codec_device *VAR_5 = VAR_2->codec_dev;

 if (!VAR_3->instantiated)
  return 0;

 FUNC_1(&VAR_3->delayed_work);

 if (VAR_4->remove)
  VAR_4->remove(VAR_0);

 if (VAR_5->remove)
  VAR_5->remove(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_3->num_links; VAR_1++) {
  struct snd_soc_dai *VAR_6 = VAR_3->dai_link[VAR_1].cpu_dai;
  if (VAR_6->remove)
   VAR_6->remove(VAR_0, VAR_6);
 }

 if (VAR_3->remove)
  VAR_3->remove(VAR_0);

 FUNC_2(VAR_3);

 return 0;
}
