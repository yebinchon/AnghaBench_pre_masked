
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_mixart {int** digital_playback_active; TYPE_3__* mgr; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct TYPE_6__ {int mixer_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_mixart*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_kcontrol*,int *) ;
 struct snd_mixart* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_mixart *VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = 0;
 int VAR_6 = VAR_2->private_value & VAR_1;
 int VAR_7 = FUNC_4(VAR_2, &VAR_3->id);
 int VAR_8, VAR_9;
 FUNC_3(VAR_7 >= VAR_0);
 FUNC_1(&VAR_4->mgr->mixer_mutex);
 VAR_9 = VAR_7;
 if (VAR_6)
  VAR_9 += VAR_0;
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if (VAR_4->digital_playback_active[VAR_9][VAR_8] !=
      VAR_3->value.integer.value[VAR_8]) {
   VAR_4->digital_playback_active[VAR_9][VAR_8] =
    !!VAR_3->value.integer.value[VAR_8];
   VAR_5 = 1;
  }
 }
 if (VAR_5)
  FUNC_0(VAR_4, VAR_6, VAR_7);
 FUNC_2(&VAR_4->mgr->mixer_mutex);
 return VAR_5;
}
