
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {char* name; int num_dai; int dev; int bias_level; int write; int read; int reg_cache_size; int * reg_cache; TYPE_1__* dai; struct cx20442_priv* private_data; int owner; int dapm_paths; int dapm_widgets; int mutex; } ;
struct cx20442_priv {int reg_cache; struct snd_soc_codec codec; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_codec* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct cx20442_priv*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_soc_codec*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct snd_soc_codec*) ;

__attribute__((used)) static int FUNC_8(struct cx20442_priv *VAR_6)
{
 struct snd_soc_codec *VAR_7 = &VAR_6->codec;
 int VAR_8;

 FUNC_4(&VAR_7->mutex);
 FUNC_1(&VAR_7->dapm_widgets);
 FUNC_1(&VAR_7->dapm_paths);

 VAR_7->name = "CX20442";
 VAR_7->owner = VAR_1;
 VAR_7->private_data = VAR_6;

 VAR_7->dai = &VAR_3;
 VAR_7->num_dai = 1;

 VAR_7->reg_cache = &VAR_6->reg_cache;
 VAR_7->reg_cache_size = FUNC_0(VAR_6->reg_cache);
 VAR_7->read = VAR_4;
 VAR_7->write = VAR_5;

 VAR_7->bias_level = VAR_0;

 VAR_3.dev = VAR_7->dev;

 VAR_2 = VAR_7;

 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8 != 0) {
  FUNC_2(VAR_7->dev, "Failed to register codec: %d\n", VAR_8);
  goto err;
 }

 VAR_8 = FUNC_6(&VAR_3);
 if (VAR_8 != 0) {
  FUNC_2(VAR_7->dev, "Failed to register DAI: %d\n", VAR_8);
  goto err_codec;
 }

 return 0;

err_codec:
 FUNC_7(VAR_7);
err:
 VAR_2 = ((void*)0);
 FUNC_3(VAR_6);
 return VAR_8;
}
