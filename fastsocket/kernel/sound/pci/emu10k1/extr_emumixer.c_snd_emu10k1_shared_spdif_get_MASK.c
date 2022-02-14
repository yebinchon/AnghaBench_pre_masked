
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {TYPE_1__* card_capabilities; scalar_t__ port; scalar_t__ audigy; } ;
struct TYPE_5__ {int* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct TYPE_4__ {scalar_t__ invert_shared_spdif; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct snd_emu10k1 *VAR_6 = FUNC_1(VAR_4);

 if (VAR_6->audigy)
  VAR_5->value.integer.value[0] = FUNC_0(VAR_6->port + VAR_0) & VAR_1 ? 1 : 0;
 else
  VAR_5->value.integer.value[0] = FUNC_0(VAR_6->port + VAR_2) & VAR_3 ? 1 : 0;
 if (VAR_6->card_capabilities->invert_shared_spdif)
  VAR_5->value.integer.value[0] =
   !VAR_5->value.integer.value[0];

 return 0;
}
