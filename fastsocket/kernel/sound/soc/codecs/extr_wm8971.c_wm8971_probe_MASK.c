
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8971_setup_data {scalar_t__ i2c_address; } ;
struct wm8971_priv {struct wm8971_priv* private_data; int delayed_work; int dapm_paths; int dapm_widgets; int mutex; } ;
struct snd_soc_device {TYPE_1__* card; struct wm8971_setup_data* codec_data; } ;
struct snd_soc_codec {struct snd_soc_codec* private_data; int delayed_work; int dapm_paths; int dapm_widgets; int mutex; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct wm8971_priv* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm8971_priv*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 struct snd_soc_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct platform_device*,struct wm8971_setup_data*) ;
 struct snd_soc_device* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct snd_soc_device *VAR_7 = FUNC_7(VAR_6);
 struct wm8971_setup_data *VAR_8;
 struct snd_soc_codec *VAR_9;
 struct wm8971_priv *VAR_10;
 int VAR_11 = 0;

 FUNC_8("WM8971 Audio Codec %s", VAR_2);

 VAR_8 = VAR_7->codec_data;
 VAR_9 = FUNC_5(sizeof(struct snd_soc_codec), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_5(sizeof(struct wm8971_priv), VAR_1);
 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_9);
  return -VAR_0;
 }

 VAR_9->private_data = VAR_10;
 VAR_7->card->codec = VAR_9;
 FUNC_6(&VAR_9->mutex);
 FUNC_1(&VAR_9->dapm_widgets);
 FUNC_1(&VAR_9->dapm_paths);
 VAR_3 = VAR_7;

 FUNC_0(&VAR_9->delayed_work, VAR_4);
 VAR_5 = FUNC_2("wm8971");
 if (VAR_5 == ((void*)0)) {
  FUNC_4(VAR_9->private_data);
  FUNC_4(VAR_9);
  return -VAR_0;
 }
 if (VAR_11 != 0) {
  FUNC_3(VAR_5);
  FUNC_4(VAR_9->private_data);
  FUNC_4(VAR_9);
 }

 return VAR_11;
}
