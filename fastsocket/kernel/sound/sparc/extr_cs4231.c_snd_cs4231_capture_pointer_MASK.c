
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cs4231_dma_control {size_t (* address ) (struct cs4231_dma_control*) ;} ;
struct snd_cs4231 {int* image; struct cs4231_dma_control c_dma; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {scalar_t__ dma_addr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 struct snd_cs4231* FUNC_1 (struct snd_pcm_substream*) ;
 size_t FUNC_2 (struct cs4231_dma_control*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(
     struct snd_pcm_substream *VAR_2)
{
 struct snd_cs4231 *VAR_3 = FUNC_1(VAR_2);
 struct cs4231_dma_control *VAR_4 = &VAR_3->c_dma;
 size_t VAR_5;

 if (!(VAR_3->image[VAR_0] & VAR_1))
  return 0;
 VAR_5 = VAR_4->address(VAR_4);
 if (VAR_5 != 0)
  VAR_5 -= VAR_2->runtime->dma_addr;

 return FUNC_0(VAR_2->runtime, VAR_5);
}
