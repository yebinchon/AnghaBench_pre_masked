
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_midi {scalar_t__ opened; int mutex; int card; struct snd_kcontrol* roland_load_ctl; } ;
struct snd_rawmidi_substream {TYPE_1__* rmidi; } ;
struct snd_kcontrol {int id; TYPE_2__* vd; } ;
struct TYPE_4__ {int access; } ;
struct TYPE_3__ {struct snd_usb_midi* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct snd_usb_midi*) ;

__attribute__((used)) static void FUNC_4(struct snd_rawmidi_substream *VAR_2, int VAR_3)
{
 struct snd_usb_midi* VAR_4 = VAR_2->rmidi->private_data;
 struct snd_kcontrol *VAR_5;

 FUNC_0(&VAR_4->mutex);
 if (VAR_3) {
  if (VAR_4->opened++ == 0 && VAR_4->roland_load_ctl) {
   VAR_5 = VAR_4->roland_load_ctl;
   VAR_5->vd[0].access |= VAR_0;
   FUNC_2(VAR_4->card,
           VAR_1, &VAR_5->id);
   FUNC_3(VAR_4);
  }
 } else {
  if (--VAR_4->opened == 0 && VAR_4->roland_load_ctl) {
   VAR_5 = VAR_4->roland_load_ctl;
   VAR_5->vd[0].access &= ~VAR_0;
   FUNC_2(VAR_4->card,
           VAR_1, &VAR_5->id);
  }
 }
 FUNC_1(&VAR_4->mutex);
}
