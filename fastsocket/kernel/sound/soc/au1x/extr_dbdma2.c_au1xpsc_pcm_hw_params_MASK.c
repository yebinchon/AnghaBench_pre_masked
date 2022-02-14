
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int min_align; scalar_t__ dma_addr; int dma_bytes; scalar_t__ dma_area; } ;
struct snd_pcm_hw_params {unsigned long msbits; } ;
struct au1xpsc_audio_dmadata {unsigned long periods; unsigned long dma_area_s; unsigned long dma_area; scalar_t__ pos; scalar_t__ curr_period; scalar_t__ q_period; int period_bytes; struct snd_pcm_substream* substream; } ;


 int FUNC_0 (char*,unsigned long,unsigned long,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct au1xpsc_audio_dmadata*,int,unsigned long) ;
 struct au1xpsc_audio_dmadata** VAR_0 ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct au1xpsc_audio_dmadata *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_7(VAR_1, FUNC_4(VAR_2));
 if (VAR_6 < 0)
  goto out;

 VAR_5 = FUNC_2(VAR_1);
 VAR_4 = VAR_0[VAR_5];

 FUNC_0("runtime->dma_area = 0x%08lx dma_addr_t = 0x%08lx dma_size = %d "
     "runtime->min_align %d\n",
  (unsigned long)VAR_3->dma_area,
  (unsigned long)VAR_3->dma_addr, VAR_3->dma_bytes,
  VAR_3->min_align);

 FUNC_0("bits %d  frags %d  frag_bytes %d  is_rx %d\n", VAR_2->msbits,
  FUNC_6(VAR_2), FUNC_5(VAR_2), VAR_5);

 VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_2->msbits);
 if (VAR_6) {
  FUNC_1("DDMA channel (re)alloc failed!\n");
  goto out;
 }

 VAR_4->substream = VAR_1;
 VAR_4->period_bytes = FUNC_5(VAR_2);
 VAR_4->periods = FUNC_6(VAR_2);
 VAR_4->dma_area_s = VAR_4->dma_area = (unsigned long)VAR_3->dma_addr;
 VAR_4->q_period = 0;
 VAR_4->curr_period = 0;
 VAR_4->pos = 0;

 VAR_6 = 0;
out:
 return VAR_6;
}
