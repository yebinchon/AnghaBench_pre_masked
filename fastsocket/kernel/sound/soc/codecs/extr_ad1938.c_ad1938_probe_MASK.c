
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
 struct snd_soc_codec* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 struct snd_soc_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_6 (struct snd_soc_device*) ;
 int FUNC_7 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_8 (struct snd_soc_codec*) ;
 int FUNC_9 (struct snd_soc_device*) ;
 int FUNC_10 (struct snd_soc_device*) ;
 int FUNC_11 (struct snd_soc_device*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct snd_soc_device *VAR_9 = FUNC_3(VAR_8);
 struct snd_soc_codec *VAR_10;
 int VAR_11 = 0;

 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_8->dev, "Codec device not registered\n");
  return -VAR_0;
 }

 VAR_9->card->codec = VAR_4;
 VAR_10 = VAR_4;


 VAR_11 = FUNC_11(VAR_9, VAR_1, VAR_2);
 if (VAR_11 < 0) {
  FUNC_2(VAR_10->dev, "failed to create pcms: %d\n", VAR_11);
  goto pcm_err;
 }

 FUNC_4(VAR_10, VAR_6,
        FUNC_0(VAR_6));
 FUNC_7(VAR_10, VAR_5,
      FUNC_0(VAR_5));
 FUNC_5(VAR_10, VAR_7, FUNC_0(VAR_7));
 FUNC_8(VAR_10);

 FUNC_1(VAR_10, VAR_3);

 VAR_11 = FUNC_10(VAR_9);
 if (VAR_11 < 0) {
  FUNC_2(VAR_10->dev, "failed to register card: %d\n", VAR_11);
  goto card_err;
 }

 return VAR_11;

card_err:
 FUNC_9(VAR_9);
 FUNC_6(VAR_9);
pcm_err:
 return VAR_11;
}
