
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8900_priv {int fll_out; int fll_in; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {struct wm8900_priv* private_data; } ;
struct platform_device {int dev; } ;
typedef int pm_message_t ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct snd_soc_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1, pm_message_t VAR_2)
{
 struct snd_soc_device *VAR_3 = FUNC_1(VAR_1);
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;
 struct wm8900_priv *VAR_5 = VAR_4->private_data;
 int VAR_6 = VAR_5->fll_out;
 int VAR_7 = VAR_5->fll_in;
 int VAR_8;


 VAR_8 = FUNC_3(VAR_4, 0, 0, 0);
 if (VAR_8 != 0) {
  FUNC_0(&VAR_1->dev, "Failed to stop FLL\n");
  return VAR_8;
 }

 VAR_5->fll_out = VAR_6;
 VAR_5->fll_in = VAR_7;

 FUNC_2(VAR_4, VAR_0);

 return 0;
}
