
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_addr; int dma_area; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct vm_area_struct*,int ,int ,int ) ;

int FUNC_1(struct device *VAR_0, struct snd_pcm_substream *VAR_1, struct vm_area_struct *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 return FUNC_0(VAR_0, VAR_2, VAR_3->dma_area, VAR_3->dma_addr, VAR_3->dma_bytes);
}
