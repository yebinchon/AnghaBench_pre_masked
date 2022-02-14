
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_area; int buffer_size; struct atmel_runtime_data* private_data; } ;
struct atmel_runtime_data {int period_ptr; int dma_buffer; int period_size; struct atmel_pcm_dma_params* params; } ;
struct atmel_pcm_dma_params {int pdc_xfer_size; TYPE_3__* mask; TYPE_2__* ssc; TYPE_1__* pdc; } ;
struct TYPE_6__ {int ssc_endx; int ssc_endbuf; int pdc_enable; int pdc_disable; } ;
struct TYPE_5__ {int regs; } ;
struct TYPE_4__ {int xncr; int xnpr; int xcr; int xpr; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned long,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_5,
 int VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct atmel_runtime_data *VAR_8 = VAR_7->private_data;
 struct atmel_pcm_dma_params *VAR_9 = VAR_8->params;
 int VAR_10 = 0;

 FUNC_0("atmel-pcm:buffer_size = %ld,"
  "dma_area = %p, dma_bytes = %u\n",
  VAR_7->buffer_size, VAR_7->dma_area, VAR_7->dma_bytes);

 switch (VAR_6) {
 case 130:
  VAR_8->period_ptr = VAR_8->dma_buffer;

  FUNC_2(VAR_9->ssc->regs, VAR_9->pdc->xpr,
      VAR_8->period_ptr);
  FUNC_2(VAR_9->ssc->regs, VAR_9->pdc->xcr,
      VAR_8->period_size / VAR_9->pdc_xfer_size);

  VAR_8->period_ptr += VAR_8->period_size;
  FUNC_2(VAR_9->ssc->regs, VAR_9->pdc->xnpr,
      VAR_8->period_ptr);
  FUNC_2(VAR_9->ssc->regs, VAR_9->pdc->xncr,
      VAR_8->period_size / VAR_9->pdc_xfer_size);

  FUNC_0("atmel-pcm: trigger: "
   "period_ptr=%lx, xpr=%u, "
   "xcr=%u, xnpr=%u, xncr=%u\n",
   (unsigned long)VAR_8->period_ptr,
   FUNC_1(VAR_9->ssc->regs, VAR_9->pdc->xpr),
   FUNC_1(VAR_9->ssc->regs, VAR_9->pdc->xcr),
   FUNC_1(VAR_9->ssc->regs, VAR_9->pdc->xnpr),
   FUNC_1(VAR_9->ssc->regs, VAR_9->pdc->xncr));

  FUNC_2(VAR_9->ssc->regs, VAR_2,
      VAR_9->mask->ssc_endx | VAR_9->mask->ssc_endbuf);
  FUNC_2(VAR_9->ssc->regs, VAR_3,
      VAR_9->mask->pdc_enable);

  FUNC_0("sr=%u imr=%u\n",
   FUNC_1(VAR_9->ssc->regs, VAR_4),
   FUNC_1(VAR_9->ssc->regs, VAR_2));
  break;

 case 129:
 case 128:
 case 133:
  FUNC_2(VAR_9->ssc->regs, VAR_0,
      VAR_9->mask->pdc_disable);
  break;

 case 131:
 case 132:
  FUNC_2(VAR_9->ssc->regs, VAR_0,
      VAR_9->mask->pdc_enable);
  break;

 default:
  VAR_10 = -VAR_1;
 }

 return VAR_10;
}
