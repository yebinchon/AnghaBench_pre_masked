
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {int mixer_mutex; } ;
struct snd_vx222 {scalar_t__ mic_level; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vx_core* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_vx222*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct vx_core *VAR_4 = FUNC_2(VAR_2);
 struct snd_vx222 *VAR_5 = (struct snd_vx222 *)VAR_4;
 if (VAR_3->value.integer.value[0] < 0 ||
     VAR_3->value.integer.value[0] > VAR_1)
  return -VAR_0;
 FUNC_0(&VAR_4->mixer_mutex);
 if (VAR_5->mic_level != VAR_3->value.integer.value[0]) {
  VAR_5->mic_level = VAR_3->value.integer.value[0];
  FUNC_3(VAR_5);
  FUNC_1(&VAR_4->mixer_mutex);
  return 1;
 }
 FUNC_1(&VAR_4->mixer_mutex);
 return 0;
}
