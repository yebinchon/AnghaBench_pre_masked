
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_dma_buffer {int * area; int bytes; } ;
struct snd_pcm_substream {struct snd_dma_buffer dma_buffer; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct snd_pcm *VAR_1)
{
 struct snd_pcm_substream *VAR_2;
 struct snd_dma_buffer *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_2 = VAR_1->streams[VAR_4].substream;
  if (!VAR_2)
   continue;

  VAR_3 = &VAR_2->dma_buffer;
  if (!VAR_3->area)
   continue;
  FUNC_0(((void*)0), VAR_3->bytes, VAR_3->area, 0);
  VAR_3->area = ((void*)0);
 }
 if (VAR_0)
  FUNC_1(VAR_0);
}
