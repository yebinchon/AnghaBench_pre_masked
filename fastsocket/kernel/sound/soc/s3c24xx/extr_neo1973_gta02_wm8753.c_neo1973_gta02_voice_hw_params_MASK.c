
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {struct snd_soc_dai* codec_dai; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int) ;
 int FUNC_4 (struct snd_soc_dai*,int) ;
 int FUNC_5 (struct snd_soc_dai*,int ,unsigned long,int) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(
 struct snd_pcm_substream *VAR_9,
 struct snd_pcm_hw_params *VAR_10)
{
 struct snd_soc_pcm_runtime *VAR_11 = VAR_9->private_data;
 struct snd_soc_dai *VAR_12 = VAR_11->dai->codec_dai;
 unsigned int VAR_13 = 0;
 int VAR_14 = 0;
 unsigned long VAR_15;

 VAR_15 = FUNC_2();

 if (FUNC_1(VAR_10) != 8000)
  return -VAR_0;
 if (FUNC_0(VAR_10) != 1)
  return -VAR_0;

 VAR_13 = VAR_7;



 VAR_14 = FUNC_4(VAR_12, VAR_3 |
  VAR_4 | VAR_2);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_6(VAR_12, VAR_5,
  12288000, VAR_1);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_3(VAR_12, VAR_6,
     VAR_13);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_14 = FUNC_5(VAR_12, VAR_8,
  VAR_15 / 4, 12288000);
 if (VAR_14 < 0)
  return VAR_14;

 return 0;
}
