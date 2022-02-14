
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_bt87x {int reg_control; } ;


 int VAR_0 ;
 struct snd_bt87x* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 struct snd_bt87x *VAR_3 = FUNC_0(VAR_1);

 VAR_2->value.integer.value[0] = !! (VAR_3->reg_control & VAR_0);
 return 0;
}
