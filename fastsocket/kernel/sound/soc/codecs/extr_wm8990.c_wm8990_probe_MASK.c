
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8990_setup_data {scalar_t__ i2c_address; } ;
struct wm8990_priv {struct wm8990_priv* private_data; scalar_t__ hw_write; int dapm_paths; int dapm_widgets; int mutex; } ;
struct snd_soc_device {TYPE_1__* card; struct wm8990_setup_data* codec_data; } ;
struct snd_soc_codec {struct snd_soc_codec* private_data; scalar_t__ hw_write; int dapm_paths; int dapm_widgets; int mutex; } ;
struct platform_device {int dummy; } ;
typedef scalar_t__ hw_write_t ;
struct TYPE_2__ {struct wm8990_priv* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct wm8990_priv*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 struct snd_soc_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct platform_device*,struct wm8990_setup_data*) ;
 struct snd_soc_device* VAR_5 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_6)
{
 struct snd_soc_device *VAR_7 = FUNC_4(VAR_6);
 struct wm8990_setup_data *VAR_8;
 struct snd_soc_codec *VAR_9;
 struct wm8990_priv *VAR_10;
 int VAR_11;

 FUNC_5("WM8990 Audio Codec %s\n", VAR_3);

 VAR_8 = VAR_7->codec_data;
 VAR_9 = FUNC_2(sizeof(struct snd_soc_codec), VAR_2);
 if (VAR_9 == ((void*)0))
  return -VAR_1;

 VAR_10 = FUNC_2(sizeof(struct wm8990_priv), VAR_2);
 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_9);
  return -VAR_1;
 }

 VAR_9->private_data = VAR_10;
 VAR_7->card->codec = VAR_9;
 FUNC_3(&VAR_9->mutex);
 FUNC_0(&VAR_9->dapm_widgets);
 FUNC_0(&VAR_9->dapm_paths);
 VAR_5 = VAR_7;

 VAR_11 = -VAR_0;
 if (VAR_11 != 0) {
  FUNC_1(VAR_9->private_data);
  FUNC_1(VAR_9);
 }
 return VAR_11;
}
