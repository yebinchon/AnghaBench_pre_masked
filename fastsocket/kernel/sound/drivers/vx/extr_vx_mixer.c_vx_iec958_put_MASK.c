
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {unsigned int uer_bits; int mixer_mutex; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct vx_core* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct vx_core*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct vx_core *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;

 VAR_3 = (VAR_1->value.iec958.status[0] << 0) |
       (VAR_1->value.iec958.status[1] << 8) |
       (VAR_1->value.iec958.status[2] << 16) |
       (VAR_1->value.iec958.status[3] << 24);
 FUNC_0(&VAR_2->mixer_mutex);
 if (VAR_2->uer_bits != VAR_3) {
  VAR_2->uer_bits = VAR_3;
  FUNC_3(VAR_2, VAR_3);
  FUNC_1(&VAR_2->mixer_mutex);
  return 1;
 }
 FUNC_1(&VAR_2->mixer_mutex);
 return 0;
}
