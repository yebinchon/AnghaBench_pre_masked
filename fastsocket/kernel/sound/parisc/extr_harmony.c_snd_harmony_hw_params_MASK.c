
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct snd_harmony {TYPE_1__ dma; } ;
struct TYPE_4__ {int dma_area; int dma_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_substream*,int ) ;
 struct snd_harmony* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_4(struct snd_pcm_substream *VAR_1,
        struct snd_pcm_hw_params *VAR_2)
{
 int VAR_3;
 struct snd_harmony *VAR_4 = FUNC_3(VAR_1);

 VAR_3 = FUNC_2(VAR_1, FUNC_1(VAR_2));
 if (VAR_3 > 0 && VAR_4->dma.type == VAR_0)
  VAR_1->runtime->dma_addr = FUNC_0(VAR_1->runtime->dma_area);

 return VAR_3;
}
