
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct hda_gen_spec {int * cur_mux; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 unsigned int FUNC_0 (struct snd_kcontrol*,int *) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
   struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_1(VAR_0);
 struct hda_gen_spec *VAR_3 = VAR_2->spec;

 unsigned int VAR_4 = FUNC_0(VAR_0, &VAR_1->id);

 VAR_1->value.enumerated.item[0] = VAR_3->cur_mux[VAR_4];
 return 0;
}
