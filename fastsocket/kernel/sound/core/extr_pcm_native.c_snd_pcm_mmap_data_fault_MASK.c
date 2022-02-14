
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_fault {unsigned long pgoff; struct page* page; } ;
struct vm_area_struct {struct snd_pcm_substream* vm_private_data; } ;
struct snd_pcm_substream {TYPE_1__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {void* dma_area; int dma_bytes; } ;
struct page {int dummy; } ;
struct TYPE_2__ {struct page* (* page ) (struct snd_pcm_substream*,unsigned long) ;} ;


 size_t FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct snd_pcm_substream*,unsigned long) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_3,
      struct vm_fault *VAR_4)
{
 struct snd_pcm_substream *VAR_5 = VAR_3->vm_private_data;
 struct snd_pcm_runtime *VAR_6;
 unsigned long VAR_7;
 struct page * VAR_8;
 void *VAR_9;
 size_t VAR_10;

 if (VAR_5 == ((void*)0))
  return VAR_2;
 VAR_6 = VAR_5->runtime;
 VAR_7 = VAR_4->pgoff << VAR_0;
 VAR_10 = FUNC_0(VAR_6->dma_bytes);
 if (VAR_7 > VAR_10 - VAR_1)
  return VAR_2;
 if (VAR_5->ops->page) {
  VAR_8 = VAR_5->ops->page(VAR_5, VAR_7);
  if (!VAR_8)
   return VAR_2;
 } else {
  VAR_9 = VAR_6->dma_area + VAR_7;
  VAR_8 = FUNC_3(VAR_9);
 }
 FUNC_1(VAR_8);
 VAR_4->page = VAR_8;
 return 0;
}
