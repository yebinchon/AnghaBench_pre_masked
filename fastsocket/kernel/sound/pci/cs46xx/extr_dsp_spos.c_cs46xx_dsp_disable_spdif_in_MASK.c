
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int (* amplifier_ctrl ) (struct snd_cs46xx*,int) ;int (* active_ctrl ) (struct snd_cs46xx*,int) ;int spos_mutex; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {scalar_t__ spdif_status_in; int spdif_in_src; int * asynch_rx_scb; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_cs46xx*,int *) ;
 int FUNC_1 (struct snd_cs46xx*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct snd_cs46xx*,int) ;
 int FUNC_6 (struct snd_cs46xx*,int) ;

int FUNC_7 (struct snd_cs46xx *VAR_1)
{
 struct dsp_spos_instance * VAR_2 = VAR_1->dsp_spos_instance;

 if (FUNC_4(!VAR_2->asynch_rx_scb))
  return -VAR_0;
 if (FUNC_4(!VAR_2->spdif_in_src))
  return -VAR_0;

 FUNC_2(&VAR_1->spos_mutex);


 FUNC_0 (VAR_1,VAR_2->asynch_rx_scb);
 VAR_2->asynch_rx_scb = ((void*)0);

 FUNC_1(VAR_1,VAR_2->spdif_in_src);


 VAR_2->spdif_status_in = 0;
 FUNC_3(&VAR_1->spos_mutex);


 VAR_1->active_ctrl(VAR_1, -1);
 VAR_1->amplifier_ctrl(VAR_1, -1);

 return 0;
}
