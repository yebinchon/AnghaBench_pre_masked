
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_stream {int dma; int buffer; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct audio_stream *VAR_0)
{
 if (FUNC_1(!VAR_0->buffer))
  return;
 FUNC_0(VAR_0->dma);
}
