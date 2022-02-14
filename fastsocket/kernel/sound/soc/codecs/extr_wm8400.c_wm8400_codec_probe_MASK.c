
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_codec {char* name; int (* read ) (struct snd_soc_codec*,int ) ;int num_dai; int dapm_paths; int dapm_widgets; int mutex; int reg_cache_size; TYPE_2__* dai; int set_bias_level; int bias_level; int (* write ) (struct snd_soc_codec*,int ,int) ;int owner; int * dev; void* control_data; struct wm8400_priv* private_data; } ;
struct wm8400_priv {int work; TYPE_1__* wm8400; struct snd_soc_codec codec; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int * dev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,char*,int) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (struct wm8400_priv*) ;
 struct wm8400_priv* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int * VAR_13 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int *) ;
 struct snd_soc_codec* VAR_14 ;
 int FUNC_11 (struct snd_soc_codec*) ;
 TYPE_2__ VAR_15 ;
 int VAR_16 ;
 int FUNC_12 (struct snd_soc_codec*,int ) ;
 int VAR_17 ;
 int FUNC_13 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_18)
{
 struct wm8400_priv *VAR_19;
 int VAR_20;
 u16 VAR_21;
 struct snd_soc_codec *VAR_22;

 VAR_19 = FUNC_6(sizeof(struct wm8400_priv), VAR_2);
 if (VAR_19 == ((void*)0))
  return -VAR_1;

 VAR_22 = &VAR_19->codec;
 VAR_22->private_data = VAR_19;
 VAR_22->control_data = FUNC_4(&VAR_18->dev);
 VAR_19->wm8400 = FUNC_4(&VAR_18->dev);

 VAR_20 = FUNC_9(VAR_19->wm8400->dev,
     FUNC_0(VAR_13), &VAR_13[0]);
 if (VAR_20 != 0) {
  FUNC_3(&VAR_18->dev, "Failed to get regulators: %d\n", VAR_20);
         goto err;
 }

 VAR_22->dev = &VAR_18->dev;
 VAR_15.dev = &VAR_18->dev;

 VAR_22->name = "WM8400";
 VAR_22->owner = VAR_4;
 VAR_22->read = FUNC_12;
 VAR_22->write = FUNC_13;
 VAR_22->bias_level = VAR_3;
 VAR_22->set_bias_level = VAR_17;
 VAR_22->dai = &VAR_15;
 VAR_22->num_dai = 1;
 VAR_22->reg_cache_size = VAR_10;
 FUNC_7(&VAR_22->mutex);
 FUNC_1(&VAR_22->dapm_widgets);
 FUNC_1(&VAR_22->dapm_paths);
 FUNC_2(&VAR_19->work, VAR_16);

 FUNC_11(VAR_22);

 VAR_21 = FUNC_12(VAR_22, VAR_9);
 FUNC_13(VAR_22, VAR_9, VAR_21 | VAR_5);


 VAR_21 = FUNC_12(VAR_22, VAR_7);
 FUNC_13(VAR_22, VAR_7,
       VAR_21 & VAR_6);
 VAR_21 = FUNC_12(VAR_22, VAR_11);
 FUNC_13(VAR_22, VAR_11,
       VAR_21 & VAR_6);

 FUNC_13(VAR_22, VAR_8, 0x50 | (1<<8));
 FUNC_13(VAR_22, VAR_12, 0x50 | (1<<8));

 VAR_14 = VAR_22;

 if (!FUNC_10(&VAR_19->work)) {
  VAR_20 = -VAR_0;
  goto err_regulator;
 }

 return 0;

err_regulator:
 VAR_14 = ((void*)0);
 FUNC_8(FUNC_0(VAR_13), VAR_13);
err:
 FUNC_5(VAR_19);
 return VAR_20;
}
