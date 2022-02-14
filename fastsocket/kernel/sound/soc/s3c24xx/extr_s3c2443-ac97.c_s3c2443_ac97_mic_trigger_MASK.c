
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {TYPE_2__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; } ;
struct s3c24xx_pcm_dma_params {int channel; } ;
struct TYPE_6__ {scalar_t__ regs; } ;
struct TYPE_5__ {TYPE_1__* cpu_dai; } ;
struct TYPE_4__ {scalar_t__ dma_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
        int VAR_6, struct snd_soc_dai *VAR_7)
{
 u32 VAR_8;
 struct snd_soc_pcm_runtime *VAR_9 = VAR_5->private_data;
 int VAR_10 = ((struct s3c24xx_pcm_dma_params *)
    VAR_9->dai->cpu_dai->dma_data)->channel;

 VAR_8 = FUNC_0(VAR_4 + VAR_1);
 switch (VAR_6) {
 case 130:
 case 131:
 case 132:
  VAR_8 |= VAR_2;
  break;
 case 129:
 case 128:
 case 133:
  VAR_8 &= ~VAR_3;
 }
 FUNC_2(VAR_8, VAR_4 + VAR_1);

 FUNC_1(VAR_10, VAR_0);

 return 0;
}
