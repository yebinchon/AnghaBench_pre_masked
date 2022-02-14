
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_hwdep_dsp_status {int chip_ready; int version; int num_dsps; int id; } ;
struct snd_hwdep {struct mixart_mgr* private_data; } ;
struct mixart_mgr {int dsp_loaded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_hwdep *VAR_3,
       struct snd_hwdep_dsp_status *VAR_4)
{
 struct mixart_mgr *VAR_5 = VAR_3->private_data;

 FUNC_0(VAR_4->id, "miXart");
        VAR_4->num_dsps = VAR_1;

 if (VAR_5->dsp_loaded & (1 << VAR_2))
  VAR_4->chip_ready = 1;

 VAR_4->version = VAR_0;
 return 0;
}
