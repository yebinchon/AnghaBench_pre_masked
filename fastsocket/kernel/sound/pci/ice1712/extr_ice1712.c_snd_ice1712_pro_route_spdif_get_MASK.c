
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = FUNC_2(VAR_1, &VAR_2->id);
 unsigned int VAR_5, VAR_6;
 VAR_5 = FUNC_1(FUNC_0(VAR_3, VAR_0));
 VAR_6 = (VAR_5 >> (VAR_4 * 4 + 8)) & 0x0f;
 VAR_5 = (VAR_5 >> (VAR_4 * 2)) & 0x03;
 if (VAR_5 == 1)
  VAR_2->value.enumerated.item[0] = 11;
 else if (VAR_5 == 2)
  VAR_2->value.enumerated.item[0] = (VAR_6 & 7) + 1;
 else if (VAR_5 == 3)
  VAR_2->value.enumerated.item[0] = ((VAR_6 >> 3) & 1) + 9;
 else
  VAR_2->value.enumerated.item[0] = 0;
 return 0;
}
