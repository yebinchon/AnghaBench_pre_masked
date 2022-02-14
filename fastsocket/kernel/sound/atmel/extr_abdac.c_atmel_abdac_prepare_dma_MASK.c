
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; int buffer_size; int period_size; } ;
struct dw_cyclic_desc {struct atmel_abdac* period_callback_param; int period_callback; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {struct dw_cyclic_desc* cdesc; struct dma_chan* chan; } ;
struct atmel_abdac {int flags; TYPE_2__ dma; TYPE_1__* pdev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct dw_cyclic_desc*) ;
 int FUNC_1 (struct dw_cyclic_desc*) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 struct dw_cyclic_desc* FUNC_3 (struct dma_chan*,int,unsigned long,unsigned long,int ) ;
 unsigned long FUNC_4 (struct snd_pcm_runtime*,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct atmel_abdac *VAR_4,
  struct snd_pcm_substream *VAR_5,
  enum dma_data_direction VAR_6)
{
 struct dma_chan *VAR_7 = VAR_4->dma.chan;
 struct dw_cyclic_desc *VAR_8;
 struct snd_pcm_runtime *VAR_9 = VAR_5->runtime;
 unsigned long VAR_10, VAR_11;





 if (VAR_9->dma_addr & 1 || VAR_9->buffer_size & 1) {
  FUNC_2(&VAR_4->pdev->dev, "too complex transfer\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_9->buffer_size);
 VAR_11 = FUNC_4(VAR_9, VAR_9->period_size);

 VAR_8 = FUNC_3(VAR_7, VAR_9->dma_addr, VAR_10,
   VAR_11, VAR_1);
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_4->pdev->dev, "could not prepare cyclic DMA\n");
  return FUNC_1(VAR_8);
 }

 VAR_8->period_callback = VAR_3;
 VAR_8->period_callback_param = VAR_4;

 VAR_4->dma.cdesc = VAR_8;

 FUNC_5(VAR_0, &VAR_4->flags);

 return 0;
}
