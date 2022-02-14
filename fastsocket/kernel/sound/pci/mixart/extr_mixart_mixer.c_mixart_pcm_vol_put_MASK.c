
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_mixart*,int) ;
 int FUNC_1 (struct snd_mixart*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct snd_kcontrol*,int *) ;
 struct snd_mixart* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_5, struct snd_ctl_elem_value *VAR_6)
{
 struct snd_mixart *VAR_7 = FUNC_6(VAR_5);
 int VAR_8 = FUNC_5(VAR_5, &VAR_6->id);
 int VAR_9 = 0;
 int VAR_10 = VAR_5->private_value & VAR_4;
 int VAR_11 = VAR_5->private_value & VAR_3;
 int* VAR_12;
 int VAR_13;
 FUNC_2(&VAR_7->mgr->mixer_mutex);
 if (VAR_10) {
  if (VAR_11)
   VAR_12 = VAR_7->digital_capture_volume[1];
  else
   VAR_12 = VAR_7->digital_capture_volume[0];
 } else {
  FUNC_4(VAR_8 >= VAR_2);
  if (VAR_11)
   VAR_12 = VAR_7->digital_playback_volume[VAR_2 + VAR_8];
  else
   VAR_12 = VAR_7->digital_playback_volume[VAR_8];
 }
 for (VAR_13 = 0; VAR_13 < 2; VAR_13++) {
  int VAR_14 = VAR_6->value.integer.value[VAR_13];
  if (VAR_14 < VAR_1 ||
      VAR_14 > VAR_0)
   continue;
  if (VAR_12[VAR_13] != VAR_14) {
   VAR_12[VAR_13] = VAR_14;
   VAR_9 = 1;
  }
 }
 if (VAR_9) {
  if (VAR_10)
   FUNC_0(VAR_7, VAR_11);
  else
   FUNC_1(VAR_7, VAR_11, VAR_8);
 }
 FUNC_3(&VAR_7->mgr->mixer_mutex);
 return VAR_9;
}
