
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct wm8903_priv {int sysclk; scalar_t__ capture_active; struct snd_pcm_substream* slave_substream; } ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct i2c_client* control_data; struct wm8903_priv* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_7__ {int rate; int value; int mclk_div; int div; int mode; int ratio; } ;
struct TYPE_6__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;




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
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_17 ;
 TYPE_2__* VAR_18 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 TYPE_2__* VAR_19 ;
 int FUNC_6 (struct snd_soc_codec*,int ) ;
 int FUNC_7 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_20,
       struct snd_pcm_hw_params *VAR_21,
       struct snd_soc_dai *VAR_22)
{
 struct snd_soc_pcm_runtime *VAR_23 = VAR_20->private_data;
 struct snd_soc_device *VAR_24 = VAR_23->socdev;
 struct snd_soc_codec *VAR_25 = VAR_24->card->codec;
 struct wm8903_priv *VAR_26 = VAR_25->private_data;
 struct i2c_client *VAR_27 = VAR_25->control_data;
 int VAR_28 = FUNC_5(VAR_21);
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35;
 int VAR_36;

 u16 VAR_37 = FUNC_6(VAR_25, VAR_2);
 u16 VAR_38 = FUNC_6(VAR_25, VAR_3);
 u16 VAR_39 = FUNC_6(VAR_25, VAR_4);
 u16 VAR_40 = FUNC_6(VAR_25, VAR_10);
 u16 VAR_41 = FUNC_6(VAR_25, VAR_11);
 u16 VAR_42 = FUNC_6(VAR_25, VAR_12);

 if (VAR_20 == VAR_26->slave_substream) {
  FUNC_2(&VAR_27->dev, "Ignoring hw_params for slave substream\n");
  return 0;
 }


 if (VAR_28 <= 24000)
  VAR_42 |= VAR_13;
 else
  VAR_42 &= ~VAR_13;


 VAR_32 = 0;
 VAR_34 = FUNC_1(VAR_19[VAR_32].rate - VAR_28);
 for (VAR_31 = 1; VAR_31 < FUNC_0(VAR_19); VAR_31++) {
  VAR_35 = FUNC_1(VAR_19[VAR_31].rate - VAR_28);
  if (VAR_35 <= VAR_34) {
   VAR_32 = VAR_31;
   VAR_34 = VAR_35;
  }
 }


 if (VAR_26->capture_active)
  switch (VAR_19[VAR_32].rate) {
  case 88200:
  case 96000:
   FUNC_3(&VAR_27->dev, "%dHz unsupported by ADC\n",
    VAR_28);
   return -VAR_0;

  default:
   break;
  }

 FUNC_2(&VAR_27->dev, "DSP fs = %dHz\n", VAR_19[VAR_32].rate);
 VAR_41 &= ~VAR_16;
 VAR_41 |= VAR_19[VAR_32].value;

 VAR_37 &= ~VAR_1;
 VAR_29 = 2 * VAR_28;
 switch (FUNC_4(VAR_21)) {
 case 131:
  VAR_29 *= 16;
  break;
 case 130:
  VAR_29 *= 20;
  VAR_37 |= 0x4;
  break;
 case 129:
  VAR_29 *= 24;
  VAR_37 |= 0x8;
  break;
 case 128:
  VAR_29 *= 32;
  VAR_37 |= 0xc;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(&VAR_27->dev, "MCLK = %dHz, target sample rate = %dHz\n",
  VAR_26->sysclk, VAR_28);





 VAR_33 = 0;
 VAR_34 = FUNC_1((VAR_26->sysclk /
   (VAR_18[0].mclk_div *
    VAR_18[0].div)) - VAR_28);
 for (VAR_31 = 1; VAR_31 < FUNC_0(VAR_18); VAR_31++) {
  VAR_35 = FUNC_1((VAR_26->sysclk /
          (VAR_18[VAR_31].mclk_div *
    VAR_18[VAR_31].div)) - VAR_28);

  if (VAR_35 <= VAR_34) {
   VAR_33 = VAR_31;
   VAR_34 = VAR_35;
  }
 }

 if (VAR_18[VAR_33].mclk_div == 2) {
  VAR_40 |= VAR_15;
  VAR_36 = VAR_26->sysclk / 2;
 } else {
  VAR_40 &= ~VAR_15;
  VAR_36 = VAR_26->sysclk;
 }

 VAR_41 &= ~(VAR_8 |
      VAR_6);
 VAR_41 |= VAR_18[VAR_33].rate << VAR_9;
 VAR_41 |= VAR_18[VAR_33].mode << VAR_7;

 FUNC_2(&VAR_27->dev, "CLK_SYS_RATE=%x, CLK_SYS_MODE=%x div=%d\n",
  VAR_18[VAR_33].rate,
  VAR_18[VAR_33].mode,
  VAR_18[VAR_33].div);

 FUNC_2(&VAR_27->dev, "Actual CLK_SYS = %dHz\n", VAR_36);






 VAR_30 = 0;
 VAR_34 = ((VAR_36 * 10) / VAR_17[0].ratio) - VAR_29;
 VAR_31 = 1;
 while (VAR_31 < FUNC_0(VAR_17)) {
  VAR_35 = ((VAR_36 * 10) / VAR_17[VAR_31].ratio) - VAR_29;
  if (VAR_35 < 0)
   break;
  VAR_30 = VAR_31;
  VAR_34 = VAR_35;
  VAR_31++;
 }

 VAR_38 &= ~VAR_5;
 VAR_39 &= ~VAR_14;

 FUNC_2(&VAR_27->dev, "BCLK ratio %d for %dHz - actual BCLK = %dHz\n",
  VAR_17[VAR_30].ratio / 10, VAR_29,
  (VAR_36 * 10) / VAR_17[VAR_30].ratio);

 VAR_38 |= VAR_17[VAR_30].div;
 VAR_39 |= VAR_29 / VAR_28;

 FUNC_7(VAR_25, VAR_10, VAR_40);
 FUNC_7(VAR_25, VAR_11, VAR_41);
 FUNC_7(VAR_25, VAR_2, VAR_37);
 FUNC_7(VAR_25, VAR_3, VAR_38);
 FUNC_7(VAR_25, VAR_4, VAR_39);
 FUNC_7(VAR_25, VAR_12, VAR_42);

 return 0;
}
