
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct cmipci_switch_args {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_value*,struct cmipci_switch_args*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_value *VAR_2)
{
 struct cmipci_switch_args *VAR_3;
 VAR_3 = (struct cmipci_switch_args *)VAR_1->private_value;
 if (FUNC_1(!VAR_3))
  return -VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
