
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct audio_stream {int period_size; int dma; TYPE_2__* buffer; } ;
struct TYPE_4__ {TYPE_1__* next; int start; } ;
struct TYPE_3__ {int start; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct audio_stream *VAR_0)
{
 if (FUNC_9(!VAR_0->buffer))
  return;

 FUNC_4(VAR_0->dma);
 if (FUNC_3(VAR_0->dma) == 0) {
  FUNC_0(VAR_0->dma);
  FUNC_5(VAR_0->dma, VAR_0->buffer->start);
  FUNC_7(VAR_0->dma, VAR_0->period_size >> 1);
  FUNC_6(VAR_0->dma, VAR_0->buffer->next->start);
  FUNC_8(VAR_0->dma, VAR_0->period_size >> 1);
 } else {
  FUNC_1(VAR_0->dma);
  FUNC_6(VAR_0->dma, VAR_0->buffer->start);
  FUNC_8(VAR_0->dma, VAR_0->period_size >> 1);
  FUNC_5(VAR_0->dma, VAR_0->buffer->next->start);
  FUNC_7(VAR_0->dma, VAR_0->period_size >> 1);
 }
 FUNC_2(VAR_0->dma);
 FUNC_10(VAR_0->dma);
}
