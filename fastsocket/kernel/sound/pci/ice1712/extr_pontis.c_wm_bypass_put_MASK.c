
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 unsigned short FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 unsigned short VAR_4, VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_3->gpio_mutex);
 VAR_4 = VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_2->value.integer.value[0])
  VAR_4 |= 0x04;
 else
  VAR_4 &= ~0x04;
 if (VAR_4 != VAR_5) {
  FUNC_4(VAR_3, VAR_0, VAR_4);
  VAR_6 = 1;
 }
 FUNC_1(&VAR_3->gpio_mutex);
 return VAR_6;
}
