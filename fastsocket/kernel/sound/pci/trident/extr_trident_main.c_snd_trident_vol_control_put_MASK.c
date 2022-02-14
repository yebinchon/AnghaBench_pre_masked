
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_trident {unsigned int musicvol_wavevol; int reg_lock; } ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 struct snd_trident* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
           struct snd_ctl_elem_value *VAR_2)
{
 struct snd_trident *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4;
 int VAR_5 = 0;

 FUNC_3(&VAR_3->reg_lock);
 VAR_4 = VAR_3->musicvol_wavevol;
 VAR_4 &= ~(0xffff << VAR_1->private_value);
 VAR_4 |= ((255 - (VAR_2->value.integer.value[0] & 0xff)) |
         ((255 - (VAR_2->value.integer.value[1] & 0xff)) << 8)) << VAR_1->private_value;
 VAR_5 = VAR_4 != VAR_3->musicvol_wavevol;
 FUNC_1(VAR_3->musicvol_wavevol = VAR_4, FUNC_0(VAR_3, VAR_0));
 FUNC_4(&VAR_3->reg_lock);
 return VAR_5;
}
