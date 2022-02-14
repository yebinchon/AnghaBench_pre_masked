
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {struct dsp_scb_descriptor* the_null_scb; } ;
struct dsp_scb_descriptor {struct dsp_scb_descriptor* next_scb_ptr; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct dsp_scb_descriptor *
FUNC_1 (struct snd_cs46xx * VAR_0, struct dsp_scb_descriptor * VAR_1)
{
 struct dsp_spos_instance * VAR_2 = VAR_0->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_3 = VAR_1;

 while (VAR_3->next_scb_ptr != VAR_2->the_null_scb) {
  if (FUNC_0(!VAR_3->next_scb_ptr))
   return ((void*)0);

  VAR_3 = VAR_3->next_scb_ptr;
 }

 return VAR_3;
}
