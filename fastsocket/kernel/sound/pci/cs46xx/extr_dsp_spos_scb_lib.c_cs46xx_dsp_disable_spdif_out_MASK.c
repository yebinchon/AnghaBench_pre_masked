
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int spdif_status_out; TYPE_2__* asynch_tx_scb; TYPE_2__* spdif_pcm_input_scb; TYPE_1__* master_mix_scb; } ;
struct TYPE_4__ {TYPE_1__* parent_scb_ptr; } ;
struct TYPE_3__ {TYPE_2__* next_scb_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_cs46xx*,int ,int) ;
 int FUNC_1 (struct snd_cs46xx*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3 (struct snd_cs46xx *VAR_5)
{
 struct dsp_spos_instance * VAR_6 = VAR_5->dsp_spos_instance;


 if ( VAR_6->spdif_status_out & VAR_1) {
  VAR_6->spdif_status_out &= ~VAR_0;
  return -VAR_2;
 }


 if (FUNC_2(!VAR_6->asynch_tx_scb))
  return -VAR_3;
 if (FUNC_2(!VAR_6->spdif_pcm_input_scb))
  return -VAR_3;
 if (FUNC_2(VAR_6->master_mix_scb->next_scb_ptr != VAR_6->asynch_tx_scb))
  return -VAR_3;
 if (FUNC_2(VAR_6->asynch_tx_scb->parent_scb_ptr !=
         VAR_6->master_mix_scb))
  return -VAR_3;

 FUNC_1 (VAR_5,VAR_6->spdif_pcm_input_scb);
 FUNC_1 (VAR_5,VAR_6->asynch_tx_scb);

 VAR_6->spdif_pcm_input_scb = ((void*)0);
 VAR_6->asynch_tx_scb = ((void*)0);


 FUNC_0(VAR_5,VAR_4,256);


 VAR_6->spdif_status_out &= ~VAR_0;


 return 0;
}
