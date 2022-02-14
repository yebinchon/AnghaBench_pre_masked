
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_rme9652 {int thru_bits; unsigned int ss_channels; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 struct snd_rme9652* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_rme9652 *VAR_2 = FUNC_0(VAR_0);
 unsigned int VAR_3;
 u32 VAR_4 = VAR_2->thru_bits;

 for (VAR_3 = 0; VAR_3 < VAR_2->ss_channels; ++VAR_3) {
  VAR_1->value.integer.value[VAR_3] = !!(VAR_4 & (1 << VAR_3));
 }
 return 0;
}
