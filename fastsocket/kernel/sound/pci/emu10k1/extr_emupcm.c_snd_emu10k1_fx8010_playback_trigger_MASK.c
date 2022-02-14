
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; } ;
struct snd_emu10k1_fx8010_pcm {int tram_shift; int buffer_size; int tram_pos; scalar_t__ gpr_trigger; int * irq; int gpr_running; } ;
struct TYPE_2__ {struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {int reg_lock; scalar_t__ gpr_base; TYPE_1__ fx8010; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_emu10k1*,int ,int ,struct snd_pcm_substream*,int **) ;
 int FUNC_3 (struct snd_emu10k1*,int *) ;
 int FUNC_4 (struct snd_emu10k1*,scalar_t__,int ,int) ;
 struct snd_emu10k1* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_11, int VAR_12)
{
 struct snd_emu10k1 *VAR_13 = FUNC_5(VAR_11);
 struct snd_emu10k1_fx8010_pcm *VAR_14 = &VAR_13->fx8010.pcm[VAR_11->number];
 int VAR_15 = 0;

 FUNC_6(&VAR_13->reg_lock);
 switch (VAR_12) {
 case 130:

 case 132:
 case 131:
  VAR_15 = FUNC_2(VAR_13, VAR_10, VAR_14->gpr_running, VAR_11, &VAR_14->irq);
  if (VAR_15 < 0)
   goto __err;
  FUNC_1(VAR_11);
  FUNC_4(VAR_13, VAR_13->gpr_base + VAR_14->gpr_trigger, 0, 1);
  break;
 case 129:
 case 133:
 case 128:
  FUNC_3(VAR_13, VAR_14->irq); VAR_14->irq = ((void*)0);
  FUNC_4(VAR_13, VAR_13->gpr_base + VAR_14->gpr_trigger, 0, 0);
  VAR_14->tram_pos = FUNC_0(VAR_14->buffer_size);
  VAR_14->tram_shift = 0;
  break;
 default:
  VAR_15 = -VAR_0;
  break;
 }
      __err:
 FUNC_7(&VAR_13->reg_lock);
 return VAR_15;
}
