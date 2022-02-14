
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int * ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; scalar_t__ dma_addr; int * dma_area; struct snd_cs46xx_pcm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {int * area; scalar_t__ bytes; scalar_t__ addr; } ;
struct snd_cs46xx_pcm {scalar_t__ pcm_channel_id; TYPE_1__ hw_buf; int pcm_channel; } ;
struct snd_cs46xx {int spos_mutex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct snd_cs46xx*,struct snd_cs46xx_pcm*,int) ;
 scalar_t__ FUNC_1 (struct snd_cs46xx*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (struct snd_pcm_substream*,int ) ;
 struct snd_cs46xx* FUNC_12 (struct snd_pcm_substream*) ;
 int FUNC_13 (char*,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_15,
      struct snd_pcm_hw_params *VAR_16)
{
 struct snd_pcm_runtime *VAR_17 = VAR_15->runtime;
 struct snd_cs46xx_pcm *VAR_18;
 int VAR_19;





 VAR_18 = VAR_17->private_data;
 if (FUNC_6(VAR_16) == VAR_0) {
  if (VAR_17->dma_area != VAR_18->hw_buf.area)
   FUNC_10(VAR_15);
  VAR_17->dma_area = VAR_18->hw_buf.area;
  VAR_17->dma_addr = VAR_18->hw_buf.addr;
  VAR_17->dma_bytes = VAR_18->hw_buf.bytes;
  VAR_15->ops = &VAR_13;


 } else {
  if (VAR_17->dma_area == VAR_18->hw_buf.area) {
   VAR_17->dma_area = ((void*)0);
   VAR_17->dma_addr = 0;
   VAR_17->dma_bytes = 0;
  }
  if ((VAR_19 = FUNC_11(VAR_15, FUNC_4(VAR_16))) < 0) {



   return VAR_19;
  }
  VAR_15->ops = &VAR_11;


 }





 return 0;
}
