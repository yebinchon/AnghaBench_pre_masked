
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_codec {char* name; int (* read ) (struct snd_soc_codec*,int ) ;int num_dai; int reg_cache_size; int delayed_work; int dev; TYPE_1__** reg_cache; struct wm8753_priv* private_data; TYPE_1__* dai; int (* set_bias_level ) (struct snd_soc_codec*,int ) ;int bias_level; int (* write ) (struct snd_soc_codec*,int ,int) ;int owner; int dapm_paths; int dapm_widgets; int mutex; } ;
struct wm8753_priv {TYPE_1__* reg_cache; struct snd_soc_codec codec; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct wm8753_priv*) ;
 int FUNC_5 (TYPE_1__**,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct snd_soc_codec*) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (struct snd_soc_codec*) ;
 struct snd_soc_codec* VAR_15 ;
 TYPE_1__* VAR_16 ;
 int FUNC_13 (struct snd_soc_codec*,int ) ;
 int VAR_17 ;
 int FUNC_14 (struct snd_soc_codec*) ;
 int FUNC_15 (struct snd_soc_codec*,int ) ;
 int VAR_18 ;
 int FUNC_16 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_17(struct wm8753_priv *VAR_19)
{
 int VAR_20, VAR_21;
 struct snd_soc_codec *VAR_22 = &VAR_19->codec;
 u16 VAR_23;

 if (VAR_15) {
  FUNC_3(VAR_22->dev, "Multiple WM8753 devices not supported\n");
  VAR_20 = -VAR_0;
  goto err;
 }

 FUNC_7(&VAR_22->mutex);
 FUNC_2(&VAR_22->dapm_widgets);
 FUNC_2(&VAR_22->dapm_paths);

 VAR_22->name = "WM8753";
 VAR_22->owner = VAR_3;
 VAR_22->read = FUNC_13;
 VAR_22->write = FUNC_16;
 VAR_22->bias_level = VAR_2;
 VAR_22->set_bias_level = FUNC_15;
 VAR_22->dai = VAR_16;
 VAR_22->num_dai = 2;
 VAR_22->reg_cache_size = FUNC_0(VAR_19->reg_cache) + 1;
 VAR_22->reg_cache = &VAR_19->reg_cache;
 VAR_22->private_data = VAR_19;

 FUNC_5(VAR_22->reg_cache, VAR_17, sizeof(VAR_19->reg_cache));
 FUNC_1(&VAR_22->delayed_work, VAR_18);

 VAR_20 = FUNC_14(VAR_22);
 if (VAR_20 < 0) {
  FUNC_3(VAR_22->dev, "Failed to issue reset\n");
  goto err;
 }


 FUNC_15(VAR_22, VAR_1);
 FUNC_9(&VAR_22->delayed_work,
         FUNC_6(VAR_14));


 VAR_23 = FUNC_13(VAR_22, VAR_5);
 FUNC_16(VAR_22, VAR_5, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_10);
 FUNC_16(VAR_22, VAR_10, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_4);
 FUNC_16(VAR_22, VAR_4, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_9);
 FUNC_16(VAR_22, VAR_9, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_7);
 FUNC_16(VAR_22, VAR_7, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_12);
 FUNC_16(VAR_22, VAR_12, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_8);
 FUNC_16(VAR_22, VAR_8, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_13);
 FUNC_16(VAR_22, VAR_13, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_6);
 FUNC_16(VAR_22, VAR_6, VAR_23 | 0x0100);
 VAR_23 = FUNC_13(VAR_22, VAR_11);
 FUNC_16(VAR_22, VAR_11, VAR_23 | 0x0100);

 VAR_15 = VAR_22;

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_16); VAR_21++)
  VAR_16[VAR_21].dev = VAR_22->dev;

 VAR_20 = FUNC_10(VAR_22);
 if (VAR_20 != 0) {
  FUNC_3(VAR_22->dev, "Failed to register codec: %d\n", VAR_20);
  goto err;
 }

 VAR_20 = FUNC_11(&VAR_16[0], FUNC_0(VAR_16));
 if (VAR_20 != 0) {
  FUNC_3(VAR_22->dev, "Failed to register DAIs: %d\n", VAR_20);
  goto err_codec;
 }

 return 0;

err_codec:
 FUNC_8(&VAR_22->delayed_work);
 FUNC_12(VAR_22);
err:
 FUNC_4(VAR_19);
 return VAR_20;
}
