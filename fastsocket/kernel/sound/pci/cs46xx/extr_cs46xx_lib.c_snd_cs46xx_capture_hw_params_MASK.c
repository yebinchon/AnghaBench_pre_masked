
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int * ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ periods; scalar_t__ dma_bytes; scalar_t__ dma_addr; int * dma_area; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_3__ {int * area; scalar_t__ bytes; scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ hw_buf; } ;
struct snd_cs46xx {TYPE_2__ capt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 struct snd_cs46xx* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4)
{
 struct snd_cs46xx *VAR_5 = FUNC_5(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 int VAR_7;




 if (VAR_6->periods == VAR_0) {
  if (VAR_6->dma_area != VAR_5->capt.hw_buf.area)
   FUNC_3(VAR_3);
  VAR_6->dma_area = VAR_5->capt.hw_buf.area;
  VAR_6->dma_addr = VAR_5->capt.hw_buf.addr;
  VAR_6->dma_bytes = VAR_5->capt.hw_buf.bytes;
  VAR_3->ops = &VAR_2;
 } else {
  if (VAR_6->dma_area == VAR_5->capt.hw_buf.area) {
   VAR_6->dma_area = ((void*)0);
   VAR_6->dma_addr = 0;
   VAR_6->dma_bytes = 0;
  }
  if ((VAR_7 = FUNC_4(VAR_3, FUNC_1(VAR_4))) < 0)
   return VAR_7;
  VAR_3->ops = &VAR_1;
 }

 return 0;
}
