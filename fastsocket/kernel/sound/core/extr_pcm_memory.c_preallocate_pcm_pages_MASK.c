
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int type; } ;
struct snd_dma_buffer {size_t bytes; TYPE_1__ dev; } ;
struct snd_pcm_substream {int dma_buf_id; struct snd_dma_buffer dma_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,size_t,struct snd_dma_buffer*) ;
 int FUNC_1 (struct snd_dma_buffer*) ;
 scalar_t__ FUNC_2 (struct snd_dma_buffer*,int ) ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2, size_t VAR_3)
{
 struct snd_dma_buffer *VAR_4 = &VAR_2->dma_buffer;
 int VAR_5;


 if (FUNC_2(VAR_4, VAR_2->dma_buf_id) > 0) {
  if (VAR_4->bytes >= VAR_3)
   return 0;

  FUNC_1(VAR_4);
  VAR_4->bytes = 0;
 }

 do {
  if ((VAR_5 = FUNC_0(VAR_4->dev.type, VAR_4->dev.dev,
            VAR_3, VAR_4)) < 0) {
   if (VAR_5 != -VAR_0)
    return VAR_5;
  } else
   return 0;
  VAR_3 >>= 1;
 } while (VAR_3 >= VAR_1);
 VAR_4->bytes = 0;
 return 0;
}
