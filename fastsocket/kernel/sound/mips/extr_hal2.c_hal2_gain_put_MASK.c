
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_hal2 {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int FUNC_0 (struct snd_hal2*,int ) ;
 int FUNC_1 (struct snd_hal2*,int ,int) ;
 struct snd_hal2* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_11,
    struct snd_ctl_elem_value *VAR_12)
{
 struct snd_hal2 *VAR_13 = FUNC_2(VAR_11);
 u32 VAR_14, VAR_15;
 int VAR_16, VAR_17;

 VAR_16 = VAR_12->value.integer.value[0];
 VAR_17 = VAR_12->value.integer.value[1];

 switch ((int)VAR_11->private_value) {
 case 128:
  VAR_14 = FUNC_0(VAR_13, VAR_10);
  VAR_15 = VAR_14 & ~(VAR_1 | VAR_6 | VAR_5);
  if (VAR_16 | VAR_17) {
   VAR_16 = 31 - VAR_16;
   VAR_17 = 31 - VAR_17;
   VAR_15 |= (VAR_16 << VAR_2);
   VAR_15 |= (VAR_17 << VAR_7);
  } else
   VAR_15 |= VAR_1 | VAR_6 | VAR_5;
  FUNC_1(VAR_13, VAR_10, VAR_15);
  break;
 case 129:
  VAR_14 = FUNC_0(VAR_13, VAR_0);
  VAR_15 = VAR_14 & ~(VAR_3 | VAR_8);
  VAR_15 |= (VAR_16 << VAR_4);
  VAR_15 |= (VAR_17 << VAR_9);
  FUNC_1(VAR_13, VAR_0, VAR_15);
  break;
 }
 return VAR_14 != VAR_15;
}
