
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; int buffer_size; int period_size; } ;
struct dw_cyclic_desc {struct atmel_ac97c* period_callback_param; int period_callback; } ;
struct dma_chan {int dummy; } ;
struct TYPE_3__ {struct dma_chan* rx_chan; struct dma_chan* tx_chan; } ;
struct atmel_ac97c {int flags; TYPE_2__* pdev; TYPE_1__ dma; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dw_cyclic_desc*) ;
 int FUNC_1 (struct dw_cyclic_desc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,char*) ;
 struct dw_cyclic_desc* FUNC_3 (struct dma_chan*,int,unsigned long,unsigned long,int) ;
 unsigned long FUNC_4 (struct snd_pcm_runtime*,int) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct atmel_ac97c *VAR_6,
  struct snd_pcm_substream *VAR_7,
  enum dma_data_direction VAR_8)
{
 struct dma_chan *VAR_9;
 struct dw_cyclic_desc *VAR_10;
 struct snd_pcm_runtime *VAR_11 = VAR_7->runtime;
 unsigned long VAR_12, VAR_13;





 if (VAR_11->dma_addr & 1 || VAR_11->buffer_size & 1) {
  FUNC_2(&VAR_6->pdev->dev, "too complex transfer\n");
  return -VAR_3;
 }

 if (VAR_8 == VAR_1)
  VAR_9 = VAR_6->dma.tx_chan;
 else
  VAR_9 = VAR_6->dma.rx_chan;

 VAR_12 = FUNC_4(VAR_11, VAR_11->buffer_size);
 VAR_13 = FUNC_4(VAR_11, VAR_11->period_size);

 VAR_10 = FUNC_3(VAR_9, VAR_11->dma_addr, VAR_12,
   VAR_13, VAR_8);
 if (FUNC_0(VAR_10)) {
  FUNC_2(&VAR_6->pdev->dev, "could not prepare cyclic DMA\n");
  return FUNC_1(VAR_10);
 }

 if (VAR_8 == VAR_1) {
  VAR_10->period_callback = VAR_5;
  FUNC_5(VAR_2, &VAR_6->flags);
 } else {
  VAR_10->period_callback = VAR_4;
  FUNC_5(VAR_0, &VAR_6->flags);
 }

 VAR_10->period_callback_param = VAR_6;

 return 0;
}
