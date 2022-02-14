
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dev; int type; } ;
struct snd_dma_buffer {size_t bytes; scalar_t__ area; int addr; int * private_data; TYPE_2__ dev; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_3__* card; TYPE_1__* streams; } ;
struct TYPE_10__ {size_t buffer_bytes_max; } ;
struct TYPE_9__ {scalar_t__ rx_buf; scalar_t__ tx_buf; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,size_t,int *,int ) ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_5 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm *VAR_6, int VAR_7)
{
 struct snd_pcm_substream *VAR_8 = VAR_6->streams[VAR_7].substream;
 struct snd_dma_buffer *VAR_9 = &VAR_8->dma_buffer;
 size_t VAR_10 = VAR_4.buffer_bytes_max;

 VAR_9->dev.type = VAR_2;
 VAR_9->dev.dev = VAR_6->card->dev;
 VAR_9->private_data = ((void*)0);
 VAR_9->area = FUNC_0(VAR_6->card->dev, VAR_10 * 4,
  &VAR_9->addr, VAR_1);
 if (!VAR_9->area) {
  FUNC_1("Failed to allocate dma memory 			Please increase uncached DMA memory region\n");

  return -VAR_0;
 }
 VAR_9->bytes = VAR_10;

 if (VAR_7 == VAR_3)
  VAR_5->tx_buf = VAR_9->area;
 else
  VAR_5->rx_buf = VAR_9->area;

 return 0;
}
