
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_10__ {int (* set_pro_rate ) (struct snd_ice1712*,int ) ;} ;
struct snd_ice1712 {unsigned int (* get_rate ) (struct snd_ice1712*) ;unsigned int pro_rate_default; unsigned int akm_codecs; TYPE_6__* akm; TYPE_4__ gpio; int reg_lock; TYPE_3__* hw_rates; int (* set_spdif_clock ) (struct snd_ice1712*) ;scalar_t__ (* is_spdif_master ) (struct snd_ice1712*) ;} ;
struct TYPE_7__ {unsigned int* item; } ;
struct TYPE_8__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_11__ {int (* set_rate_val ) (TYPE_6__*,int ) ;} ;
struct TYPE_12__ {TYPE_5__ ops; } ;
struct TYPE_9__ {unsigned int count; unsigned int* list; } ;


 int VAR_0 ;
 struct snd_ice1712* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct snd_ice1712*) ;
 unsigned int FUNC_5 (struct snd_ice1712*) ;
 int FUNC_6 (struct snd_ice1712*) ;
 int FUNC_7 (struct snd_ice1712*,int ) ;
 int FUNC_8 (TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_0(VAR_1);
 unsigned int VAR_4, VAR_5;
 unsigned int VAR_6 = VAR_2->value.enumerated.item[0];
 unsigned int VAR_7 = VAR_3->hw_rates->count;

 if (VAR_6 > VAR_7)
  return -VAR_0;

 FUNC_2(&VAR_3->reg_lock);
 if (VAR_3->is_spdif_master(VAR_3))
  VAR_4 = 0;
 else
  VAR_4 = VAR_3->get_rate(VAR_3);
 if (VAR_6 == VAR_7) {

  VAR_3->set_spdif_clock(VAR_3);
  VAR_5 = 0;
 } else {

  VAR_5 = VAR_3->hw_rates->list[VAR_6];
  VAR_3->pro_rate_default = VAR_5;
  FUNC_3(&VAR_3->reg_lock);
  FUNC_1(VAR_3, VAR_3->pro_rate_default, 1);
  FUNC_2(&VAR_3->reg_lock);
 }
 FUNC_3(&VAR_3->reg_lock);


 if (VAR_4 != VAR_5 && !VAR_5) {

  unsigned int VAR_8;
  if (VAR_3->gpio.set_pro_rate)
   VAR_3->gpio.set_pro_rate(VAR_3, 0);
  for (VAR_8 = 0; VAR_8 < VAR_3->akm_codecs; VAR_8++) {
   if (VAR_3->akm[VAR_8].ops.set_rate_val)
    VAR_3->akm[VAR_8].ops.set_rate_val(&VAR_3->akm[VAR_8], 0);
  }
 }
 return VAR_4 != VAR_5;
}
