
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {scalar_t__ id; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct TYPE_2__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_9, int VAR_10,
   struct snd_soc_dai *VAR_11)
{
 struct snd_soc_pcm_runtime *VAR_12 = VAR_9->private_data;
 struct snd_soc_dai *VAR_13 = VAR_12->dai->cpu_dai;
 u32 VAR_14;

 if (VAR_13->id == VAR_1 || VAR_13->id == VAR_2)
  VAR_14 = VAR_4;
 else
  VAR_14 = VAR_5;

 switch (VAR_10) {
 case 130:
 case 131:
 case 132:
  if (VAR_9->stream == VAR_3)
   VAR_14 |= VAR_8 | VAR_7;
  else
   VAR_14 |= VAR_6 | VAR_7;
  break;
 case 128:
 case 129:
 case 133:
  if (VAR_9->stream == VAR_3)
   VAR_14 &= ~VAR_8;
  else
   VAR_14 &= ~VAR_6;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13->id == VAR_1 || VAR_13->id == VAR_2)
  VAR_4 = VAR_14;
 else
  VAR_5 = VAR_14;

 return 0;
}
