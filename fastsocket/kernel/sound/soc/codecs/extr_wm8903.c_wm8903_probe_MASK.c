
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (struct snd_soc_device*) ;
 int FUNC_5 (struct snd_soc_device*) ;
 int FUNC_6 (struct snd_soc_device*) ;
 int FUNC_7 (struct snd_soc_device*,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct snd_soc_device *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = 0;

 if (!VAR_2) {
  FUNC_1(&VAR_4->dev, "I2C device not yet probed\n");
  goto err;
 }

 VAR_5->card->codec = VAR_2;


 VAR_6 = FUNC_7(VAR_5, VAR_0, VAR_1);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev, "failed to create pcms\n");
  goto err;
 }

 FUNC_3(VAR_5->card->codec, VAR_3,
    FUNC_0(VAR_3));
 FUNC_8(VAR_5->card->codec);

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_4->dev, "wm8903: failed to register card\n");
  goto card_err;
 }

 return VAR_6;

card_err:
 FUNC_5(VAR_5);
 FUNC_4(VAR_5);
err:
 return VAR_6;
}
