
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_es18xx {int version; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (struct snd_es18xx*,int) ;
 struct snd_es18xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 static unsigned char VAR_2[8] = {0, 0, 1, 1, 0, 0, 2, 3};
 struct snd_es18xx *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_0(VAR_3, 0x1c) & 0x07;
 if (!(VAR_3->version == 0x1869 || VAR_3->version == 0x1879)) {
  VAR_4 = VAR_2[VAR_4];
  if (VAR_4==3 &&
      (VAR_3->version == 0x1887 || VAR_3->version == 0x1888) &&
      (FUNC_0(VAR_3, 0x7a) & 0x08)
  )
   VAR_4 = 4;
 }
 VAR_1->value.enumerated.item[0] = VAR_4;
 return 0;
}
