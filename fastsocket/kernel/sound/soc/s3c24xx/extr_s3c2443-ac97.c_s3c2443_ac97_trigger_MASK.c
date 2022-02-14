
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct s3c24xx_pcm_dma_params {int channel; } ;
struct TYPE_6__ {scalar_t__ regs; } ;
struct TYPE_5__ {scalar_t__ dma_data; } ;
struct TYPE_4__ {TYPE_2__* cpu_dai; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 TYPE_3__ VAR_7 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_8, int VAR_9,
    struct snd_soc_dai *VAR_10)
{
 u32 VAR_11;
 struct snd_soc_pcm_runtime *VAR_12 = VAR_8->private_data;
 int VAR_13 = ((struct s3c24xx_pcm_dma_params *)
    VAR_12->dai->cpu_dai->dma_data)->channel;

 VAR_11 = FUNC_0(VAR_7 + VAR_1);
 switch (VAR_9) {
 case 130:
 case 131:
 case 132:
  if (VAR_8->stream == VAR_6)
   VAR_11 |= VAR_2;
  else
   VAR_11 |= VAR_4;
  break;
 case 129:
 case 128:
 case 133:
  if (VAR_8->stream == VAR_6)
   VAR_11 &= ~VAR_3;
  else
   VAR_11 &= ~VAR_5;
  break;
 }
 FUNC_2(VAR_11, VAR_7 + VAR_1);

 FUNC_1(VAR_13, VAR_0);

 return 0;
}
