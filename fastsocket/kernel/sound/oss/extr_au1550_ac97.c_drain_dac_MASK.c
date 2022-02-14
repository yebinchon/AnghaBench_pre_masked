
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int fragsize; int sample_rate; int dma_bytes_per_sample; scalar_t__ stopped; int ready; scalar_t__ mapped; } ;
struct au1550_state {TYPE_1__ dma_dac; scalar_t__ no_vra; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct au1550_state *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6, VAR_7;

 if (VAR_3->dma_dac.mapped || !VAR_3->dma_dac.ready || VAR_3->dma_dac.stopped)
  return 0;

 for (;;) {
  FUNC_2(&VAR_3->lock, VAR_5);
  VAR_6 = VAR_3->dma_dac.count;
  FUNC_3(&VAR_3->lock, VAR_5);
  if (VAR_6 <= VAR_3->dma_dac.fragsize)
   break;
  if (FUNC_1(VAR_2))
   break;
  if (VAR_4)
   return -VAR_0;
  VAR_7 = 1000 * VAR_6 / (VAR_3->no_vra ?
          48000 : VAR_3->dma_dac.sample_rate);
  VAR_7 /= VAR_3->dma_dac.dma_bytes_per_sample;
  FUNC_0(VAR_7);
 }
 if (FUNC_1(VAR_2))
  return -VAR_1;
 return 0;
}
