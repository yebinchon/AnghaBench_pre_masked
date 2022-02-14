
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
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_soc_dai*,int ,unsigned int) ;
 int FUNC_4 (struct snd_soc_dai*,int) ;
 int FUNC_5 (struct snd_soc_dai*,int ,int ,unsigned int) ;
 int FUNC_6 (struct snd_soc_dai*,int ,int ,int ) ;
 int FUNC_7 (struct snd_soc_dai*,int,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_16,
           struct snd_pcm_hw_params *VAR_17)
{
 struct snd_soc_pcm_runtime *VAR_18 = VAR_16->private_data;
 struct snd_soc_dai *VAR_19 = VAR_18->dai->codec_dai;
 struct snd_soc_dai *VAR_20 = VAR_18->dai->cpu_dai;
 unsigned int VAR_21, VAR_22, VAR_23, VAR_24;
 unsigned int VAR_25 = VAR_9;
 int VAR_26 = 0;

 VAR_24 = FUNC_1(VAR_17);
 VAR_23 = FUNC_2(FUNC_0(VAR_17));





 switch (FUNC_1(VAR_17)) {
 case 8000:

  VAR_21 = 32842000;
  switch (VAR_23) {
  case 16:

   VAR_22 = VAR_4;
   break;
  default:

   VAR_22 = VAR_7;
  }
  break;
 case 11025:
  VAR_21 = 5622000;
  switch (VAR_23) {
  case 16:

   VAR_22 = VAR_6;
   break;
  default:

   VAR_22 = VAR_5;
  }
  break;
 case 22050:
  VAR_21 = 5622000;
  switch (VAR_23) {
  case 16:

   VAR_22 = VAR_5;
   break;
  default:

   VAR_22 = VAR_3;
  }
  break;
 case 44100:
  VAR_21 = 5622000;
  switch (VAR_23) {
  case 16:

   VAR_22 = VAR_5;
   break;
  default:

   VAR_22 = VAR_3;
  }
  break;
 case 48000:
  VAR_21 = 12235000;
  switch (VAR_23) {
  case 16:

   VAR_22 = VAR_5;
   break;
  default:

   VAR_22 = VAR_3;
  }
  break;
 case 96000:
 default:
  VAR_21 = 12235000;
  switch (VAR_23) {
  case 16:

   VAR_22 = VAR_3;
   break;
  default:

   VAR_22 = VAR_5;
   VAR_25 = VAR_8;
   break;
  }
  break;
 }


 VAR_26 = FUNC_4(VAR_19, VAR_13 |
   VAR_15 | VAR_11);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_26 = FUNC_4(VAR_20, VAR_12 |
   VAR_14 | VAR_11);
 if (VAR_26 < 0)
  return VAR_26;

 VAR_26 = FUNC_7(VAR_20, 1, 0, 1, VAR_23);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_26 = FUNC_6(VAR_20, VAR_2, 0,
   VAR_10);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_26 = FUNC_3(VAR_20,
   VAR_0, VAR_22);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_26 = FUNC_3(VAR_20,
   VAR_1, VAR_25);
 if (VAR_26 < 0)
  return VAR_26;


 VAR_26 = FUNC_5(VAR_20, 0, 0, VAR_21);
 if (VAR_26 < 0)
  return VAR_26;

 return 0;
}
