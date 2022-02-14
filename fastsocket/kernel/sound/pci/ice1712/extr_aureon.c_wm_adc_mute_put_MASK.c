
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 unsigned short FUNC_3 (struct snd_ice1712*,scalar_t__) ;
 int FUNC_4 (struct snd_ice1712*,scalar_t__,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 unsigned short VAR_4, VAR_5;
 int VAR_6, VAR_7 = 0;

 FUNC_1(VAR_3);
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 = FUNC_3(VAR_3, VAR_0 + VAR_6);
  VAR_4 = (~VAR_2->value.integer.value[VAR_6]<<5&0x20) | (VAR_5&~0x20);
  if (VAR_4 != VAR_5) {
   FUNC_4(VAR_3, VAR_0 + VAR_6, VAR_4);
   VAR_7 = 1;
  }
 }
 FUNC_0(VAR_3);

 return VAR_7;
}
