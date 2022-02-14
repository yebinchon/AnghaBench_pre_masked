
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct snd_soc_pcm_runtime {TYPE_7__* socdev; TYPE_2__* dai; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_pcm {TYPE_9__* streams; TYPE_3__* card; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_card {TYPE_11__* dev; } ;
struct psc_dma {int dummy; } ;
struct TYPE_22__ {TYPE_8__* substream; } ;
struct TYPE_21__ {int dma_buffer; } ;
struct TYPE_20__ {TYPE_6__* card; int dev; } ;
struct TYPE_19__ {TYPE_5__* codec; } ;
struct TYPE_18__ {TYPE_4__* ac97; } ;
struct TYPE_17__ {struct psc_dma* private_data; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_15__ {TYPE_1__* cpu_dai; } ;
struct TYPE_14__ {struct psc_dma* private_data; } ;
struct TYPE_13__ {int coherent_dma_mask; int * dma_mask; } ;
struct TYPE_12__ {size_t buffer_bytes_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct snd_card*,struct snd_soc_dai*,struct snd_pcm*) ;
 int FUNC_1 (TYPE_11__*,char*) ;
 int VAR_2 ;
 TYPE_10__ VAR_3 ;
 int FUNC_2 (int ,int ,size_t,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_card *VAR_4, struct snd_soc_dai *VAR_5,
      struct snd_pcm *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_6->private_data;
 struct psc_dma *VAR_8 = VAR_7->dai->cpu_dai->private_data;
 size_t VAR_9 = VAR_3.buffer_bytes_max;
 int VAR_10 = 0;

 FUNC_0(VAR_7->socdev->dev, "psc_dma_new(card=%p, dai=%p, pcm=%p)\n",
  VAR_4, VAR_5, VAR_6);

 if (!VAR_4->dev->dma_mask)
  VAR_4->dev->dma_mask = &VAR_2;
 if (!VAR_4->dev->coherent_dma_mask)
  VAR_4->dev->coherent_dma_mask = 0xffffffff;

 if (VAR_6->streams[0].substream) {
  VAR_10 = FUNC_2(VAR_1, VAR_6->card->dev,
    VAR_9, &VAR_6->streams[0].substream->dma_buffer);
  if (VAR_10)
   goto playback_alloc_err;
 }

 if (VAR_6->streams[1].substream) {
  VAR_10 = FUNC_2(VAR_1, VAR_6->card->dev,
    VAR_9, &VAR_6->streams[1].substream->dma_buffer);
  if (VAR_10)
   goto capture_alloc_err;
 }

 if (VAR_7->socdev->card->codec->ac97)
  VAR_7->socdev->card->codec->ac97->private_data = VAR_8;

 return 0;

 capture_alloc_err:
 if (VAR_6->streams[0].substream)
  FUNC_3(&VAR_6->streams[0].substream->dma_buffer);

 playback_alloc_err:
 FUNC_1(VAR_4->dev, "Cannot allocate buffer(s)\n");

 return -VAR_0;
}
