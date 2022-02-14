
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int* item; } ;
struct TYPE_4__ {TYPE_3__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct hda_codec {struct ad198x_spec* spec; } ;
struct TYPE_5__ {int dig_out_nid; } ;
struct ad198x_spec {int spdif_route; TYPE_2__ multiout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 struct hda_codec* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct hda_codec *VAR_4 = FUNC_1(VAR_2);
 struct ad198x_spec *VAR_5 = VAR_4->spec;

 if (VAR_3->value.enumerated.item[0] > 1)
  return -VAR_1;
 if (VAR_5->spdif_route != VAR_3->value.enumerated.item[0]) {
  VAR_5->spdif_route = VAR_3->value.enumerated.item[0];
  FUNC_0(VAR_4, VAR_5->multiout.dig_out_nid, 0,
       VAR_0,
       VAR_5->spdif_route);
  return 1;
 }
 return 0;
}
