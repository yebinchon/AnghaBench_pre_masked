
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_priv {int dummy; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int dapm_paths; int dapm_widgets; int mutex; struct twl4030_priv* private_data; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_soc_codec*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 struct snd_soc_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct snd_soc_device*) ;
 struct snd_soc_device* VAR_2 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct snd_soc_device *VAR_4 = FUNC_4(VAR_3);
 struct snd_soc_codec *VAR_5;
 struct twl4030_priv *VAR_6;

 VAR_5 = FUNC_2(sizeof(struct snd_soc_codec), VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_2(sizeof(struct twl4030_priv), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_5);
  return -VAR_0;
 }

 VAR_5->private_data = VAR_6;
 VAR_4->card->codec = VAR_5;
 FUNC_3(&VAR_5->mutex);
 FUNC_0(&VAR_5->dapm_widgets);
 FUNC_0(&VAR_5->dapm_paths);

 VAR_2 = VAR_4;
 FUNC_5(VAR_4);

 return 0;
}
