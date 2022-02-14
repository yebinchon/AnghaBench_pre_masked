
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_soc_dai*,int ,int ) ;
 int FUNC_5 (struct snd_soc_dai*,int) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int ,unsigned int) ;
 int FUNC_7 (struct snd_soc_dai*,int ,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_8,
        struct snd_pcm_hw_params *VAR_9)
{
 struct snd_soc_pcm_runtime *VAR_10 = VAR_8->private_data;
 struct snd_soc_dai *VAR_11 = VAR_10->dai->codec_dai;
 struct snd_soc_dai *VAR_12 = VAR_10->dai->cpu_dai;
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = FUNC_2(VAR_9);
 int VAR_17 = FUNC_3(FUNC_1(VAR_9));






 switch (VAR_16) {
 case 8000:
  VAR_14 = 12;
  break;
 case 16000:
  VAR_14 = 6;
  break;
 case 48000:
  VAR_14 = 2;
  break;
 default:

  return -VAR_0;
 }


 VAR_13 = VAR_16 * (VAR_17 + 1) * 8;

 VAR_15 = FUNC_7(VAR_12, VAR_1, 0, 1);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_6(VAR_12, 0, 0, VAR_13);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_7)
  VAR_15 = FUNC_4(VAR_11, VAR_6,
          FUNC_0(VAR_14));
 else
  VAR_15 = FUNC_4(VAR_11, VAR_5,
          FUNC_0(VAR_14));
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_5(VAR_11, VAR_3 |
  VAR_4 | VAR_2);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_5(VAR_12, VAR_3 |
  VAR_4 | VAR_2);
 if (VAR_15 < 0)
  return VAR_15;

 return 0;
}
