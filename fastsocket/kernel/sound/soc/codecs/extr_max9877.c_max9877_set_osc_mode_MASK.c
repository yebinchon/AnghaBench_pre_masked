
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_4,
  struct snd_ctl_elem_value *VAR_5)
{
 u8 VAR_6 = VAR_5->value.integer.value[0];

 VAR_6 = VAR_6 << VAR_1;
 if ((VAR_3[VAR_2] & VAR_0) == VAR_6)
  return 0;

 VAR_3[VAR_2] &= ~VAR_0;
 VAR_3[VAR_2] |= VAR_6;
 FUNC_0();
 return 1;
}
