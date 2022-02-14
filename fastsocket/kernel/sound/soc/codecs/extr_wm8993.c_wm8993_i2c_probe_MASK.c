
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int jd_scthr; int jd_thr; int micbias1_lvl; scalar_t__ lineout2fb; scalar_t__ lineout1fb; int lineout2_diff; int lineout1_diff; } ;
struct snd_soc_codec {char* name; int (* write ) (struct snd_soc_codec*,size_t,int) ;int (* set_bias_level ) (struct snd_soc_codec*,int ) ;int num_dai; TYPE_4__* dev; struct i2c_client* control_data; struct wm8993_priv* private_data; TYPE_1__* dai; int bias_level; int reg_cache_size; TYPE_3__* reg_cache; scalar_t__ hw_write; int read; int dapm_paths; int dapm_widgets; int mutex; } ;
struct wm8993_priv {int class_w_users; TYPE_3__ pdata; TYPE_3__* reg_cache; struct snd_soc_codec codec; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_8__ {unsigned int* platform_data; } ;
struct i2c_client {TYPE_4__ dev; } ;
typedef scalar_t__ hw_write_t ;
struct TYPE_6__ {TYPE_4__* dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 scalar_t__ VAR_28 ;
 int FUNC_3 (struct i2c_client*,struct wm8993_priv*) ;
 int FUNC_4 (struct wm8993_priv*) ;
 struct wm8993_priv* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*,unsigned int*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct snd_soc_codec*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct snd_soc_codec*,int ,int,int) ;
 struct snd_soc_codec* VAR_29 ;
 TYPE_1__ VAR_30 ;
 int VAR_31 ;
 unsigned int FUNC_11 (struct snd_soc_codec*,size_t) ;
 unsigned int* VAR_32 ;
 int FUNC_12 (struct snd_soc_codec*,int ) ;
 int FUNC_13 (struct snd_soc_codec*,size_t,int) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_33,
       const struct i2c_device_id *VAR_34)
{
 struct wm8993_priv *VAR_35;
 struct snd_soc_codec *VAR_36;
 unsigned int VAR_37;
 int VAR_38;

 if (VAR_29) {
  FUNC_2(&VAR_33->dev, "A WM8993 is already registered\n");
  return -VAR_0;
 }

 VAR_35 = FUNC_5(sizeof(struct wm8993_priv), VAR_2);
 if (VAR_35 == ((void*)0))
  return -VAR_1;

 VAR_36 = &VAR_35->codec;
 if (VAR_33->dev.platform_data)
  FUNC_6(&VAR_35->pdata, VAR_33->dev.platform_data,
         sizeof(VAR_35->pdata));

 FUNC_7(&VAR_36->mutex);
 FUNC_1(&VAR_36->dapm_widgets);
 FUNC_1(&VAR_36->dapm_paths);

 VAR_36->name = "WM8993";
 VAR_36->read = VAR_31;
 VAR_36->write = FUNC_13;
 VAR_36->hw_write = (hw_write_t)VAR_28;
 VAR_36->reg_cache = VAR_35->reg_cache;
 VAR_36->reg_cache_size = FUNC_0(VAR_35->reg_cache);
 VAR_36->bias_level = VAR_3;
 VAR_36->set_bias_level = FUNC_12;
 VAR_36->dai = &VAR_30;
 VAR_36->num_dai = 1;
 VAR_36->private_data = VAR_35;

 FUNC_6(VAR_35->reg_cache, VAR_32,
        sizeof(VAR_35->reg_cache));

 FUNC_3(VAR_33, VAR_35);
 VAR_36->control_data = VAR_33;
 VAR_29 = VAR_36;

 VAR_36->dev = &VAR_33->dev;

 VAR_37 = FUNC_11(VAR_36, VAR_26);
 if (VAR_37 != VAR_32[VAR_26]) {
  FUNC_2(VAR_36->dev, "Invalid ID register value %x\n", VAR_37);
  VAR_38 = -VAR_0;
  goto err;
 }

 VAR_38 = FUNC_13(VAR_36, VAR_26, 0xffff);
 if (VAR_38 != 0)
  goto err;


 VAR_35->class_w_users = 2;


 FUNC_10(VAR_36, VAR_25,
       VAR_9, VAR_9);
 FUNC_10(VAR_36, VAR_24,
       VAR_5, VAR_5);



 FUNC_10(VAR_36, VAR_7,
       VAR_10, 0);


 FUNC_10(VAR_36, VAR_8, VAR_27, 0);

 if (!VAR_35->pdata.lineout1_diff)
  FUNC_10(VAR_36, VAR_19,
        VAR_16,
        VAR_16);
 if (!VAR_35->pdata.lineout2_diff)
  FUNC_10(VAR_36, VAR_20,
        VAR_18,
        VAR_18);

 if (VAR_35->pdata.lineout1fb)
  FUNC_10(VAR_36, VAR_6,
        VAR_15, VAR_15);

 if (VAR_35->pdata.lineout2fb)
  FUNC_10(VAR_36, VAR_6,
        VAR_17, VAR_17);



 FUNC_10(VAR_36, VAR_23,
       VAR_11 | VAR_13 |
       VAR_21 | VAR_22,
       VAR_35->pdata.jd_scthr << VAR_12 |
       VAR_35->pdata.jd_thr << VAR_14 |
       VAR_35->pdata.micbias1_lvl |
       VAR_35->pdata.micbias1_lvl << 1);

 VAR_38 = FUNC_12(VAR_36, VAR_4);
 if (VAR_38 != 0)
  goto err;

 VAR_30.dev = VAR_36->dev;

 VAR_38 = FUNC_9(&VAR_30);
 if (VAR_38 != 0)
  goto err_bias;

 VAR_38 = FUNC_8(VAR_36);

 return 0;

err_bias:
 FUNC_12(VAR_36, VAR_3);
err:
 VAR_29 = ((void*)0);
 FUNC_4(VAR_35);
 return VAR_38;
}
