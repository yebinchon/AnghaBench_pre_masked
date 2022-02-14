
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {scalar_t__ the_null_scb; struct dsp_scb_descriptor* record_mixer_scb; } ;
struct dsp_scb_descriptor {scalar_t__ sub_list_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int ,struct dsp_scb_descriptor*,struct dsp_scb_descriptor*,int) ;
 struct dsp_scb_descriptor* FUNC_1 (struct snd_cs46xx*,scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

struct dsp_scb_descriptor *
FUNC_3 (struct snd_cs46xx *VAR_2, struct dsp_scb_descriptor * VAR_3,
     u16 VAR_4, char * VAR_5)
{
   struct dsp_spos_instance * VAR_6 = VAR_2->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_7;
 struct dsp_scb_descriptor * VAR_8;
 int VAR_9;

 if (FUNC_2(!VAR_6->record_mixer_scb))
  return ((void*)0);

 if (VAR_6->record_mixer_scb->sub_list_ptr != VAR_6->the_null_scb) {
  VAR_7 = FUNC_1 (VAR_2,VAR_6->record_mixer_scb->sub_list_ptr);
  VAR_9 = VAR_0;
 } else {
  VAR_7 = VAR_6->record_mixer_scb;
  VAR_9 = VAR_1;
 }

 VAR_8 = FUNC_0(VAR_2,VAR_5,VAR_4,
          VAR_3, VAR_7,
          VAR_9);

 return VAR_8;
}
