
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int spdif_status_out; int asynch_tx_scb; scalar_t__ the_null_scb; int spdif_pcm_input_scb; TYPE_1__* ref_snoop_scb; TYPE_2__* master_mix_scb; } ;
struct TYPE_4__ {scalar_t__ next_scb_ptr; } ;
struct TYPE_3__ {int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct snd_cs46xx*,char*,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_1 (struct snd_cs46xx*,char*,int ,TYPE_1__*,int,int ) ;
 int FUNC_2 (struct snd_cs46xx*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct snd_cs46xx*,int,int) ;

int FUNC_5 (struct snd_cs46xx *VAR_13)
{
 struct dsp_spos_instance * VAR_14 = VAR_13->dsp_spos_instance;

 if ( ! (VAR_14->spdif_status_out & VAR_1) ) {
  FUNC_2 (VAR_13);
 }


 if ( VAR_14->spdif_status_out & VAR_3) {



  VAR_14->spdif_status_out |= VAR_2;

  return -VAR_4;
 }

 if (FUNC_3(VAR_14->asynch_tx_scb))
  return -VAR_5;
 if (FUNC_3(VAR_14->master_mix_scb->next_scb_ptr !=
         VAR_14->the_null_scb))
  return -VAR_5;


 FUNC_4 (VAR_13, (VAR_14->ref_snoop_scb->address + 2) << 2,
    (VAR_7 + 0x10) << 0x10 );


 VAR_14->asynch_tx_scb = FUNC_0(VAR_13,"AsynchFGTxSCB",VAR_0,
        VAR_12,
        VAR_11,
        VAR_14->master_mix_scb,
        VAR_9);
 if (!VAR_14->asynch_tx_scb) return -VAR_6;

 VAR_14->spdif_pcm_input_scb = FUNC_1(VAR_13,"PCMSerialInput_II",
           VAR_8,
           VAR_14->ref_snoop_scb,
           VAR_14->asynch_tx_scb,
           VAR_10);


 if (!VAR_14->spdif_pcm_input_scb) return -VAR_6;


 VAR_14->spdif_status_out |= VAR_2;

 return 0;
}
