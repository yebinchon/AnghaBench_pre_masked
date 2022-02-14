
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct soc_mixer_control {unsigned int reg; unsigned int rreg; } ;
struct snd_soc_codec {scalar_t__* reg_cache; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_ctl_elem_value {int dummy; } ;


 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_2 (struct snd_soc_codec*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct soc_mixer_control *VAR_2 =
  (struct soc_mixer_control *)VAR_0->private_value;
 struct snd_soc_codec *VAR_3 = FUNC_0(VAR_0);
 u16 *VAR_4 = VAR_3->reg_cache;
 unsigned int VAR_5 = VAR_2->reg;
 unsigned int VAR_6 = VAR_2->rreg;
 int VAR_7;


 VAR_4[VAR_5] = 0;
 VAR_4[VAR_6] = 0;

 VAR_7 = FUNC_1(VAR_0, VAR_1);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_2(VAR_3, VAR_5, 0x100, 0x100);
 FUNC_2(VAR_3, VAR_6, 0x100, 0x100);

 return 0;
}
