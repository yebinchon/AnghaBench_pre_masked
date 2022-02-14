
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_5__ {int * output_source; } ;
struct snd_emu10k1 {TYPE_1__ emu1010; TYPE_2__* card_capabilities; } ;
struct TYPE_7__ {int * item; } ;
struct TYPE_8__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_4__ value; } ;
struct TYPE_6__ {scalar_t__ emu_model; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_emu10k1* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
                                 struct snd_ctl_elem_value *VAR_3)
{
 struct snd_emu10k1 *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;

 VAR_5 = (VAR_2->private_value) & 0xff;

 if (VAR_5 >= 24 ||
     (VAR_4->card_capabilities->emu_model == VAR_1 &&
      VAR_5 >= 18))
  return -VAR_0;
 VAR_3->value.enumerated.item[0] = VAR_4->emu1010.output_source[VAR_5];
 return 0;
}
