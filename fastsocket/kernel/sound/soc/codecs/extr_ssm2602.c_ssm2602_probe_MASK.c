
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssm2602_setup_data {scalar_t__ i2c_address; } ;
struct ssm2602_priv {int dummy; } ;
struct snd_soc_device {TYPE_1__* card; struct ssm2602_setup_data* codec_data; } ;
struct snd_soc_codec {scalar_t__ hw_write; int dapm_paths; int dapm_widgets; int mutex; struct ssm2602_priv* private_data; } ;
struct platform_device {int dummy; } ;
typedef scalar_t__ hw_write_t ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct snd_soc_codec*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 struct snd_soc_device* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct platform_device*,struct ssm2602_setup_data*) ;
 struct snd_soc_device* VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct snd_soc_device *VAR_6 = FUNC_4(VAR_5);
 struct ssm2602_setup_data *VAR_7;
 struct snd_soc_codec *VAR_8;
 struct ssm2602_priv *VAR_9;
 int VAR_10 = 0;

 FUNC_5("ssm2602 Audio Codec %s", VAR_2);

 VAR_7 = VAR_6->codec_data;
 VAR_8 = FUNC_2(sizeof(struct snd_soc_codec), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_2(sizeof(struct ssm2602_priv), VAR_1);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_8);
  return -VAR_0;
 }

 VAR_8->private_data = VAR_9;
 VAR_6->card->codec = VAR_8;
 FUNC_3(&VAR_8->mutex);
 FUNC_0(&VAR_8->dapm_widgets);
 FUNC_0(&VAR_8->dapm_paths);

 VAR_4 = VAR_6;
 return VAR_10;
}
