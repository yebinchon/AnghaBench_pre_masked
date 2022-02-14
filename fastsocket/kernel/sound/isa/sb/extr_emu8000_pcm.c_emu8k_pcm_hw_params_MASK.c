
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* bytes; } ;
struct snd_pcm_substream {TYPE_3__ dma_buffer; TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_emu8k_pcm {TYPE_4__* block; scalar_t__ offset; void* allocated_bytes; TYPE_2__* emu; } ;
struct TYPE_9__ {int offset; } ;
struct TYPE_7__ {int memhdr; } ;
struct TYPE_6__ {struct snd_emu8k_pcm* private_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct snd_pcm_hw_params*) ;
 TYPE_4__* FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3,
          struct snd_pcm_hw_params *VAR_4)
{
 struct snd_emu8k_pcm *VAR_5 = VAR_3->runtime->private_data;

 if (VAR_5->block) {

  FUNC_2(VAR_5->emu->memhdr, VAR_5->block);
  VAR_5->block = ((void*)0);
 }

 VAR_5->allocated_bytes = FUNC_0(VAR_4) + VAR_2 * 4;
 VAR_5->block = FUNC_1(VAR_5->emu->memhdr, VAR_5->allocated_bytes);
 if (! VAR_5->block)
  return -VAR_1;
 VAR_5->offset = VAR_0 + (VAR_5->block->offset >> 1);

 VAR_3->dma_buffer.bytes = FUNC_0(VAR_4);

 return 0;
}
