
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ channels_min; } ;
struct TYPE_4__ {scalar_t__ channels_min; } ;
struct snd_soc_dai {TYPE_2__ capture; TYPE_1__ playback; } ;
struct snd_pcm {int dummy; } ;
struct snd_card {TYPE_3__* dev; } ;
struct TYPE_6__ {scalar_t__ coherent_dma_mask; int * dma_mask; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct snd_pcm*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_3, struct snd_soc_dai *VAR_4,
 struct snd_pcm *VAR_5)
{
 int VAR_6 = 0;

 if (!VAR_3->dev->dma_mask)
  VAR_3->dev->dma_mask = &VAR_2;
 if (!VAR_3->dev->coherent_dma_mask)
  VAR_3->dev->coherent_dma_mask = FUNC_0(32);

 if (VAR_4->playback.channels_min) {
  VAR_6 = FUNC_1(VAR_5,
   VAR_1);
  if (VAR_6)
   goto out;
 }

 if (VAR_4->capture.channels_min) {
  VAR_6 = FUNC_1(VAR_5,
   VAR_0);
  if (VAR_6)
   goto out;
 }
 out:
 return VAR_6;
}
