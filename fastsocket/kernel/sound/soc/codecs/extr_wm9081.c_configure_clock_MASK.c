
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm9081_priv {int sysclk_source; int mclk_rate; int sysclk_rate; int bclk; int fs; int master; } ;
struct snd_soc_codec {int dev; struct wm9081_priv* private_data; } ;
struct TYPE_3__ {int ratio; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;


 TYPE_1__* VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 unsigned int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,unsigned int) ;
 int FUNC_4 (struct snd_soc_codec*,int const,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_codec *VAR_6)
{
 struct wm9081_priv *VAR_7 = VAR_6->private_data;
 int VAR_8, VAR_9, VAR_10;
 unsigned int VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;

 switch (VAR_7->sysclk_source) {
 case 128:
  if (VAR_7->mclk_rate > 12225000) {
   VAR_13 = 1;
   VAR_7->sysclk_rate = VAR_7->mclk_rate / 2;
  } else {
   VAR_7->sysclk_rate = VAR_7->mclk_rate;
  }
  FUNC_4(VAR_6, 129, 0, 0);
  break;

 case 129:







  if (VAR_7->master && VAR_7->bclk) {



   for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
    VAR_10 = VAR_7->fs * VAR_5[VAR_9].ratio;
    VAR_8 = VAR_10;
    if (VAR_10 >= VAR_7->bclk &&
        VAR_10 > 3000000)
     break;
   }

   if (VAR_9 == FUNC_0(VAR_5))
    return -VAR_0;

  } else if (VAR_7->fs) {
   for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
    VAR_8 = VAR_5[VAR_9].ratio
     * VAR_7->fs;
    if (VAR_8 > 3000000)
     break;
   }

   if (VAR_9 == FUNC_0(VAR_5))
    return -VAR_0;

  } else {
   VAR_8 = 12288000;
  }

  VAR_12 = FUNC_4(VAR_6, 129,
         VAR_7->mclk_rate, VAR_8);
  if (VAR_12 == 0) {
   VAR_7->sysclk_rate = VAR_8;


   VAR_14 = 1;
  } else {
   VAR_7->sysclk_rate = VAR_7->mclk_rate;
  }
  break;

 default:
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_6, VAR_2);
 if (VAR_13)
  VAR_11 |= VAR_4;
 else
  VAR_11 &= ~VAR_4;
 FUNC_3(VAR_6, VAR_2, VAR_11);

 VAR_11 = FUNC_2(VAR_6, VAR_3);
 if (VAR_14)
  VAR_11 |= VAR_1;
 else
  VAR_11 &= ~VAR_1;
 FUNC_3(VAR_6, VAR_3, VAR_11);

 FUNC_1(VAR_6->dev, "CLK_SYS is %dHz\n", VAR_7->sysclk_rate);

 return VAR_12;
}
