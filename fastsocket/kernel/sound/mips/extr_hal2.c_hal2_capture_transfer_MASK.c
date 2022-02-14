
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_indirect {int hw_data; scalar_t__ sw_data; } ;
struct TYPE_3__ {unsigned char* buffer; } ;
struct snd_hal2 {TYPE_1__ adc; } ;
struct TYPE_4__ {scalar_t__ dma_area; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,size_t,int ) ;
 int FUNC_1 (scalar_t__,unsigned char*,size_t) ;
 struct snd_hal2* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_1,
      struct snd_pcm_indirect *VAR_2, size_t VAR_3)
{
 struct snd_hal2 *VAR_4 = FUNC_2(VAR_1);
 unsigned char *VAR_5 = VAR_4->adc.buffer + VAR_2->hw_data;

 FUNC_0(((void*)0), VAR_5, VAR_3, VAR_0);
 FUNC_1(VAR_1->runtime->dma_area + VAR_2->sw_data, VAR_5, VAR_3);
}
