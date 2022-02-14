
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {unsigned int* audio_monitor; int mixer_mutex; int * audio_monitor_active; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vx_core* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct vx_core*,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct vx_core *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = VAR_2->private_value & 0xff;
 unsigned int VAR_6[2];

 VAR_6[0] = VAR_3->value.integer.value[0];
 VAR_6[1] = VAR_3->value.integer.value[1];
 if (VAR_6[0] > VAR_0 || VAR_6[1] > VAR_0)
  return -VAR_1;

 FUNC_0(&VAR_4->mixer_mutex);
 if (VAR_6[0] != VAR_4->audio_monitor[VAR_5] ||
     VAR_6[1] != VAR_4->audio_monitor[VAR_5+1]) {
  FUNC_3(VAR_4, VAR_5, VAR_6[0],
         VAR_4->audio_monitor_active[VAR_5]);
  FUNC_3(VAR_4, VAR_5+1, VAR_6[1],
         VAR_4->audio_monitor_active[VAR_5+1]);
  FUNC_1(&VAR_4->mixer_mutex);
  return 1;
 }
 FUNC_1(&VAR_4->mixer_mutex);
 return 0;
}
