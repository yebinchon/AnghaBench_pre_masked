
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct hda_gen_spec {int multi_ios; int min_channel_count; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 struct hda_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
   struct snd_ctl_elem_info *VAR_2)
{
 struct hda_codec *VAR_3 = FUNC_0(VAR_1);
 struct hda_gen_spec *VAR_4 = VAR_3->spec;
 int VAR_5;

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_4->multi_ios + 1;
 if (VAR_2->value.enumerated.item > VAR_4->multi_ios)
  VAR_2->value.enumerated.item = VAR_4->multi_ios;
 VAR_5 = VAR_2->value.enumerated.item * 2 + VAR_4->min_channel_count;
 FUNC_1(VAR_2->value.enumerated.name, "%dch", VAR_5);
 return 0;
}
