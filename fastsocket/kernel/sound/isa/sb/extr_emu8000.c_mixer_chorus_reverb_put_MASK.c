
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_emu8000 {unsigned short chorus_mode; unsigned short reverb_mode; int control_lock; } ;
struct TYPE_3__ {unsigned short* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (struct snd_emu8000*) ;
 int FUNC_1 (struct snd_emu8000*) ;
 struct snd_emu8000* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_emu8000 *VAR_4 = FUNC_2(VAR_2);
 unsigned long VAR_5;
 int VAR_6;
 unsigned short VAR_7;

 FUNC_3(&VAR_4->control_lock, VAR_5);
 if (VAR_2->private_value) {
  VAR_7 = VAR_3->value.integer.value[0] % VAR_0;
  VAR_6 = VAR_7 != VAR_4->chorus_mode;
  VAR_4->chorus_mode = VAR_7;
 } else {
  VAR_7 = VAR_3->value.integer.value[0] % VAR_1;
  VAR_6 = VAR_7 != VAR_4->reverb_mode;
  VAR_4->reverb_mode = VAR_7;
 }
 FUNC_4(&VAR_4->control_lock, VAR_5);
 if (VAR_6) {
  if (VAR_2->private_value)
   FUNC_0(VAR_4);
  else
   FUNC_1(VAR_4);
 }
 return VAR_6;
}
