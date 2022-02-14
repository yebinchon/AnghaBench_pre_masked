
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; } ;
struct TYPE_3__ {unsigned short* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 unsigned short FUNC_3 (struct snd_ice1712*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 unsigned short VAR_4;

 FUNC_0(&VAR_3->gpio_mutex);
 VAR_4 = FUNC_3(VAR_3, VAR_0);
 VAR_2->value.enumerated.item[0] = VAR_4 & 7;
 VAR_2->value.enumerated.item[1] = (VAR_4 >> 4) & 7;
 FUNC_1(&VAR_3->gpio_mutex);
 return 0;
}
