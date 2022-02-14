
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; } ;
struct TYPE_3__ {unsigned short* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int) ;
 int FUNC_4 (struct snd_ice1712*,int,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_2(VAR_2);
 unsigned short VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 FUNC_0(&VAR_4->gpio_mutex);
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_6 = VAR_3->value.integer.value[VAR_7];
  VAR_6 = VAR_6 ? (VAR_6 + VAR_0) : 0;
  VAR_8 = VAR_1 + VAR_7;
  VAR_5 = FUNC_3(VAR_4, VAR_8) & 0xff;
  if (VAR_5 != VAR_6) {
   FUNC_4(VAR_4, VAR_8, VAR_6);
   VAR_9 = 1;
  }
 }
 FUNC_1(&VAR_4->gpio_mutex);
 return VAR_9;
}
