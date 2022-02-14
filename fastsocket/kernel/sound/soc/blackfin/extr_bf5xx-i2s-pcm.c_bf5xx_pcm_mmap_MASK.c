
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; unsigned long vm_start; int vm_flags; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_area; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_1,
 struct vm_area_struct *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 size_t VAR_4 = VAR_2->vm_end - VAR_2->vm_start;
 VAR_2->vm_start = (unsigned long)VAR_3->dma_area;
 VAR_2->vm_end = VAR_2->vm_start + VAR_4;
 VAR_2->vm_flags |= VAR_0;

 return 0 ;
}
