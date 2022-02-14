
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct snd_emu10k1_fx8010_ctl {scalar_t__ min; int max; int vcount; } ;
struct TYPE_3__ {scalar_t__ min; int max; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_info *VAR_3)
{
 struct snd_emu10k1_fx8010_ctl *VAR_4 =
  (struct snd_emu10k1_fx8010_ctl *) VAR_2->private_value;

 if (VAR_4->min == 0 && VAR_4->max == 1)
  VAR_3->type = VAR_0;
 else
  VAR_3->type = VAR_1;
 VAR_3->count = VAR_4->vcount;
 VAR_3->value.integer.min = VAR_4->min;
 VAR_3->value.integer.max = VAR_4->max;
 return 0;
}
