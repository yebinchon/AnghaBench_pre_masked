
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
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct snd_kcontrol*,int *) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_4(VAR_1);
 int VAR_4, VAR_5;
 int VAR_6 = FUNC_3(VAR_1, &VAR_2->id);
 unsigned int VAR_7, VAR_8, VAR_9;


 FUNC_5(&VAR_3->reg_lock);
 VAR_7 = VAR_8 = FUNC_1(FUNC_0(VAR_3, VAR_0));
 if (VAR_2->value.enumerated.item[0] >= 11)
  VAR_9 = 1;
 else if (VAR_2->value.enumerated.item[0] >= 9)
  VAR_9 = 3;
 else if (VAR_2->value.enumerated.item[0] >= 1)
  VAR_9 = 2;
 else
  VAR_9 = 0;
 VAR_5 = VAR_6 * 2;
 VAR_7 &= ~(0x03 << VAR_5);
 VAR_7 |= VAR_9 << VAR_5;
 VAR_5 = VAR_6 * 4 + 8;
 if (VAR_9 == 2) {
  VAR_9 = VAR_2->value.enumerated.item[0] - 1;
  VAR_7 &= ~(0x07 << VAR_5);
  VAR_7 |= VAR_9 << VAR_5;
 } else if (VAR_9 == 3) {
  VAR_9 = (VAR_2->value.enumerated.item[0] - 9) << 3;
  VAR_7 &= ~(0x08 << VAR_5);
  VAR_7 |= VAR_9 << VAR_5;
 }
 VAR_4 = VAR_7 != VAR_8;
 if (VAR_4)
  FUNC_2(VAR_7, FUNC_0(VAR_3, VAR_0));
 FUNC_6(&VAR_3->reg_lock);
 return VAR_4;
}
