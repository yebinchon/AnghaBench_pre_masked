
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_cs46xx {int reg_lock; TYPE_1__* dsp_spos_instance; } ;
struct dsp_pcm_channel_descriptor {int unlinked; TYPE_2__* src_scb; int pcm_reader_scb; int active; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {scalar_t__ npcm_channels; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6 (struct snd_cs46xx * VAR_1,
      struct dsp_pcm_channel_descriptor * VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_1(!VAR_2->active ||
         VAR_1->dsp_spos_instance->npcm_channels <= 0))
  return -VAR_0;

 FUNC_2(&VAR_2->src_scb->lock);

 if (VAR_2->unlinked) {
  FUNC_4(&VAR_2->src_scb->lock);
  return -VAR_0;
 }

 FUNC_3(&VAR_1->reg_lock, VAR_3);
 VAR_2->unlinked = 1;
 FUNC_5(&VAR_1->reg_lock, VAR_3);

 FUNC_0 (VAR_1,VAR_2->pcm_reader_scb);

 FUNC_4(&VAR_2->src_scb->lock);
 return 0;
}
