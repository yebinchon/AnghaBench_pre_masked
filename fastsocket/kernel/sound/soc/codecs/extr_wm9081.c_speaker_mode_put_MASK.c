
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 unsigned int FUNC_1 (struct snd_soc_codec*,int ) ;
 int FUNC_2 (struct snd_soc_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_7,
       struct snd_ctl_elem_value *VAR_8)
{
 struct snd_soc_codec *VAR_9 = FUNC_0(VAR_7);
 unsigned int VAR_10 = FUNC_1(VAR_9, VAR_3);
 unsigned int VAR_11 = FUNC_1(VAR_9, VAR_1);


 if (VAR_8->value.integer.value[0] ==
     ((VAR_11 & VAR_6) != 0))
  return 0;


 if (VAR_10 & VAR_4)
  return -VAR_0;

 if (VAR_8->value.integer.value[0]) {

  VAR_11 &= ~(VAR_5 | VAR_2);
  VAR_11 |= VAR_6;
 } else {

  VAR_11 |= VAR_5 | VAR_2;
  VAR_11 &= ~VAR_6;
 }

 FUNC_2(VAR_9, VAR_1, VAR_11);

 return 0;
}
