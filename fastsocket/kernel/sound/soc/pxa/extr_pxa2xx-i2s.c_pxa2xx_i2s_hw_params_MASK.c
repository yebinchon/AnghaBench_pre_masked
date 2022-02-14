
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int * dma_data; struct snd_soc_dai* private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int fmt; scalar_t__ master; } ;
struct TYPE_3__ {struct snd_soc_dai* cpu_dai; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_13,
    struct snd_pcm_hw_params *VAR_14,
    struct snd_soc_dai *VAR_15)
{
 struct snd_soc_pcm_runtime *VAR_16 = VAR_13->private_data;
 struct snd_soc_dai *VAR_17 = VAR_16->dai->cpu_dai;

 FUNC_0(FUNC_1(VAR_9));
 FUNC_4(VAR_9);
 VAR_15->private_data = VAR_15;
 FUNC_6();

 if (VAR_13->stream == VAR_8)
  VAR_17->dma_data = &VAR_11;
 else
  VAR_17->dma_data = &VAR_10;


 if (!(VAR_0 & VAR_2)) {
  VAR_0 = 0;
  if (VAR_12.master)
   VAR_0 |= VAR_1;

  VAR_0 |= FUNC_2(14) | FUNC_3(1);
  VAR_3 |= VAR_12.fmt;
 }
 if (VAR_13->stream == VAR_8)
  VAR_5 |= VAR_7;
 else
  VAR_5 |= VAR_6;

 switch (FUNC_5(VAR_14)) {
 case 8000:
  VAR_4 = 0x48;
  break;
 case 11025:
  VAR_4 = 0x34;
  break;
 case 16000:
  VAR_4 = 0x24;
  break;
 case 22050:
  VAR_4 = 0x1a;
  break;
 case 44100:
  VAR_4 = 0xd;
  break;
 case 48000:
  VAR_4 = 0xc;
  break;
 case 96000:
  VAR_4 = 0x6;
  break;
 }

 return 0;
}
