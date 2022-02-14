
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int spos_mutex; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int pcm_input; int ref_snoop_scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_cs46xx*,int ,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (struct snd_cs46xx *VAR_2)
{
 struct dsp_spos_instance * VAR_3 = VAR_2->dsp_spos_instance;

 if (FUNC_3(VAR_3->pcm_input))
  return -VAR_0;
 if (FUNC_3(!VAR_3->ref_snoop_scb))
  return -VAR_0;

 FUNC_1(&VAR_2->spos_mutex);
 VAR_3->pcm_input = FUNC_0(VAR_2,VAR_3->ref_snoop_scb,VAR_1,
                                                  "PCMSerialInput_Wave");
 FUNC_2(&VAR_2->spos_mutex);

 return 0;
}
