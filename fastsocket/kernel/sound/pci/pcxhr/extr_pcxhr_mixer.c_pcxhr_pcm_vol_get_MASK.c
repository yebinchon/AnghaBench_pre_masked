
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {int* digital_capture_volume; int** digital_playback_volume; TYPE_3__* mgr; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct TYPE_6__ {int mixer_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_kcontrol*,int *) ;
 struct snd_pcxhr* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct snd_pcxhr *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = FUNC_2(VAR_0, &VAR_1->id);
 int *VAR_4;
 int VAR_5 = VAR_0->private_value;

 FUNC_0(&VAR_2->mgr->mixer_mutex);
 if (VAR_5)
  VAR_4 = VAR_2->digital_capture_volume;
 else
  VAR_4 = VAR_2->digital_playback_volume[VAR_3];
 VAR_1->value.integer.value[0] = VAR_4[0];
 VAR_1->value.integer.value[1] = VAR_4[1];
 FUNC_1(&VAR_2->mgr->mixer_mutex);
 return 0;
}
