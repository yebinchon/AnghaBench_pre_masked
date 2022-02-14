
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {unsigned int* master_vol; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_pmac* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct pmac_tumbler*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_value *VAR_3)
{
 struct snd_pmac *VAR_4 = FUNC_1(VAR_2);
 struct pmac_tumbler *VAR_5 = VAR_4->mixer_data;
 unsigned int VAR_6[2];
 int VAR_7;

 VAR_6[0] = VAR_3->value.integer.value[0];
 VAR_6[1] = VAR_3->value.integer.value[1];
 if (VAR_6[0] >= FUNC_0(VAR_1) ||
     VAR_6[1] >= FUNC_0(VAR_1))
  return -VAR_0;
 VAR_7 = VAR_5->master_vol[0] != VAR_6[0] ||
  VAR_5->master_vol[1] != VAR_6[1];
 if (VAR_7) {
  VAR_5->master_vol[0] = VAR_6[0];
  VAR_5->master_vol[1] = VAR_6[1];
  FUNC_2(VAR_5);
 }
 return VAR_7;
}
