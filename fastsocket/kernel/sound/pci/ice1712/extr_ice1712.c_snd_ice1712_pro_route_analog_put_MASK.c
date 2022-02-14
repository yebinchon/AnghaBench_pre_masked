
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int reg_lock; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_6 (struct snd_kcontrol*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_6(VAR_2);
 int VAR_5, VAR_6;
 int VAR_7 = FUNC_5(VAR_2, &VAR_3->id);
 unsigned int VAR_8, VAR_9, VAR_10;


 if (VAR_3->value.enumerated.item[0] >= 11)
  VAR_10 = VAR_7 < 2 ? 1 : 0;
 else if (VAR_3->value.enumerated.item[0] >= 9)
  VAR_10 = 3;
 else if (VAR_3->value.enumerated.item[0] >= 1)
  VAR_10 = 2;
 else
  VAR_10 = 0;
 VAR_6 = ((VAR_7 % 2) * 8) + ((VAR_7 / 2) * 2);
 FUNC_7(&VAR_4->reg_lock);
 VAR_8 = VAR_9 = FUNC_2(FUNC_0(VAR_4, VAR_1));
 VAR_8 &= ~(0x03 << VAR_6);
 VAR_8 |= VAR_10 << VAR_6;
 VAR_5 = VAR_8 != VAR_9;
 if (VAR_5)
  FUNC_4(VAR_8, FUNC_0(VAR_4, VAR_1));
 FUNC_8(&VAR_4->reg_lock);
 if (VAR_10 < 2)
  return VAR_5;


 FUNC_7(&VAR_4->reg_lock);
 VAR_8 = VAR_9 = FUNC_1(FUNC_0(VAR_4, VAR_0));
 VAR_6 = ((VAR_7 / 2) * 8) + ((VAR_7 % 2) * 4);
 if (VAR_10 == 2) {
  VAR_10 = VAR_3->value.enumerated.item[0] - 1;
  VAR_8 &= ~(0x07 << VAR_6);
  VAR_8 |= VAR_10 << VAR_6;
 } else {
  VAR_10 = (VAR_3->value.enumerated.item[0] - 9) << 3;
  VAR_8 &= ~(0x08 << VAR_6);
  VAR_8 |= VAR_10 << VAR_6;
 }
 if (VAR_8 != VAR_9) {
  VAR_5 = 1;
  FUNC_3(VAR_8, FUNC_0(VAR_4, VAR_0));
 }
 FUNC_8(&VAR_4->reg_lock);
 return VAR_5;
}
