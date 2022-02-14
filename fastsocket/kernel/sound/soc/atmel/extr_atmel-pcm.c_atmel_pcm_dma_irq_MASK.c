
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct atmel_runtime_data {int period_ptr; int period_size; int dma_buffer_end; int dma_buffer; struct atmel_pcm_dma_params* params; } ;
struct atmel_pcm_dma_params {int pdc_xfer_size; TYPE_4__* pdc; TYPE_3__* ssc; TYPE_2__* mask; int name; } ;
struct TYPE_8__ {int xncr; int xnpr; int xcr; int xpr; } ;
struct TYPE_7__ {int regs; } ;
struct TYPE_6__ {int ssc_endbuf; int pdc_disable; int pdc_enable; int ssc_endx; } ;
struct TYPE_5__ {struct atmel_runtime_data* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int ,int,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2,
 struct snd_pcm_substream *VAR_3)
{
 struct atmel_runtime_data *VAR_4 = VAR_3->runtime->private_data;
 struct atmel_pcm_dma_params *VAR_5 = VAR_4->params;
 static int VAR_6;

 VAR_6++;

 if (VAR_2 & VAR_5->mask->ssc_endbuf) {
  FUNC_0("atmel-pcm: buffer %s on %s"
    " (SSC_SR=%#x, count=%d)\n",
    VAR_3->stream == VAR_1
    ? "underrun" : "overrun",
    VAR_5->name, VAR_2, VAR_6);


  FUNC_2(VAR_5->ssc->regs, VAR_0,
      VAR_5->mask->pdc_disable);
  VAR_4->period_ptr += VAR_4->period_size;
  if (VAR_4->period_ptr >= VAR_4->dma_buffer_end)
   VAR_4->period_ptr = VAR_4->dma_buffer;

  FUNC_2(VAR_5->ssc->regs, VAR_5->pdc->xpr,
      VAR_4->period_ptr);
  FUNC_2(VAR_5->ssc->regs, VAR_5->pdc->xcr,
      VAR_4->period_size / VAR_5->pdc_xfer_size);
  FUNC_2(VAR_5->ssc->regs, VAR_0,
      VAR_5->mask->pdc_enable);
 }

 if (VAR_2 & VAR_5->mask->ssc_endx) {

  VAR_4->period_ptr += VAR_4->period_size;
  if (VAR_4->period_ptr >= VAR_4->dma_buffer_end)
   VAR_4->period_ptr = VAR_4->dma_buffer;

  FUNC_2(VAR_5->ssc->regs, VAR_5->pdc->xnpr,
      VAR_4->period_ptr);
  FUNC_2(VAR_5->ssc->regs, VAR_5->pdc->xncr,
      VAR_4->period_size / VAR_5->pdc_xfer_size);
 }

 FUNC_1(VAR_3);
}
