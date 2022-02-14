
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_mixart {int** digital_capture_volume; int** digital_playback_volume; TYPE_3__* mgr; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct TYPE_6__ {int mixer_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct snd_kcontrol*,int *) ;
 struct snd_mixart* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3, struct snd_ctl_elem_value *VAR_4)
{
 struct snd_mixart *VAR_5 = FUNC_4(VAR_3);
 int VAR_6 = FUNC_3(VAR_3, &VAR_4->id);
 int *VAR_7;
 int VAR_8 = VAR_3->private_value & VAR_2;
 int VAR_9 = VAR_3->private_value & VAR_1;
 FUNC_0(&VAR_5->mgr->mixer_mutex);
 if(VAR_8) {
  if(VAR_9) VAR_7 = VAR_5->digital_capture_volume[1];
  else VAR_7 = VAR_5->digital_capture_volume[0];
 } else {
  FUNC_2(VAR_6 >= VAR_0);
  if(VAR_9) VAR_7 = VAR_5->digital_playback_volume[VAR_0 + VAR_6];
  else VAR_7 = VAR_5->digital_playback_volume[VAR_6];
 }
 VAR_4->value.integer.value[0] = VAR_7[0];
 VAR_4->value.integer.value[1] = VAR_7[1];
 FUNC_1(&VAR_5->mgr->mixer_mutex);
 return 0;
}
