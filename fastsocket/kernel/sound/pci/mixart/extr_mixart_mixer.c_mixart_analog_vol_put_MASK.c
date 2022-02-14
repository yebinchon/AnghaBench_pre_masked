
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_mixart {int* analog_capture_volume; int* analog_playback_volume; TYPE_3__* mgr; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int mixer_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_mixart*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_mixart* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_4, struct snd_ctl_elem_value *VAR_5)
{
 struct snd_mixart *VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = 0;
 int VAR_8, VAR_9;

 FUNC_1(&VAR_6->mgr->mixer_mutex);
 VAR_8 = (VAR_4->private_value != 0);
 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  int VAR_10 = VAR_5->value.integer.value[VAR_9];
  int *VAR_11 = VAR_8 ?
   &VAR_6->analog_capture_volume[VAR_9] :
   &VAR_6->analog_playback_volume[VAR_9];
  if (VAR_8) {
   if (VAR_10 < VAR_1 ||
       VAR_10 > VAR_0)
    continue;
  } else {
   if (VAR_10 < VAR_3 ||
       VAR_10 > VAR_2)
    continue;
  }
  if (*VAR_11 != VAR_10) {
   *VAR_11 = VAR_10;
   VAR_7 = 1;
  }
 }
 if (VAR_7)
  FUNC_0(VAR_6, VAR_8);
 FUNC_2(&VAR_6->mgr->mixer_mutex);
 return VAR_7;
}
