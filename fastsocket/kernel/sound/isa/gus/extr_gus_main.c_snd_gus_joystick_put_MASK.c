
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_gus_card {unsigned char joystick_dac; int reg_lock; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_gus_card*,int ,unsigned char) ;
 struct snd_gus_card* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_gus_card *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 int VAR_5;
 unsigned char VAR_6;

 VAR_6 = VAR_2->value.integer.value[0] & 31;
 FUNC_2(&VAR_3->reg_lock, VAR_4);
 VAR_5 = VAR_3->joystick_dac != VAR_6;
 VAR_3->joystick_dac = VAR_6;
 FUNC_0(VAR_3, VAR_0, VAR_3->joystick_dac);
 FUNC_3(&VAR_3->reg_lock, VAR_4);
 return VAR_5;
}
