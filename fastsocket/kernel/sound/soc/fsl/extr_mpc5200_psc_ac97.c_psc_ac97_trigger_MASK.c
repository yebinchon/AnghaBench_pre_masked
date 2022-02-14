
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_3__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {TYPE_4__* pstr; struct snd_soc_pcm_runtime* private_data; } ;
struct psc_dma {int slots; TYPE_1__* psc_regs; } ;
struct TYPE_8__ {int stream; } ;
struct TYPE_7__ {TYPE_2__* cpu_dai; } ;
struct TYPE_6__ {struct psc_dma* private_data; } ;
struct TYPE_5__ {int ac97_slots; } ;


 int VAR_0 ;

 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1, int VAR_2,
       struct snd_soc_dai *VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct psc_dma *VAR_5 = VAR_4->dai->cpu_dai->private_data;

 switch (VAR_2) {
 case 128:
  if (VAR_1->pstr->stream == VAR_0)
   VAR_5->slots &= 0xFFFF0000;
  else
   VAR_5->slots &= 0x0000FFFF;

  FUNC_0(&VAR_5->psc_regs->ac97_slots, VAR_5->slots);
  break;
 }
 return 0;
}
