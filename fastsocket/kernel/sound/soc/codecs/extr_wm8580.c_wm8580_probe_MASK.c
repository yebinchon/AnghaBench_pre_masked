
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int dev; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_device*) ;
 int FUNC_5 (struct snd_soc_device*) ;
 int FUNC_6 (struct snd_soc_device*) ;
 int FUNC_7 (struct snd_soc_device*,int ,int ) ;
 int FUNC_8 (struct snd_soc_codec*) ;
 struct snd_soc_codec* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct snd_soc_device *VAR_6 = FUNC_2(VAR_5);
 struct snd_soc_codec *VAR_7;
 int VAR_8 = 0;

 if (VAR_3 == ((void*)0)) {
  FUNC_1(VAR_5->dev, "Codec device not registered\n");
  return -VAR_0;
 }

 VAR_6->card->codec = VAR_3;
 VAR_7 = VAR_3;


 VAR_8 = FUNC_7(VAR_6, VAR_1, VAR_2);
 if (VAR_8 < 0) {
  FUNC_1(VAR_7->dev, "failed to create pcms: %d\n", VAR_8);
  goto pcm_err;
 }

 FUNC_3(VAR_7, VAR_4,
        FUNC_0(VAR_4));
 FUNC_8(VAR_7);
 VAR_8 = FUNC_6(VAR_6);
 if (VAR_8 < 0) {
  FUNC_1(VAR_7->dev, "failed to register card: %d\n", VAR_8);
  goto card_err;
 }

 return VAR_8;

card_err:
 FUNC_5(VAR_6);
 FUNC_4(VAR_6);
pcm_err:
 return VAR_8;
}
