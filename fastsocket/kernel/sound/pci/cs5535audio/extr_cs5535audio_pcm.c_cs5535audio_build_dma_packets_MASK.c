
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct cs5535audio_dma_desc {int addr; void* ctlreserved; void* size; } ;
struct TYPE_6__ {scalar_t__ addr; int * area; } ;
struct cs5535audio_dma {unsigned int period_bytes; unsigned int periods; TYPE_2__* ops; struct snd_pcm_substream* substream; TYPE_3__ desc_buf; } ;
struct cs5535audio {int reg_lock; int pci; } ;
struct TYPE_5__ {int (* setup_prd ) (struct cs5535audio*,int) ;int (* disable_dma ) (struct cs5535audio*) ;} ;
struct TYPE_4__ {scalar_t__ dma_addr; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct cs5535audio*) ;
 int FUNC_6 (struct cs5535audio*,int) ;

__attribute__((used)) static int FUNC_7(struct cs5535audio *VAR_6,
      struct cs5535audio_dma *VAR_7,
      struct snd_pcm_substream *VAR_8,
      unsigned int VAR_9,
      unsigned int VAR_10)
{
 unsigned int VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 struct cs5535audio_dma_desc *VAR_15;

 if (VAR_9 > VAR_1)
  return -VAR_2;

 if (VAR_7->desc_buf.area == ((void*)0)) {
  if (FUNC_1(VAR_5,
     FUNC_2(VAR_6->pci),
     VAR_0+1,
     &VAR_7->desc_buf) < 0)
   return -VAR_2;
  VAR_7->period_bytes = VAR_7->periods = 0;
 }

 if (VAR_7->periods == VAR_9 && VAR_7->period_bytes == VAR_10)
  return 0;



 VAR_12 = (u32) VAR_8->runtime->dma_addr;
 VAR_13 = (u32) VAR_7->desc_buf.addr;
 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  struct cs5535audio_dma_desc *VAR_16 =
   &((struct cs5535audio_dma_desc *) VAR_7->desc_buf.area)[VAR_11];
  VAR_16->addr = FUNC_0(VAR_12);
  VAR_16->size = FUNC_0(VAR_10);
  VAR_16->ctlreserved = FUNC_0(VAR_3);
  VAR_13 += sizeof(struct cs5535audio_dma_desc);
  VAR_12 += VAR_10;
 }

 VAR_15 = &((struct cs5535audio_dma_desc *) VAR_7->desc_buf.area)[VAR_9];
 VAR_15->addr = FUNC_0((u32) VAR_7->desc_buf.addr);
 VAR_15->size = 0;
 VAR_15->ctlreserved = FUNC_0(VAR_4);
 VAR_14 = FUNC_0(VAR_15->addr +
      (sizeof(struct cs5535audio_dma_desc)*VAR_9));

 VAR_7->substream = VAR_8;
 VAR_7->period_bytes = VAR_10;
 VAR_7->periods = VAR_9;
 FUNC_3(&VAR_6->reg_lock);
 VAR_7->ops->disable_dma(VAR_6);
 VAR_7->ops->setup_prd(VAR_6, VAR_14);
 FUNC_4(&VAR_6->reg_lock);
 return 0;
}
