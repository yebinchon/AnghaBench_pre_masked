
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {int dev; TYPE_1__* card; struct aic26* codec_data; } ;
struct snd_soc_codec {int dummy; } ;
struct platform_device {int dev; } ;
struct aic26 {struct snd_soc_codec codec; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 struct snd_soc_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_7 (struct snd_soc_device*) ;
 int FUNC_8 (struct snd_soc_device*) ;
 int FUNC_9 (struct snd_soc_device*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct snd_soc_device *VAR_5 = FUNC_5(VAR_4);
 struct snd_soc_codec *VAR_6;
 struct aic26 *VAR_7;
 int VAR_8, VAR_9;

 FUNC_4(&VAR_4->dev, "Probing AIC26 SoC CODEC driver\n");
 FUNC_2(&VAR_4->dev, "socdev=%p\n", VAR_5);
 FUNC_2(&VAR_4->dev, "codec_data=%p\n", VAR_5->codec_data);



 VAR_7 = VAR_5->codec_data;
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_4->dev, "aic26: missing codec pointer\n");
  return -VAR_0;
 }
 VAR_6 = &VAR_7->codec;
 VAR_5->card->codec = VAR_6;

 FUNC_2(&VAR_4->dev, "Registering PCMs, dev=%p, socdev->dev=%p\n",
  &VAR_4->dev, VAR_5->dev);

 VAR_8 = FUNC_9(VAR_5, VAR_1, VAR_2);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_4->dev, "aic26: failed to create pcms\n");
  return -VAR_0;
 }


 FUNC_2(&VAR_4->dev, "Registering controls\n");
 VAR_9 = FUNC_6(VAR_6, VAR_3,
   FUNC_0(VAR_3));
 FUNC_1(VAR_9 < 0);


 FUNC_2(&VAR_4->dev, "Registering card\n");
 VAR_8 = FUNC_8(VAR_5);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_4->dev, "aic26: failed to register card\n");
  goto card_err;
 }
 return 0;

 card_err:
 FUNC_7(VAR_5);
 return VAR_8;
}
