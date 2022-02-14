
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_timer_id {int card; int device; int subdevice; int dev_class; int dev_sclass; } ;
struct snd_timer {int private_free; struct snd_pcm_substream* private_data; int card; int hw; int name; } ;
struct snd_pcm_substream {int number; int stream; struct snd_timer* timer; TYPE_1__* pcm; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int device; TYPE_2__* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct snd_timer*) ;
 scalar_t__ FUNC_1 (int ,struct snd_timer*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,struct snd_timer_id*,struct snd_timer**) ;
 int FUNC_3 (int ,char*,char*,int,int,int) ;

void FUNC_4(struct snd_pcm_substream *VAR_5)
{
 struct snd_timer_id VAR_6;
 struct snd_timer *VAR_7;

 VAR_6.dev_sclass = VAR_2;
 VAR_6.dev_class = VAR_1;
 VAR_6.card = VAR_5->pcm->card->number;
 VAR_6.device = VAR_5->pcm->device;
 VAR_6.subdevice = (VAR_5->number << 1) | (VAR_5->stream & 1);
 if (FUNC_2(VAR_5->pcm->card, "PCM", &VAR_6, &VAR_7) < 0)
  return;
 FUNC_3(VAR_7->name, "PCM %s %i-%i-%i",
   VAR_5->stream == VAR_0 ?
    "capture" : "playback",
   VAR_6.card, VAR_6.device, VAR_6.subdevice);
 VAR_7->hw = VAR_3;
 if (FUNC_1(VAR_7->card, VAR_7) < 0) {
  FUNC_0(VAR_7->card, VAR_7);
  return;
 }
 VAR_7->private_data = VAR_5;
 VAR_7->private_free = VAR_4;
 VAR_5->timer = VAR_7;
}
