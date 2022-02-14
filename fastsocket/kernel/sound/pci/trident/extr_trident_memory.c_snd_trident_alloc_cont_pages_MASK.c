
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_util_memhdr {int block_mutex; } ;
struct snd_util_memblk {int dummy; } ;
struct TYPE_2__ {struct snd_util_memhdr* memhdr; } ;
struct snd_trident {TYPE_1__ tlb; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned long dma_bytes; unsigned long dma_addr; scalar_t__ dma_area; } ;
typedef unsigned long dma_addr_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct snd_util_memhdr*,struct snd_util_memblk*) ;
 int FUNC_1 (struct snd_util_memblk*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct snd_util_memblk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct snd_util_memblk* FUNC_6 (struct snd_util_memhdr*,unsigned long) ;
 int FUNC_7 (struct snd_trident*,int,unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct snd_util_memblk *
FUNC_9(struct snd_trident *VAR_2,
        struct snd_pcm_substream *VAR_3)
{
 struct snd_util_memhdr *VAR_4;
 struct snd_util_memblk *VAR_5;
 int VAR_6;
 struct snd_pcm_runtime *VAR_7 = VAR_3->runtime;
 dma_addr_t VAR_8;
 unsigned long VAR_9;

 if (FUNC_8(VAR_7->dma_bytes <= 0 ||
         VAR_7->dma_bytes > VAR_0 *
     VAR_1))
  return ((void*)0);
 VAR_4 = VAR_2->tlb.memhdr;
 if (FUNC_8(!VAR_4))
  return ((void*)0);

 FUNC_4(&VAR_4->block_mutex);
 VAR_5 = FUNC_6(VAR_4, VAR_7->dma_bytes);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(&VAR_4->block_mutex);
  return ((void*)0);
 }


 VAR_8 = VAR_7->dma_addr;
 VAR_9 = (unsigned long)VAR_7->dma_area;
 for (VAR_6 = FUNC_1(VAR_5); VAR_6 <= FUNC_3(VAR_5); VAR_6++,
      VAR_9 += VAR_1, VAR_8 += VAR_1) {
  if (! FUNC_2(VAR_8)) {
   FUNC_0(VAR_4, VAR_5);
   FUNC_5(&VAR_4->block_mutex);
   return ((void*)0);
  }
  FUNC_7(VAR_2, VAR_6, VAR_9, VAR_8);
 }
 FUNC_5(&VAR_4->block_mutex);
 return VAR_5;
}
