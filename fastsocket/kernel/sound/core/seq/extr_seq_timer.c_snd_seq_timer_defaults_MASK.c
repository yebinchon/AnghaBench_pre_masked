
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subdevice; int device; int card; int dev_sclass; int dev_class; } ;
struct snd_seq_timer {int ppq; int tempo; int skew_base; int skew; int preferred_resolution; TYPE_1__ alsa_id; int type; scalar_t__ running; int tick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int) ;

void FUNC_1(struct snd_seq_timer * VAR_8)
{

 VAR_8->ppq = 96;
 VAR_8->tempo = 500000;
 FUNC_0(&VAR_8->tick, VAR_8->tempo, VAR_8->ppq);
 VAR_8->running = 0;

 VAR_8->type = VAR_1;
 VAR_8->alsa_id.dev_class = VAR_3;
 VAR_8->alsa_id.dev_sclass = VAR_6;
 VAR_8->alsa_id.card = VAR_2;
 VAR_8->alsa_id.device = VAR_4;
 VAR_8->alsa_id.subdevice = VAR_7;
 VAR_8->preferred_resolution = VAR_5;

 VAR_8->skew = VAR_8->skew_base = VAR_0;
}
