
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {int reg_lock; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {scalar_t__ npcm_channels; int nsrc_scb; scalar_t__* src_scb_slots; } ;
struct dsp_pcm_channel_descriptor {int unlinked; size_t src_slot; TYPE_1__* src_scb; TYPE_1__* pcm_reader_scb; int * private_data; scalar_t__ active; } ;
struct TYPE_2__ {scalar_t__ ref_count; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4 (struct snd_cs46xx * VAR_1,
         struct dsp_pcm_channel_descriptor * VAR_2)
{
 struct dsp_spos_instance * VAR_3 = VAR_1->dsp_spos_instance;
 unsigned long VAR_4;

 if (FUNC_1(!VAR_2->active ||
         VAR_3->npcm_channels <= 0 ||
         VAR_2->src_scb->ref_count <= 0))
  return;

 FUNC_2(&VAR_1->reg_lock, VAR_4);
 VAR_2->unlinked = 1;
 VAR_2->active = 0;
 VAR_2->private_data = ((void*)0);
 VAR_2->src_scb->ref_count --;
 VAR_3->npcm_channels --;
 FUNC_3(&VAR_1->reg_lock, VAR_4);

 FUNC_0(VAR_1,VAR_2->pcm_reader_scb);

 if (!VAR_2->src_scb->ref_count) {
  FUNC_0(VAR_1,VAR_2->src_scb);

  if (FUNC_1(VAR_2->src_slot < 0 ||
          VAR_2->src_slot >= VAR_0))
   return;

  VAR_3->src_scb_slots[VAR_2->src_slot] = 0;
  VAR_3->nsrc_scb --;
 }
}
