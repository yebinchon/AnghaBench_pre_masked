
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_spos_instance {int spdif_status_out; int * asynch_tx_scb; int * spdif_pcm_input_scb; int spdif_csuv_default; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_cs46xx*,int ,int) ;
 int FUNC_1 (struct snd_cs46xx*) ;
 int FUNC_2 (struct snd_cs46xx*,int *) ;
 int FUNC_3 (struct snd_cs46xx*,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5 (struct snd_cs46xx *VAR_5)
{
 struct dsp_spos_instance * VAR_6 = VAR_5->dsp_spos_instance;

 if (FUNC_4(!VAR_6->asynch_tx_scb))
  return -VAR_2;

 VAR_6->spdif_status_out &= ~VAR_1;


 FUNC_3 (VAR_5,VAR_4, VAR_6->spdif_csuv_default);


 if (VAR_6->spdif_pcm_input_scb != ((void*)0)) {
  FUNC_2 (VAR_5,VAR_6->spdif_pcm_input_scb);
  VAR_6->spdif_pcm_input_scb = ((void*)0);
 }

 FUNC_2 (VAR_5,VAR_6->asynch_tx_scb);
 VAR_6->asynch_tx_scb = ((void*)0);


 FUNC_0(VAR_5,VAR_3,256);


 if ( VAR_6->spdif_status_out & VAR_0 ) {
  FUNC_1 (VAR_5);
 }

 return 0;
}
