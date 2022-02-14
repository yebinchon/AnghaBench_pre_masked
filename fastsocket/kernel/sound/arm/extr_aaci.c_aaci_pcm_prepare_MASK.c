
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int period_size; scalar_t__ dma_area; struct aaci_runtime* private_data; } ;
struct aaci_runtime {int bytes; int period; void* start; void* ptr; void* end; } ;


 int FUNC_0 (struct snd_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct aaci_runtime *VAR_2 = VAR_1->private_data;

 VAR_2->start = (void *)VAR_1->dma_area;
 VAR_2->end = VAR_2->start + VAR_1->dma_bytes;
 VAR_2->ptr = VAR_2->start;
 VAR_2->period =
 VAR_2->bytes = FUNC_0(VAR_1, VAR_1->period_size);

 return 0;
}
