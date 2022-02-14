
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct snd_soc_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct snd_soc_device*) ;
 int FUNC_3 (struct snd_soc_device*) ;
 int FUNC_4 (struct snd_soc_device*) ;
 int FUNC_5 (struct snd_soc_device*,int ,int ) ;
 int FUNC_6 (struct snd_soc_codec*) ;
 int FUNC_7 (struct snd_soc_codec*) ;
 struct snd_soc_codec* VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct snd_soc_device *VAR_5 = FUNC_1(VAR_4);
 struct snd_soc_codec *VAR_6;
 int VAR_7;

 if (!VAR_3) {
  FUNC_0(&VAR_4->dev, "wm8400 not yet discovered\n");
  return -VAR_0;
 }
 VAR_6 = VAR_3;

 VAR_5->card->codec = VAR_6;


 VAR_7 = FUNC_5(VAR_5, VAR_1, VAR_2);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_4->dev, "failed to create pcms\n");
  goto pcm_err;
 }

 FUNC_6(VAR_6);
 FUNC_7(VAR_6);

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_4->dev, "failed to register card\n");
  goto card_err;
 }

 return VAR_7;

card_err:
 FUNC_3(VAR_5);
 FUNC_2(VAR_5);
pcm_err:
 return VAR_7;
}
