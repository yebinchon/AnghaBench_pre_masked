
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int line_out_type; } ;
struct hda_gen_spec {unsigned int aamix_mode; int * aamix_out_paths; int * speaker_paths; int * hp_paths; TYPE_3__ autocfg; int * out_paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hda_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct hda_codec*,unsigned int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_0(VAR_2);
 struct hda_gen_spec *VAR_5 = VAR_4->spec;
 unsigned int VAR_6 = VAR_3->value.enumerated.item[0];

 if (VAR_6 == VAR_5->aamix_mode)
  return 0;
 VAR_5->aamix_mode = VAR_6;
 FUNC_1(VAR_4, VAR_6, VAR_5->out_paths[0],
      VAR_5->aamix_out_paths[0],
      VAR_5->autocfg.line_out_type);
 FUNC_1(VAR_4, VAR_6, VAR_5->hp_paths[0],
      VAR_5->aamix_out_paths[1],
      VAR_0);
 FUNC_1(VAR_4, VAR_6, VAR_5->speaker_paths[0],
      VAR_5->aamix_out_paths[2],
      VAR_1);
 return 1;
}
