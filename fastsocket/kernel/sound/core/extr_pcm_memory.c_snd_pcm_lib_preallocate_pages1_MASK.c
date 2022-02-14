
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bytes; } ;
struct snd_pcm_substream {scalar_t__ number; scalar_t__ buffer_bytes_max; size_t dma_max; TYPE_1__ dma_buffer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*,size_t) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
       size_t VAR_3, size_t VAR_4)
{

 if (VAR_3 > 0 && VAR_1 && VAR_2->number < VAR_0)
  FUNC_1(VAR_2, VAR_3);

 if (VAR_2->dma_buffer.bytes > 0)
  VAR_2->buffer_bytes_max = VAR_2->dma_buffer.bytes;
 VAR_2->dma_max = VAR_4;
 FUNC_0(VAR_2);
 return 0;
}
