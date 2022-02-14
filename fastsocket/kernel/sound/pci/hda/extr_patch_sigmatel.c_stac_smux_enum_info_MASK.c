
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct sigmatel_spec {int spdif_mux; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;


 int FUNC_0 (int *,struct snd_ctl_elem_info*) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_info *VAR_1)
{
 struct hda_codec *VAR_2 = FUNC_1(VAR_0);
 struct sigmatel_spec *VAR_3 = VAR_2->spec;
 return FUNC_0(&VAR_3->spdif_mux, VAR_1);
}
