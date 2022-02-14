
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_emu10k1_fx8010_pcm_rec {size_t substream; unsigned int channels; scalar_t__ pad; scalar_t__ res2; scalar_t__ res1; int * etram; int gpr_running; int gpr_trigger; int gpr_tmpcount; int gpr_count; int gpr_ptr; int gpr_size; int buffer_size; int tram_start; } ;
struct snd_emu10k1_fx8010_pcm {unsigned int channels; int * etram; int gpr_running; int gpr_trigger; int gpr_tmpcount; int gpr_count; int gpr_ptr; int gpr_size; int buffer_size; int tram_start; } ;
struct TYPE_2__ {int lock; struct snd_emu10k1_fx8010_pcm* pcm; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; int reg_lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_emu10k1 *VAR_2,
     struct snd_emu10k1_fx8010_pcm_rec *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 0;
 struct snd_emu10k1_fx8010_pcm *VAR_6;

 if (VAR_3->substream >= VAR_1)
  return -VAR_0;
 VAR_6 = &VAR_2->fx8010.pcm[VAR_3->substream];
 FUNC_0(&VAR_2->fx8010.lock);
 FUNC_2(&VAR_2->reg_lock);
 VAR_3->channels = VAR_6->channels;
 VAR_3->tram_start = VAR_6->tram_start;
 VAR_3->buffer_size = VAR_6->buffer_size;
 VAR_3->gpr_size = VAR_6->gpr_size;
 VAR_3->gpr_ptr = VAR_6->gpr_ptr;
 VAR_3->gpr_count = VAR_6->gpr_count;
 VAR_3->gpr_tmpcount = VAR_6->gpr_tmpcount;
 VAR_3->gpr_trigger = VAR_6->gpr_trigger;
 VAR_3->gpr_running = VAR_6->gpr_running;
 for (VAR_4 = 0; VAR_4 < VAR_6->channels; VAR_4++)
  VAR_3->etram[VAR_4] = VAR_6->etram[VAR_4];
 VAR_3->res1 = VAR_3->res2 = 0;
 VAR_3->pad = 0;
 FUNC_3(&VAR_2->reg_lock);
 FUNC_1(&VAR_2->fx8010.lock);
 return VAR_5;
}
