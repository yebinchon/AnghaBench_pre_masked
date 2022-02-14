
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {unsigned int private_value; } ;
struct snd_emu10k1 {int ** i2c_capture_volume; } ;
struct TYPE_3__ {int * value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 struct snd_emu10k1* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_emu10k1 *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4;

 VAR_4 = VAR_1->private_value;


 if (VAR_4 >= 2)
  return -VAR_0;

 VAR_2->value.integer.value[0] = VAR_3->i2c_capture_volume[VAR_4][0];
 VAR_2->value.integer.value[1] = VAR_3->i2c_capture_volume[VAR_4][1];
 return 0;
}
