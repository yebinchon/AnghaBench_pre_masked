
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wm8900_reg_defaults ;
typedef int u16 ;
struct wm8900_priv {int fll_out; int fll_in; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int reg_cache; struct wm8900_priv* private_data; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int,int ) ;
 struct snd_soc_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct snd_soc_codec*,int,int ) ;
 int FUNC_5 (struct snd_soc_codec*) ;
 int FUNC_6 (struct snd_soc_codec*,int ) ;
 int FUNC_7 (struct snd_soc_codec*,int ,int,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct snd_soc_device *VAR_4 = FUNC_3(VAR_3);
 struct snd_soc_codec *VAR_5 = VAR_4->card->codec;
 struct wm8900_priv *VAR_6 = VAR_5->private_data;
 u16 *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_2(VAR_5->reg_cache, sizeof(wm8900_reg_defaults),
   VAR_0);

 FUNC_5(VAR_5);
 FUNC_6(VAR_5, VAR_1);


 if (VAR_6->fll_out) {
  int VAR_10 = VAR_6->fll_out;
  int VAR_11 = VAR_6->fll_in;

  VAR_6->fll_in = 0;
  VAR_6->fll_out = 0;

  VAR_9 = FUNC_7(VAR_5, 0, VAR_11, VAR_10);
  if (VAR_9 != 0) {
   FUNC_0(&VAR_3->dev, "Failed to restart FLL\n");
   return VAR_9;
  }
 }

 if (VAR_7) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
   FUNC_4(VAR_5, VAR_8, VAR_7[VAR_8]);
  FUNC_1(VAR_7);
 } else
  FUNC_0(&VAR_3->dev, "Unable to allocate register cache\n");

 return 0;
}
