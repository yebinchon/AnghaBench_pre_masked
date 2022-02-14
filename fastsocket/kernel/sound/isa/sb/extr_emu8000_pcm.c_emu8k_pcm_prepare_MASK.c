
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_emu8k_pcm {int voices; int* panning; int dram_opened; TYPE_2__* emu; scalar_t__ buf_size; scalar_t__* loop_start; scalar_t__ offset; int period_size; scalar_t__ period_pos; scalar_t__ last_ptr; scalar_t__ pitch; } ;
struct TYPE_7__ {int emu; } ;
struct TYPE_6__ {int channels; int period_size; scalar_t__ buffer_size; int rate; struct snd_emu8k_pcm* private_data; } ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (struct snd_emu8k_pcm*,int) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 struct snd_emu8k_pcm *VAR_2 = VAR_1->runtime->private_data;

 VAR_2->pitch = 0xe000 + FUNC_2(VAR_1->runtime->rate);
 VAR_2->last_ptr = 0;
 VAR_2->period_pos = 0;

 VAR_2->buf_size = VAR_1->runtime->buffer_size;
 VAR_2->period_size = VAR_1->runtime->period_size;
 VAR_2->voices = VAR_1->runtime->channels;
 VAR_2->loop_start[0] = VAR_2->offset + VAR_0;
 if (VAR_2->voices > 1)
  VAR_2->loop_start[1] = VAR_2->loop_start[0] + VAR_2->buf_size + VAR_0;
 if (VAR_2->voices > 1) {
  VAR_2->panning[0] = 0xff;
  VAR_2->panning[1] = 0x00;
 } else
  VAR_2->panning[0] = 0x80;

 if (! VAR_2->dram_opened) {
  int VAR_3, VAR_4, VAR_5;

  FUNC_6(VAR_2->emu->emu);
  if ((VAR_3 = FUNC_3(VAR_2->emu, VAR_2->voices)) != 0)
   return VAR_3;
  VAR_2->dram_opened = 1;


  FUNC_5(VAR_2->emu, 0);
  FUNC_0(VAR_2->emu, VAR_2->offset);
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(VAR_2->emu, 0);
  for (VAR_5 = 0; VAR_5 < VAR_2->voices; VAR_5++) {
   FUNC_0(VAR_2->emu, VAR_2->loop_start[VAR_5] + VAR_2->buf_size);
   for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    FUNC_1(VAR_2->emu, 0);
  }
 }

 FUNC_4(VAR_2, 0);
 if (VAR_2->voices > 1)
  FUNC_4(VAR_2, 1);
 return 0;
}
