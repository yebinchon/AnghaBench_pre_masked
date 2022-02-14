
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct psc_dma* private_data; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct psc_dma {TYPE_1__* psc_regs; } ;
struct TYPE_2__ {int ac97_slots; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1,
     struct snd_soc_dai *VAR_2)
{
 struct psc_dma *VAR_3 = VAR_2->private_data;

 if (FUNC_1(VAR_1) == 1)
  FUNC_0(&VAR_3->psc_regs->ac97_slots, 0x01000000);
 else
  FUNC_0(&VAR_3->psc_regs->ac97_slots, 0x03000000);

 return 0;
}
