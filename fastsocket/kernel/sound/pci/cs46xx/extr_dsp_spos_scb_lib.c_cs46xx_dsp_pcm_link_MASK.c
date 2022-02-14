
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int reg_lock; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {struct dsp_scb_descriptor* the_null_scb; } ;
struct dsp_scb_descriptor {int lock; struct dsp_scb_descriptor* parent_scb_ptr; struct dsp_scb_descriptor* sub_list_ptr; struct dsp_scb_descriptor* next_scb_ptr; } ;
struct dsp_pcm_channel_descriptor {scalar_t__ unlinked; struct dsp_scb_descriptor* src_scb; struct dsp_scb_descriptor* pcm_reader_scb; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,struct dsp_scb_descriptor*) ;
 int FUNC_1 (struct dsp_scb_descriptor*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6 (struct snd_cs46xx * VAR_1,
    struct dsp_pcm_channel_descriptor * VAR_2)
{
 struct dsp_spos_instance * VAR_3 = VAR_1->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_4;
 struct dsp_scb_descriptor * VAR_5 = VAR_2->src_scb;
 unsigned long VAR_6;

 FUNC_2(&VAR_2->src_scb->lock);

 if (VAR_2->unlinked == 0) {
  FUNC_4(&VAR_2->src_scb->lock);
  return -VAR_0;
 }

 VAR_4 = VAR_5;

 if (VAR_5->sub_list_ptr != VAR_3->the_null_scb) {
  VAR_5->sub_list_ptr->parent_scb_ptr = VAR_2->pcm_reader_scb;
  VAR_2->pcm_reader_scb->next_scb_ptr = VAR_5->sub_list_ptr;
 }

 VAR_5->sub_list_ptr = VAR_2->pcm_reader_scb;

 FUNC_1(VAR_2->pcm_reader_scb->parent_scb_ptr);
 VAR_2->pcm_reader_scb->parent_scb_ptr = VAR_4;

 FUNC_3(&VAR_1->reg_lock, VAR_6);


 FUNC_0(VAR_1,VAR_2->pcm_reader_scb);


 FUNC_0(VAR_1,VAR_4);

 VAR_2->unlinked = 0;
 FUNC_5(&VAR_1->reg_lock, VAR_6);

 FUNC_4(&VAR_2->src_scb->lock);
 return 0;
}
