
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ymfpci {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_ymfpci* FUNC_0 (struct snd_kcontrol*) ;
 scalar_t__ FUNC_1 (struct snd_ymfpci*,int) ;
 int FUNC_2 (struct snd_ymfpci*,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ymfpci *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = (int)VAR_0->private_value;

 if (FUNC_1(VAR_2, VAR_3) != VAR_1->value.integer.value[0]) {
  FUNC_2(VAR_2, VAR_3, !!VAR_1->value.integer.value[0]);
  VAR_1->value.integer.value[0] = FUNC_1(VAR_2, VAR_3);
  return 1;
 }
 return 0;
}
