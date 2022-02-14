
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int buffer_size; scalar_t__ dma_addr; struct omap_runtime_data* private_data; } ;
struct omap_runtime_data {int period_index; int dma_ch; } ;
typedef int snd_pcm_uframes_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct omap_runtime_data *VAR_3 = VAR_2->private_data;
 dma_addr_t VAR_4;
 snd_pcm_uframes_t VAR_5;

 if (VAR_1->stream == VAR_0) {
  VAR_4 = FUNC_2(VAR_3->dma_ch);
  VAR_5 = FUNC_0(VAR_2, VAR_4 - VAR_2->dma_addr);
 } else if (!(FUNC_1())) {
  VAR_4 = FUNC_3(VAR_3->dma_ch);
  VAR_5 = FUNC_0(VAR_2, VAR_4 - VAR_2->dma_addr);
 } else
  VAR_5 = VAR_3->period_index * VAR_2->period_size;

 if (VAR_5 >= VAR_2->buffer_size)
  VAR_5 = 0;

 return VAR_5;
}
