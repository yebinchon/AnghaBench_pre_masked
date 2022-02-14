
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_dma_buffer {size_t bytes; int * area; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct ac97_frame {int dummy; } ;
struct TYPE_7__ {int buffer_bytes_max; } ;
struct TYPE_6__ {int * rx_dma_buf; int * tx_dma_buf; } ;
struct TYPE_5__ {struct snd_pcm_substream* substream; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_3)
{
 struct snd_pcm_substream *VAR_4;
 struct snd_dma_buffer *VAR_5;
 int VAR_6;




 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_4 = VAR_3->streams[VAR_6].substream;
  if (!VAR_4)
   continue;

  VAR_5 = &VAR_4->dma_buffer;
  if (!VAR_5->area)
   continue;
  FUNC_0(((void*)0), VAR_5->bytes, VAR_5->area, 0);
  VAR_5->area = ((void*)0);
 }
 if (VAR_2)
  FUNC_1(VAR_2);
}
