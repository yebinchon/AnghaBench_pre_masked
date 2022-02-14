
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_7__ {unsigned int* input_source; } ;
struct snd_emu10k1 {TYPE_4__* card_capabilities; TYPE_3__ emu1010; } ;
struct TYPE_5__ {unsigned int* item; } ;
struct TYPE_6__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_8__ {scalar_t__ emu_model; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int ) ;
 struct snd_emu10k1* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_5,
                                 struct snd_ctl_elem_value *VAR_6)
{
 struct snd_emu10k1 *VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_8 = VAR_6->value.enumerated.item[0];
 if (VAR_8 >= 53 ||
     (VAR_7->card_capabilities->emu_model == VAR_1 &&
      VAR_8 >= 49))
  return -VAR_0;
 VAR_9 = (VAR_5->private_value) & 0xff;

 if (VAR_9 >= 22)
  return -VAR_0;
 if (VAR_7->emu1010.input_source[VAR_9] == VAR_8)
  return 0;
 VAR_7->emu1010.input_source[VAR_9] = VAR_8;
 if (VAR_7->card_capabilities->emu_model == VAR_1)
  FUNC_0(VAR_7,
   VAR_2[VAR_9], VAR_4[VAR_8]);
 else
  FUNC_0(VAR_7,
   VAR_2[VAR_9], VAR_3[VAR_8]);
 return 1;
}
