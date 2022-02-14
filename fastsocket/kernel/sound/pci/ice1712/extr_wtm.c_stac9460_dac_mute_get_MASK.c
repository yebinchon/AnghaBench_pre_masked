
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {unsigned char* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_1 (struct snd_kcontrol*) ;
 unsigned char FUNC_2 (struct snd_ice1712*,int) ;
 unsigned char FUNC_3 (struct snd_ice1712*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_1(VAR_2);
 unsigned char VAR_5;
 int VAR_6, VAR_7;

 if (VAR_2->private_value) {
  VAR_6 = VAR_1;
  VAR_7 = 0;
 } else {
  VAR_7 = FUNC_0(VAR_2, &VAR_3->id);
  VAR_6 = VAR_7 + VAR_0;
 }
 if (VAR_7 < 6)
  VAR_5 = FUNC_3(VAR_4, VAR_6);
 else
  VAR_5 = FUNC_2(VAR_4, VAR_6 - 6);
 VAR_3->value.integer.value[0] = (~VAR_5 >> 7) & 0x1;
 return 0;
}
