
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {unsigned long private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 > 0) {
  unsigned long VAR_4 = VAR_1->private_value;
  VAR_1->private_value = (VAR_1->private_value & ~0xff) | VAR_0;
  FUNC_0(VAR_1, VAR_2);
  VAR_1->private_value = VAR_4;
 }
 return VAR_3;
}
