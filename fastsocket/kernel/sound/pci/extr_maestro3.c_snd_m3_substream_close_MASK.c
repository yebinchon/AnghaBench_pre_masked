
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_m3 {int reg_lock; } ;
struct m3_dma {scalar_t__ opened; scalar_t__ running; scalar_t__ in_lists; int * index; int * index_list; scalar_t__ substream; } ;
struct TYPE_2__ {struct m3_dma* private_data; } ;


 int FUNC_0 (struct snd_m3*,struct m3_dma*,scalar_t__) ;
 int FUNC_1 (struct snd_m3*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct snd_m3 *VAR_0, struct snd_pcm_substream *VAR_1)
{
 struct m3_dma *VAR_2 = VAR_1->runtime->private_data;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(&VAR_0->reg_lock);
 if (VAR_2->substream && VAR_2->running)
  FUNC_0(VAR_0, VAR_2, VAR_2->substream);
 if (VAR_2->in_lists) {
  FUNC_1(VAR_0, VAR_2->index_list[0], VAR_2->index[0]);
  FUNC_1(VAR_0, VAR_2->index_list[1], VAR_2->index[1]);
  FUNC_1(VAR_0, VAR_2->index_list[2], VAR_2->index[2]);
  VAR_2->in_lists = 0;
 }
 VAR_2->running = 0;
 VAR_2->opened = 0;
 FUNC_3(&VAR_0->reg_lock);
}
