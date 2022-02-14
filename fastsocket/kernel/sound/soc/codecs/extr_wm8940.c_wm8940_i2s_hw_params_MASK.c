
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_pcm_runtime {struct snd_soc_device* socdev; } ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_soc_codec {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;







 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_4,
    struct snd_pcm_hw_params *VAR_5,
    struct snd_soc_dai *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_4->private_data;
 struct snd_soc_device *VAR_8 = VAR_7->socdev;
 struct snd_soc_codec *VAR_9 = VAR_8->card->codec;
 u16 VAR_10 = FUNC_3(VAR_9, VAR_3) & 0xFD9F;
 u16 VAR_11 = FUNC_3(VAR_9, VAR_1) & 0xFFF1;
 u16 VAR_12 = FUNC_3(VAR_9,
      VAR_2) & 0xFFDF;
 int VAR_13;


 if (VAR_4->stream == VAR_0
     && FUNC_0(VAR_5) == 2)
  VAR_10 |= (1 << 9);

 switch (FUNC_2(VAR_5)) {
 case 8000:
  VAR_11 |= (0x5 << 1);
  break;
 case 11025:
  VAR_11 |= (0x4 << 1);
  break;
 case 16000:
  VAR_11 |= (0x3 << 1);
  break;
 case 22050:
  VAR_11 |= (0x2 << 1);
  break;
 case 32000:
  VAR_11 |= (0x1 << 1);
  break;
 case 44100:
 case 48000:
  break;
 }
 VAR_13 = FUNC_4(VAR_9, VAR_1, VAR_11);
 if (VAR_13)
  goto error_ret;

 switch (FUNC_1(VAR_5)) {
 case 128:
  VAR_12 = VAR_12 | (1 << 5);
  break;
 case 132:
  break;
 case 131:
  VAR_10 |= (1 << 5);
  break;
 case 130:
  VAR_10 |= (2 << 5);
  break;
 case 129:
  VAR_10 |= (3 << 5);
  break;
 }
 VAR_13 = FUNC_4(VAR_9, VAR_2, VAR_12);
 if (VAR_13)
  goto error_ret;
 VAR_13 = FUNC_4(VAR_9, VAR_3, VAR_10);

error_ret:
 return VAR_13;
}
