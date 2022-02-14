
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; scalar_t__ count; int type; } ;
struct azf3328_mixer_reg {int mask; scalar_t__ stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct azf3328_mixer_reg*,int ) ;

__attribute__((used)) static int
FUNC_3(struct snd_kcontrol *VAR_2,
         struct snd_ctl_elem_info *VAR_3)
{
 struct azf3328_mixer_reg VAR_4;

 FUNC_0();
 FUNC_2(&VAR_4, VAR_2->private_value);
 VAR_3->type = VAR_4.mask == 1 ?
  VAR_0 : VAR_1;
 VAR_3->count = VAR_4.stereo + 1;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = VAR_4.mask;
 FUNC_1();
 return 0;
}
