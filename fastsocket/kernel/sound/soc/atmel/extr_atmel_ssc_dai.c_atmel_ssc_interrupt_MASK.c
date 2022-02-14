
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct atmel_ssc_info {struct atmel_pcm_dma_params** dma_params; TYPE_1__* ssc; } ;
struct atmel_pcm_dma_params {int substream; int (* dma_intr_handler ) (int,int ) ;TYPE_2__* mask; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int ssc_endx; int ssc_endbuf; } ;
struct TYPE_3__ {int regs; } ;


 int FUNC_0 (struct atmel_pcm_dma_params**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct atmel_ssc_info *VAR_5 = VAR_4;
 struct atmel_pcm_dma_params *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = (unsigned long)FUNC_1(VAR_5->ssc->regs, VAR_2)
   & (unsigned long)FUNC_1(VAR_5->ssc->regs, VAR_0);







 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5->dma_params); VAR_9++) {
  VAR_6 = VAR_5->dma_params[VAR_9];

  if ((VAR_6 != ((void*)0)) &&
   (VAR_6->dma_intr_handler != ((void*)0))) {
   VAR_8 = (VAR_6->mask->ssc_endx |
     VAR_6->mask->ssc_endbuf);
   if (VAR_7 & VAR_8) {
    VAR_6->dma_intr_handler(VAR_7,
      VAR_6->
      substream);
   }
  }
 }

 return VAR_1;
}
