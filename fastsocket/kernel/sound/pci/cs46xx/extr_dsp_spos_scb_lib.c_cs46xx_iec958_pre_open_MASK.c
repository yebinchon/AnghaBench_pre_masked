
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int spdif_status_out; int spdif_csuv_stream; int master_mix_scb; int asynch_tx_scb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct snd_cs46xx*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct snd_cs46xx*) ;
 int FUNC_2 (struct snd_cs46xx*) ;
 int FUNC_3 (struct snd_cs46xx*,int ,int ) ;

int FUNC_4 (struct snd_cs46xx *VAR_8)
{
 struct dsp_spos_instance * VAR_9 = VAR_8->dsp_spos_instance;

 if ( VAR_9->spdif_status_out & VAR_2 ) {

  FUNC_1 (VAR_8);


  VAR_9->spdif_status_out |= VAR_2;
 }


 if ( !(VAR_9->spdif_status_out & VAR_1) ) {
  FUNC_2 (VAR_8);
 }


 VAR_9->asynch_tx_scb = FUNC_0(VAR_8,"AsynchFGTxSCB",VAR_0,
        VAR_6,
        VAR_5,
        VAR_9->master_mix_scb,
        VAR_4);



 FUNC_3 (VAR_8,VAR_7, VAR_9->spdif_csuv_stream);

 VAR_9->spdif_status_out |= VAR_3;

 return 0;
}
