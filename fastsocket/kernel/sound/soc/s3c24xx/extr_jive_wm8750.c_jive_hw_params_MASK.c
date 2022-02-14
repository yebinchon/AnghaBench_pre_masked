
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct s3c_i2sv2_rate_calc {scalar_t__ clk_div; scalar_t__ fs_div; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct s3c_i2sv2_rate_calc*,int *,int,int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,scalar_t__) ;
 int FUNC_4 (struct snd_soc_dai*,int) ;
 int FUNC_5 (struct snd_soc_dai*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7,
     struct snd_pcm_hw_params *VAR_8)
{
 struct snd_soc_pcm_runtime *VAR_9 = VAR_7->private_data;
 struct snd_soc_dai *VAR_10 = VAR_9->dai->codec_dai;
 struct snd_soc_dai *VAR_11 = VAR_9->dai->cpu_dai;
 struct s3c_i2sv2_rate_calc VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;

 switch (FUNC_0(VAR_8)) {
 case 8000:
 case 16000:
 case 48000:
 case 96000:
  VAR_13 = 12288000;
  break;
 case 11025:
 case 22050:
 case 44100:
  VAR_13 = 11289600;
  break;
 }

 FUNC_2(&VAR_12, ((void*)0), FUNC_0(VAR_8),
    FUNC_1());


 VAR_14 = FUNC_4(VAR_10, VAR_4 |
      VAR_5 |
      VAR_3);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_4(VAR_11, VAR_4 |
      VAR_5 |
      VAR_3);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_5(VAR_10, VAR_6, VAR_13,
         VAR_2);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_1, VAR_12.fs_div);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_3(VAR_11, VAR_0,
         VAR_12.clk_div - 1);
 if (VAR_14 < 0)
  return VAR_14;

 return 0;
}
