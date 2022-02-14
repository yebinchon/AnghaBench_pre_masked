
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int id; } ;
struct TYPE_3__ {int * dig_out_pins; } ;
struct TYPE_4__ {TYPE_1__ autocfg; } ;
struct sigmatel_spec {int * cur_smux; TYPE_2__ gen; int spdif_mux; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 unsigned int FUNC_0 (struct snd_kcontrol*,int *) ;
 int FUNC_1 (struct hda_codec*,int *,struct snd_ctl_elem_value*,int ,int *) ;
 struct hda_codec* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
         struct snd_ctl_elem_value *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_2(VAR_0);
 struct sigmatel_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4 = FUNC_0(VAR_0, &VAR_1->id);

 return FUNC_1(VAR_2, &VAR_3->spdif_mux, VAR_1,
         VAR_3->gen.autocfg.dig_out_pins[VAR_4],
         &VAR_3->cur_smux[VAR_4]);
}
