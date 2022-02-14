
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
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_5 (struct snd_soc_device*) ;
 int FUNC_6 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_7 (struct snd_soc_codec*) ;
 int FUNC_8 (struct snd_soc_device*) ;
 int FUNC_9 (struct snd_soc_device*) ;
 int FUNC_10 (struct snd_soc_device*,int ,int ) ;
 struct snd_soc_codec* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct snd_soc_device *VAR_8 = FUNC_2(VAR_7);
 struct snd_soc_codec *VAR_9;
 int VAR_10 = 0;

 if (VAR_4 == ((void*)0)) {
  FUNC_1(VAR_7->dev, "Codec device not registered\n");
  return -VAR_0;
 }

 VAR_8->card->codec = VAR_4;
 VAR_9 = VAR_4;


 VAR_10 = FUNC_10(VAR_8, VAR_1, VAR_2);
 if (VAR_10 < 0) {
  FUNC_1(VAR_9->dev, "failed to create pcms: %d\n", VAR_10);
  goto pcm_err;
 }

 FUNC_3(VAR_9, VAR_6,
    FUNC_0(VAR_6));
 FUNC_6(VAR_9, VAR_5,
      FUNC_0(VAR_5));
 FUNC_4(VAR_9, VAR_3, FUNC_0(VAR_3));
 FUNC_7(VAR_9);

 VAR_10 = FUNC_9(VAR_8);
 if (VAR_10 < 0) {
  FUNC_1(VAR_9->dev, "failed to register card: %d\n", VAR_10);
  goto card_err;
 }

 return VAR_10;

card_err:
 FUNC_8(VAR_8);
 FUNC_5(VAR_8);
pcm_err:
 return VAR_10;
}
