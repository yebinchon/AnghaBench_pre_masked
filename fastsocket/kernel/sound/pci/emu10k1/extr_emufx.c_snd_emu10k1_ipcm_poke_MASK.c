
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_pcm_rec {size_t substream; int channels; int * etram; int gpr_running; int gpr_trigger; int gpr_ptr; int gpr_tmpcount; int gpr_count; int gpr_size; int buffer_size; int tram_start; } ;
struct snd_emu10k1_fx8010_pcm {int valid; unsigned int channels; int * etram; int gpr_running; int gpr_trigger; int gpr_ptr; int gpr_tmpcount; int gpr_count; int gpr_size; int buffer_size; int tram_start; scalar_t__ opened; } ;
struct TYPE_2__ {int lock; struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_emu10k1 *VAR_3,
     struct snd_emu10k1_fx8010_pcm_rec *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6 = 0;
 struct snd_emu10k1_fx8010_pcm *VAR_7;

 if (VAR_4->substream >= VAR_2)
  return -VAR_1;
 if (VAR_4->channels > 32)
  return -VAR_1;
 VAR_7 = &VAR_3->fx8010.pcm[VAR_4->substream];
 FUNC_0(&VAR_3->fx8010.lock);
 FUNC_2(&VAR_3->reg_lock);
 if (VAR_7->opened) {
  VAR_6 = -VAR_0;
  goto __error;
 }
 if (VAR_4->channels == 0) {
  VAR_7->valid = 0;
 } else {

  if (VAR_4->channels != 2) {
   VAR_6 = -VAR_1;
   goto __error;
  }
  VAR_7->valid = 1;
  VAR_7->opened = 0;
  VAR_7->channels = VAR_4->channels;
  VAR_7->tram_start = VAR_4->tram_start;
  VAR_7->buffer_size = VAR_4->buffer_size;
  VAR_7->gpr_size = VAR_4->gpr_size;
  VAR_7->gpr_count = VAR_4->gpr_count;
  VAR_7->gpr_tmpcount = VAR_4->gpr_tmpcount;
  VAR_7->gpr_ptr = VAR_4->gpr_ptr;
  VAR_7->gpr_trigger = VAR_4->gpr_trigger;
  VAR_7->gpr_running = VAR_4->gpr_running;
  for (VAR_5 = 0; VAR_5 < VAR_7->channels; VAR_5++)
   VAR_7->etram[VAR_5] = VAR_4->etram[VAR_5];
 }
      __error:
 FUNC_3(&VAR_3->reg_lock);
 FUNC_1(&VAR_3->fx8010.lock);
 return VAR_6;
}
