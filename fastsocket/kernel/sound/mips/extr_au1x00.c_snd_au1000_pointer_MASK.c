
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; struct audio_stream* private_data; } ;
struct snd_pcm_runtime {int dummy; } ;
struct audio_stream {TYPE_1__* buffer; int dma_lock; int dma; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {long relative_end; } ;


 int FUNC_0 (struct snd_pcm_runtime*,long) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct audio_stream *VAR_1 = VAR_0->private_data;
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 long VAR_3;

 FUNC_2(&VAR_1->dma_lock);
 VAR_3 = FUNC_1(VAR_1->dma);
 FUNC_3(&VAR_1->dma_lock);
 VAR_3 = VAR_1->buffer->relative_end - VAR_3;
 if (VAR_3 == -1)
  VAR_3 = 0;
 return FUNC_0(VAR_2,VAR_3);
}
