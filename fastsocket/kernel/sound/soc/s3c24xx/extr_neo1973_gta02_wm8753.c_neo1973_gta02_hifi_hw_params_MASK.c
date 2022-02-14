
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


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int) ;
 int FUNC_4 (struct snd_soc_dai*,int) ;
 int FUNC_5 (struct snd_soc_dai*,int ,unsigned long,unsigned int) ;
 int FUNC_6 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_14,
 struct snd_pcm_hw_params *VAR_15)
{
 struct snd_soc_pcm_runtime *VAR_16 = VAR_14->private_data;
 struct snd_soc_dai *VAR_17 = VAR_16->dai->codec_dai;
 struct snd_soc_dai *VAR_18 = VAR_16->dai->cpu_dai;
 unsigned int VAR_19 = 0, VAR_20 = 0;
 int VAR_21 = 0;
 unsigned long VAR_22;

 VAR_22 = FUNC_2();

 switch (FUNC_1(VAR_15)) {
 case 8000:
 case 16000:
  VAR_19 = 12288000;
  break;
 case 48000:
  VAR_20 = VAR_10;
  VAR_19 = 12288000;
  break;
 case 96000:
  VAR_20 = VAR_9;
  VAR_19 = 12288000;
  break;
 case 11025:
  VAR_20 = VAR_8;
  VAR_19 = 11289600;
  break;
 case 22050:
  VAR_20 = VAR_11;
  VAR_19 = 11289600;
  break;
 case 44100:
  VAR_20 = VAR_10;
  VAR_19 = 11289600;
  break;
 case 88200:
  VAR_20 = VAR_9;
  VAR_19 = 11289600;
  break;
 }


 VAR_21 = FUNC_4(VAR_17,
  VAR_5 | VAR_6 |
  VAR_4);
 if (VAR_21 < 0)
  return VAR_21;


 VAR_21 = FUNC_4(VAR_18,
  VAR_5 | VAR_6 |
  VAR_4);
 if (VAR_21 < 0)
  return VAR_21;


 VAR_21 = FUNC_6(VAR_17, VAR_12, VAR_19,
  VAR_3);
 if (VAR_21 < 0)
  return VAR_21;


 VAR_21 = FUNC_3(VAR_18, VAR_1,
  VAR_0);
 if (VAR_21 < 0)
  return VAR_21;


 VAR_21 = FUNC_3(VAR_17,
     VAR_7, VAR_20);
 if (VAR_21 < 0)
  return VAR_21;


 VAR_21 = FUNC_3(VAR_18, VAR_2,
  FUNC_0(4, 4));
 if (VAR_21 < 0)
  return VAR_21;


 VAR_21 = FUNC_5(VAR_17, VAR_13,
  VAR_22 / 4, VAR_19);
 if (VAR_21 < 0)
  return VAR_21;

 return 0;
}
