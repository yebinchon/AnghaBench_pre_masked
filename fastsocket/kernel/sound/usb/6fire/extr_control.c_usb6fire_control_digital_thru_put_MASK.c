
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct control_runtime {scalar_t__ digital_thru_switch; } ;


 struct control_runtime* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct control_runtime*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
  struct snd_ctl_elem_value *VAR_1)
{
 struct control_runtime *VAR_2 = FUNC_0(VAR_0);
 int VAR_3 = 0;

 if (VAR_2->digital_thru_switch != VAR_1->value.integer.value[0]) {
  VAR_2->digital_thru_switch = VAR_1->value.integer.value[0];
  FUNC_1(VAR_2);
  VAR_3 = 1;
 }
 return VAR_3;
}
