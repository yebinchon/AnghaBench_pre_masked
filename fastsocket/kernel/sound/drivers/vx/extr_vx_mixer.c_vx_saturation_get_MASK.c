
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_vu_meter {int saturated; } ;
struct vx_core {int dummy; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct vx_core* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct vx_core*,int,int,struct vx_vu_meter*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct vx_core *VAR_2 = FUNC_0(VAR_0);
 struct vx_vu_meter VAR_3[2];
 int VAR_4 = VAR_0->private_value & 0xff;

 FUNC_1(VAR_2, VAR_4, 1, VAR_3);
 VAR_1->value.integer.value[0] = VAR_3[0].saturated;
 VAR_1->value.integer.value[1] = VAR_3[1].saturated;
 return 0;
}
