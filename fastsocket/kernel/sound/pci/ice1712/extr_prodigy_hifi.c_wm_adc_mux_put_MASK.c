
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int gpio_mutex; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 unsigned short FUNC_3 (struct snd_ice1712*,int ) ;
 int FUNC_4 (struct snd_ice1712*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
     struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_1->private_value;
 unsigned short VAR_5, VAR_6;
 int VAR_7;

 FUNC_0(&VAR_3->gpio_mutex);
 VAR_6 = VAR_5 = FUNC_3(VAR_3, VAR_0);
 if (VAR_2->value.integer.value[0])
  VAR_6 |= (1 << VAR_4);
 else
  VAR_6 &= ~(1 << VAR_4);
 VAR_7 = VAR_6 != VAR_5;
 if (VAR_7) {
  FUNC_4(VAR_3, VAR_0, VAR_6);
 }
 FUNC_1(&VAR_3->gpio_mutex);
 return 0;
}
