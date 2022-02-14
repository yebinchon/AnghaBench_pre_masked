
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uda1380_platform_data {int dac_clk; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {TYPE_2__* dev; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {struct uda1380_platform_data* platform_data; } ;
struct TYPE_3__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_1 (TYPE_2__*,char*,...) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_4 (struct snd_soc_device*) ;
 int FUNC_5 (struct snd_soc_device*) ;
 int FUNC_6 (struct snd_soc_device*) ;
 int FUNC_7 (struct snd_soc_device*,int ,int ) ;
 int FUNC_8 (struct snd_soc_codec*) ;
 struct snd_soc_codec* VAR_6 ;
 int FUNC_9 (struct snd_soc_codec*,int ) ;
 int VAR_7 ;
 int FUNC_10 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct snd_soc_device *VAR_9 = FUNC_2(VAR_8);
 struct snd_soc_codec *VAR_10;
 struct uda1380_platform_data *VAR_11;
 int VAR_12 = 0;

 if (VAR_6 == ((void*)0)) {
  FUNC_1(&VAR_8->dev, "Codec device not registered\n");
  return -VAR_0;
 }

 VAR_9->card->codec = VAR_6;
 VAR_10 = VAR_6;
 VAR_11 = VAR_10->dev->platform_data;


 VAR_12 = FUNC_7(VAR_9, VAR_2, VAR_3);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10->dev, "failed to create pcms: %d\n", VAR_12);
  goto pcm_err;
 }


 FUNC_9(VAR_10, VAR_4);

 switch (VAR_11->dac_clk) {
 case 129:
  FUNC_10(VAR_10, VAR_5, 0);
  break;
 case 128:
  FUNC_10(VAR_10, VAR_5, VAR_1);
  break;
 }

 FUNC_3(VAR_10, VAR_7,
    FUNC_0(VAR_7));
 FUNC_8(VAR_10);
 VAR_12 = FUNC_6(VAR_9);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10->dev, "failed to register card: %d\n", VAR_12);
  goto card_err;
 }

 return VAR_12;

card_err:
 FUNC_5(VAR_9);
 FUNC_4(VAR_9);
pcm_err:
 return VAR_12;
}
