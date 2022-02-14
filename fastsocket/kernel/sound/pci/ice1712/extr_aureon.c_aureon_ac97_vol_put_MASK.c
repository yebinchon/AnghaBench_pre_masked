
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct snd_ice1712*,int) ;
 int FUNC_1 (struct snd_ice1712*,int,unsigned short) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_4(VAR_1);
 unsigned short VAR_4, VAR_5;
 int VAR_6;

 FUNC_3(VAR_3);

 VAR_4 = FUNC_0(VAR_3, VAR_1->private_value & 0x7F);
 VAR_5 = (0x1F - VAR_2->value.integer.value[0]) & 0x001F;
 if (VAR_1->private_value & VAR_0)
  VAR_5 |= ((0x1F - VAR_2->value.integer.value[1]) << 8) & 0x1F00;
 VAR_5 |= VAR_4 & ~0x1F1F;

 VAR_6 = (VAR_4 != VAR_5);
 if (VAR_6)
  FUNC_1(VAR_3, VAR_1->private_value & 0x7F, VAR_5);

 FUNC_2(VAR_3);

 return VAR_6;
}
