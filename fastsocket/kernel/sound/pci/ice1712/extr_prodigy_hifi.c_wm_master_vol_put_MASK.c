
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int gpio_mutex; struct prodigy_hifi_spec* spec; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct prodigy_hifi_spec {scalar_t__* master; int * vol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (struct snd_ice1712*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_4,
        struct snd_ctl_elem_value *VAR_5)
{
 struct snd_ice1712 *VAR_6 = FUNC_2(VAR_4);
 struct prodigy_hifi_spec *VAR_7 = VAR_6->spec;
 int VAR_8, VAR_9 = 0;

 FUNC_0(&VAR_6->gpio_mutex);
 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  if (VAR_5->value.integer.value[VAR_8] != VAR_7->master[VAR_8]) {
   VAR_7->master[VAR_8] = VAR_5->value.integer.value[VAR_8];


   FUNC_4(VAR_6, VAR_3 + VAR_8,
       VAR_7->vol[2 + VAR_8], VAR_7->master[VAR_8]);

   FUNC_3(VAR_6, VAR_0 + VAR_8,
           VAR_7->vol[0 + VAR_8], VAR_7->master[VAR_8]);

   FUNC_3(VAR_6, VAR_1 + VAR_8,
           VAR_7->vol[4 + VAR_8], VAR_7->master[VAR_8]);

   FUNC_3(VAR_6, VAR_2 + VAR_8,
           VAR_7->vol[6 + VAR_8], VAR_7->master[VAR_8]);
   VAR_9 = 1;
  }
 }
 FUNC_1(&VAR_6->gpio_mutex);
 return VAR_9;
}
