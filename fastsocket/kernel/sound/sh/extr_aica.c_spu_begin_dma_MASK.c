
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct TYPE_6__ {unsigned long data; scalar_t__ expires; int function; } ;
struct snd_card_aica {TYPE_2__ timer; int spu_dma_work; } ;
struct TYPE_5__ {struct snd_card_aica* private_data; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct snd_card_aica *VAR_4;
 struct snd_pcm_runtime *VAR_5;
 VAR_5 = VAR_3->runtime;
 VAR_4 = VAR_3->pcm->private_data;

 FUNC_3(VAR_1, &(VAR_4->spu_dma_work));

 if (FUNC_4(VAR_4->timer.data)) {
  FUNC_2(&VAR_4->timer, VAR_2 + 4);
  return;
 }
 FUNC_1(&(VAR_4->timer));
 VAR_4->timer.data = (unsigned long) VAR_3;
 VAR_4->timer.function = VAR_0;
 VAR_4->timer.expires = VAR_2 + 4;
 FUNC_0(&(VAR_4->timer));
}
