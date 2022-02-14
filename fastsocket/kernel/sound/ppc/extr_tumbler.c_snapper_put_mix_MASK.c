
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {struct pmac_tumbler* mixer_data; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct pmac_tumbler {unsigned int** mix_vol; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pmac_tumbler*,int) ;
 struct snd_pmac* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_3,
      struct snd_ctl_elem_value *VAR_4)
{
 int VAR_5 = (int)VAR_3->private_value;
 struct snd_pmac *VAR_6 = FUNC_2(VAR_3);
 struct pmac_tumbler *VAR_7;
 unsigned int VAR_8[2];
 int VAR_9;

 if (! (VAR_7 = VAR_6->mixer_data))
  return -VAR_1;
 VAR_8[0] = VAR_4->value.integer.value[0];
 VAR_8[1] = VAR_4->value.integer.value[1];
 if (VAR_8[0] >= FUNC_0(VAR_2) ||
     VAR_8[1] >= FUNC_0(VAR_2))
  return -VAR_0;
 VAR_9 = VAR_7->mix_vol[VAR_5][0] != VAR_8[0] ||
  VAR_7->mix_vol[VAR_5][1] != VAR_8[1];
 if (VAR_9) {
  VAR_7->mix_vol[VAR_5][0] = VAR_8[0];
  VAR_7->mix_vol[VAR_5][1] = VAR_8[1];
  FUNC_1(VAR_7, VAR_5);
 }
 return VAR_9;
}
