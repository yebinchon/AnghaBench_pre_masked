
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int write_mask; int direction; } ;
struct snd_ice1712 {int gpio_mutex; TYPE_1__ gpio; } ;
struct TYPE_6__ {int* value; } ;
struct TYPE_5__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ) ;
 struct snd_ice1712* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_5(VAR_0);
 FUNC_0(&VAR_2->gpio_mutex);
 FUNC_3(VAR_2, VAR_2->gpio.direction);
 FUNC_4(VAR_2, VAR_2->gpio.write_mask);
 VAR_1->value.integer.value[0] = FUNC_2(VAR_2) & 0xffff;
 FUNC_1(&VAR_2->gpio_mutex);
 return 0;
}
