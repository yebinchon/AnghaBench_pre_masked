
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ushort ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int dummy; } ;


 int FUNC_0 (struct snd_ac97*,int) ;
 struct snd_ac97* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 ushort VAR_2, VAR_3;

 struct snd_ac97 *VAR_4;

 VAR_4 = FUNC_1(VAR_0);




 VAR_2 = FUNC_0(VAR_4, 0x7a) >> 14;
 VAR_3 = FUNC_0(VAR_4, 0x20) >> 8;

 VAR_1->value.enumerated.item[0] = (VAR_2 << 1) + VAR_3;

 return 0;
}
