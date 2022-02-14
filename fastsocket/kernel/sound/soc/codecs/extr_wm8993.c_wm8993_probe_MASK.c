
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_retune_configs; int lineout2_diff; int lineout1_diff; } ;
struct wm8993_priv {TYPE_2__ pdata; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int * dev; struct wm8993_priv* private_data; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {void* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct snd_soc_device* FUNC_3 (struct platform_device*) ;
 int VAR_2 ;
 int FUNC_4 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_6 (struct snd_soc_device*) ;
 int FUNC_7 (struct snd_soc_codec*,int ,int ) ;
 int FUNC_8 (struct snd_soc_codec*) ;
 int FUNC_9 (struct snd_soc_device*) ;
 int FUNC_10 (struct snd_soc_device*) ;
 int FUNC_11 (struct snd_soc_device*,int ,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (struct snd_soc_codec*) ;
 int FUNC_13 (struct snd_soc_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_7)
{
 struct snd_soc_device *VAR_8 = FUNC_3(VAR_7);
 struct snd_soc_codec *VAR_9;
 struct wm8993_priv *VAR_10;
 int VAR_11 = 0;

 if (!VAR_3) {
  FUNC_2(&VAR_7->dev, "I2C device not yet probed\n");
  goto err;
 }

 VAR_8->card->codec = VAR_3;
 VAR_9 = VAR_3;
 VAR_10 = VAR_9->private_data;

 VAR_11 = FUNC_11(VAR_8, VAR_0, VAR_1);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9->dev, "failed to create pcms\n");
  goto err;
 }

 FUNC_4(VAR_9, VAR_6,
        FUNC_0(VAR_6));
 if (VAR_10->pdata.num_retune_configs != 0) {
  FUNC_1(VAR_9->dev, "Using ReTune Mobile\n");
 } else {
  FUNC_1(VAR_9->dev, "No ReTune Mobile, using normal EQ\n");
  FUNC_4(VAR_9, VAR_5,
         FUNC_0(VAR_5));
 }

 FUNC_7(VAR_9, VAR_4,
      FUNC_0(VAR_4));
 FUNC_12(VAR_9);

 FUNC_5(VAR_9, VAR_2, FUNC_0(VAR_2));
 FUNC_13(VAR_9, VAR_10->pdata.lineout1_diff,
        VAR_10->pdata.lineout2_diff);

 FUNC_8(VAR_9);

 VAR_11 = FUNC_10(VAR_8);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9->dev, "failed to register card\n");
  goto card_err;
 }

 return VAR_11;

card_err:
 FUNC_9(VAR_8);
 FUNC_6(VAR_8);
err:
 return VAR_11;
}
