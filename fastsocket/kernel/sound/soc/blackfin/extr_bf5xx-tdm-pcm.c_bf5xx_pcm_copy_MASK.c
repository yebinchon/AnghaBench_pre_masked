
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int channels; scalar_t__ dma_area; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_1, int VAR_2,
 snd_pcm_uframes_t VAR_3, void *VAR_4, snd_pcm_uframes_t VAR_5)
{
 unsigned int *VAR_6;
 unsigned int *VAR_7;
 int VAR_8;

 if (VAR_1->stream == VAR_0) {
  VAR_6 = VAR_4;
  VAR_7 = (unsigned int *)VAR_1->runtime->dma_area;

  VAR_7 += VAR_3 * 8;
  while (VAR_5--) {
   for (VAR_8 = 0; VAR_8 < VAR_1->runtime->channels; VAR_8++)
    *(VAR_7 + VAR_8) = *VAR_6++;
   VAR_7 += 8;
  }
 } else {
  VAR_6 = (unsigned int *)VAR_1->runtime->dma_area;
  VAR_7 = VAR_4;

  VAR_6 += VAR_3 * 8;
  while (VAR_5--) {
   for (VAR_8 = 0; VAR_8 < VAR_1->runtime->channels; VAR_8++)
    *VAR_7++ = *(VAR_6+VAR_8);
   VAR_6 += 8;
  }
 }

 return 0;
}
