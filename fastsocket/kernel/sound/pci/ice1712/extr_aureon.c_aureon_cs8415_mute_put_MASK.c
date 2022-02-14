
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned char) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_4(VAR_1);
 unsigned char VAR_4, VAR_5;
 int VAR_6;
 FUNC_3(VAR_3);
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_2->value.integer.value[0])
  VAR_5 = VAR_4 & ~0x20;
 else
  VAR_5 = VAR_4 | 0x20;
 VAR_6 = (VAR_4 != VAR_5);
 if (VAR_6)
  FUNC_1(VAR_3, VAR_0, VAR_5);
 FUNC_2(VAR_3);
 return VAR_6;
}
