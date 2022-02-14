
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct snd_m3 {int num_substreams; int dma_list; int msrc_list; int adc1_list; int mixer_list; int reg_lock; struct m3_dma* substreams; } ;
struct m3_dma {int opened; int ** index_list; struct snd_pcm_substream* substream; scalar_t__ running; } ;
struct TYPE_2__ {struct m3_dma* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct snd_m3 *VAR_2, struct snd_pcm_substream *VAR_3)
{
 int VAR_4;
 struct m3_dma *VAR_5;

 FUNC_0(&VAR_2->reg_lock);
 for (VAR_4 = 0; VAR_4 < VAR_2->num_substreams; VAR_4++) {
  VAR_5 = &VAR_2->substreams[VAR_4];
  if (! VAR_5->opened)
   goto __found;
 }
 FUNC_1(&VAR_2->reg_lock);
 return -VAR_0;
__found:
 VAR_5->opened = 1;
 VAR_5->running = 0;
 FUNC_1(&VAR_2->reg_lock);

 VAR_3->runtime->private_data = VAR_5;
 VAR_5->substream = VAR_3;


 if (VAR_3->stream == VAR_1) {
  VAR_5->index_list[0] = &VAR_2->mixer_list;
 } else
  VAR_5->index_list[0] = &VAR_2->adc1_list;
 VAR_5->index_list[1] = &VAR_2->msrc_list;
 VAR_5->index_list[2] = &VAR_2->dma_list;

 return 0;
}
