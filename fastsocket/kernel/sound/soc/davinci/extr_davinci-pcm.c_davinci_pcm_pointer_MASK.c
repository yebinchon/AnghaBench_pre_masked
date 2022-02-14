
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int buffer_size; scalar_t__ dma_addr; struct davinci_runtime_data* private_data; } ;
struct davinci_runtime_data {int lock; int master_lch; } ;
typedef unsigned int snd_pcm_uframes_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct davinci_runtime_data *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;
 dma_addr_t VAR_5;
 dma_addr_t VAR_6, VAR_7;

 FUNC_2(&VAR_3->lock);

 FUNC_1(VAR_3->master_lch, &VAR_6, &VAR_7);
 if (VAR_1->stream == VAR_0)
  VAR_5 = VAR_6 - VAR_2->dma_addr;
 else
  VAR_5 = VAR_7 - VAR_2->dma_addr;

 FUNC_3(&VAR_3->lock);

 VAR_4 = FUNC_0(VAR_2, VAR_5);
 if (VAR_4 >= VAR_2->buffer_size)
  VAR_4 = 0;

 return VAR_4;
}
