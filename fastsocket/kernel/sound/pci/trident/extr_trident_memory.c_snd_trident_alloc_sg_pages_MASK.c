
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
struct snd_pcm_runtime {int dma_bytes; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_util_memhdr*,struct snd_util_memblk*) ;
 int FUNC_1 (struct snd_util_memblk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_util_memblk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct snd_util_memblk* FUNC_6 (struct snd_util_memhdr*,int) ;
 int FUNC_7 (struct snd_trident*,int,unsigned long,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct snd_pcm_substream*,unsigned long) ;
 scalar_t__ FUNC_10 (struct snd_pcm_substream*,unsigned long) ;

__attribute__((used)) static struct snd_util_memblk *
FUNC_11(struct snd_trident *VAR_3,
      struct snd_pcm_substream *VAR_4)
{
 struct snd_util_memhdr *VAR_5;
 struct snd_util_memblk *VAR_6;
 struct snd_pcm_runtime *VAR_7 = VAR_4->runtime;
 int VAR_8, VAR_9;

 if (FUNC_8(VAR_7->dma_bytes <= 0 ||
         VAR_7->dma_bytes > VAR_1 *
     VAR_2))
  return ((void*)0);
 VAR_5 = VAR_3->tlb.memhdr;
 if (FUNC_8(!VAR_5))
  return ((void*)0);



 FUNC_4(&VAR_5->block_mutex);
 VAR_6 = FUNC_6(VAR_5, VAR_7->dma_bytes);
 if (VAR_6 == ((void*)0)) {
  FUNC_5(&VAR_5->block_mutex);
  return ((void*)0);
 }


 VAR_8 = 0;
 for (VAR_9 = FUNC_1(VAR_6); VAR_9 <= FUNC_3(VAR_6); VAR_9++, VAR_8++) {
  unsigned long VAR_10 = VAR_8 << VAR_0;
  dma_addr_t VAR_11 = FUNC_9(VAR_4, VAR_10);
  unsigned long VAR_12 = (unsigned long)
   FUNC_10(VAR_4, VAR_10);
  if (! FUNC_2(VAR_11)) {
   FUNC_0(VAR_5, VAR_6);
   FUNC_5(&VAR_5->block_mutex);
   return ((void*)0);
  }
  FUNC_7(VAR_3, VAR_9, VAR_12, VAR_11);
 }
 FUNC_5(&VAR_5->block_mutex);
 return VAR_6;
}
