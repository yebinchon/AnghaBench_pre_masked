
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int period_bytes_max; int channels_max; int channels_min; } ;
struct snd_pcm_runtime {TYPE_2__ hw; } ;
struct snd_emu10k1_fx8010_pcm {int buffer_size; scalar_t__ valid; int opened; int channels; } ;
struct TYPE_3__ {struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {int reg_lock; TYPE_1__ fx8010; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct snd_emu10k1* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2)
{
 struct snd_emu10k1 *VAR_3 = FUNC_0(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_emu10k1_fx8010_pcm *VAR_5 = &VAR_3->fx8010.pcm[VAR_2->number];

 VAR_4->hw = VAR_1;
 VAR_4->hw.channels_min = VAR_4->hw.channels_max = VAR_5->channels;
 VAR_4->hw.period_bytes_max = (VAR_5->buffer_size * 2) / 2;
 FUNC_1(&VAR_3->reg_lock);
 if (VAR_5->valid == 0) {
  FUNC_2(&VAR_3->reg_lock);
  return -VAR_0;
 }
 VAR_5->opened = 1;
 FUNC_2(&VAR_3->reg_lock);
 return 0;
}
