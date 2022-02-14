
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {struct oxygen* private_data; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct oxygen {scalar_t__ spdif_playback_enable; int mutex; int reg_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct oxygen*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct oxygen *VAR_2 = VAR_0->private_data;
 int VAR_3;

 FUNC_0(&VAR_2->mutex);
 VAR_3 = VAR_1->value.integer.value[0] != VAR_2->spdif_playback_enable;
 if (VAR_3) {
  VAR_2->spdif_playback_enable = !!VAR_1->value.integer.value[0];
  FUNC_3(&VAR_2->reg_lock);
  FUNC_2(VAR_2);
  FUNC_4(&VAR_2->reg_lock);
 }
 FUNC_1(&VAR_2->mutex);
 return VAR_3;
}
