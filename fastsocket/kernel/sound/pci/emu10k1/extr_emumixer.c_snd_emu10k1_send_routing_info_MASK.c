
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_emu10k1 {scalar_t__ audigy; } ;
struct TYPE_4__ {int max; scalar_t__ min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;
 struct snd_emu10k1* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 struct snd_emu10k1 *VAR_3 = FUNC_0(VAR_1);
 VAR_2->type = VAR_0;
 VAR_2->count = VAR_3->audigy ? 3*8 : 3*4;
 VAR_2->value.integer.min = 0;
 VAR_2->value.integer.max = VAR_3->audigy ? 0x3f : 0x0f;
 return 0;
}
