
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int nscb; scalar_t__ the_null_scb; size_t scb_highest_frag_index; struct dsp_scb_descriptor* scbs; } ;
struct dsp_scb_descriptor {int index; scalar_t__ sub_list_ptr; scalar_t__ next_scb_ptr; int deleted; int scb_symbol; int lock; } ;


 int FUNC_0 (struct snd_cs46xx*,struct dsp_scb_descriptor*) ;
 int FUNC_1 (struct dsp_scb_descriptor*) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_cs46xx*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6 (struct snd_cs46xx *VAR_1, struct dsp_scb_descriptor * VAR_2)
{
 struct dsp_spos_instance * VAR_3 = VAR_1->dsp_spos_instance;
 unsigned long VAR_4;


 if (FUNC_3(VAR_2->index < 0 ||
         VAR_2->index >= VAR_3->nscb ||
         (VAR_3->scbs + VAR_2->index) != VAR_2))
  return;
 FUNC_4(&VAR_2->lock, VAR_4);
 FUNC_0 (VAR_1,VAR_2);
 FUNC_5(&VAR_2->lock, VAR_4);

 FUNC_1(VAR_2);
 if (FUNC_3(!VAR_2->scb_symbol))
  return;
 FUNC_2 (VAR_1,VAR_2->scb_symbol);

 VAR_3->scbs[VAR_2->index].deleted = 1;

 if (VAR_2->index < VAR_3->scb_highest_frag_index)
  VAR_3->scb_highest_frag_index = VAR_2->index;

 if (VAR_2->index == VAR_3->nscb - 1) {
  VAR_3->nscb --;
 }

 if (VAR_3->scb_highest_frag_index > VAR_3->nscb) {
  VAR_3->scb_highest_frag_index = VAR_3->nscb;
 }







}
