
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {struct aic26* private_data; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aic26 {int datfm; scalar_t__ master; TYPE_2__* spi; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {struct snd_soc_codec* codec; } ;


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




 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_14,
      struct snd_pcm_hw_params *VAR_15,
      struct snd_soc_dai *VAR_16)
{
 struct snd_soc_pcm_runtime *VAR_17 = VAR_14->private_data;
 struct snd_soc_device *VAR_18 = VAR_17->socdev;
 struct snd_soc_codec *VAR_19 = VAR_18->card->codec;
 struct aic26 *VAR_20 = VAR_19->private_data;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 u16 VAR_28;

 FUNC_2(&VAR_20->spi->dev, "aic26_hw_params(substream=%p, params=%p)\n",
  VAR_14, VAR_15);
 FUNC_2(&VAR_20->spi->dev, "rate=%i format=%i\n", FUNC_4(VAR_15),
  FUNC_3(VAR_15));

 switch (FUNC_4(VAR_15)) {
 case 8000: VAR_21 = 48000; VAR_22 = VAR_5; break;
 case 11025: VAR_21 = 44100; VAR_22 = VAR_4; break;
 case 12000: VAR_21 = 48000; VAR_22 = VAR_4; break;
 case 16000: VAR_21 = 48000; VAR_22 = VAR_3; break;
 case 22050: VAR_21 = 44100; VAR_22 = VAR_2; break;
 case 24000: VAR_21 = 48000; VAR_22 = VAR_2; break;
 case 32000: VAR_21 = 48000; VAR_22 = VAR_1; break;
 case 44100: VAR_21 = 44100; VAR_22 = VAR_0; break;
 case 48000: VAR_21 = 48000; VAR_22 = VAR_0; break;
 default:
  FUNC_2(&VAR_20->spi->dev, "bad rate\n"); return -VAR_13;
 }


 switch (FUNC_3(VAR_15)) {
 case 128: VAR_23 = VAR_10; break;
 case 131: VAR_23 = VAR_10; break;
 case 130: VAR_23 = VAR_11; break;
 case 129: VAR_23 = VAR_12; break;
 default:
  FUNC_2(&VAR_20->spi->dev, "bad format\n"); return -VAR_13;
 }


 VAR_24 = 1;
 VAR_25 = (VAR_21 == 44100) ? 7 : 8;
 VAR_26 = (VAR_21 == 44100) ? 5264 : 1920;
 VAR_27 = 0;
 VAR_28 = 0x8000 | VAR_27 << 11 | VAR_24 << 8 | VAR_25 << 2;
 FUNC_1(VAR_19, VAR_8, VAR_28);
 VAR_28 = VAR_26 << 2;
 FUNC_1(VAR_19, VAR_9, VAR_28);


 VAR_28 = FUNC_0(VAR_19, VAR_7);
 VAR_28 &= ~0xf800;
 if (VAR_20->master)
  VAR_28 |= 0x0800;
 if (VAR_21 == 48000)
  VAR_28 |= 0x2000;
 FUNC_1(VAR_19, VAR_7, VAR_28);


 VAR_28 = FUNC_0(VAR_19, VAR_6);
 VAR_28 &= ~0x0fff;
 VAR_28 |= VAR_23 | VAR_20->datfm | (VAR_22 << 3) | VAR_22;
 FUNC_1(VAR_19, VAR_6, VAR_28);

 return 0;
}
