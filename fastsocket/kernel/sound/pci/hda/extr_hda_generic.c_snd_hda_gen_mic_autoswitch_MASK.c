
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_tbl {int dummy; } ;
struct hda_gen_spec {int am_num_entries; TYPE_1__* am_entry; int auto_mic; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef int hda_nid_t ;
struct TYPE_2__ {int idx; int pin; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_2 (struct hda_codec*,int ) ;

void FUNC_3(struct hda_codec *VAR_1, struct hda_jack_tbl *VAR_2)
{
 struct hda_gen_spec *VAR_3 = VAR_1->spec;
 int VAR_4;

 if (!VAR_3->auto_mic)
  return;

 for (VAR_4 = VAR_3->am_num_entries - 1; VAR_4 > 0; VAR_4--) {
  hda_nid_t VAR_5 = VAR_3->am_entry[VAR_4].pin;

  if (FUNC_1(VAR_1, VAR_5) & VAR_0)
   continue;
  if (FUNC_2(VAR_1, VAR_5)) {
   FUNC_0(VAR_1, 0, VAR_3->am_entry[VAR_4].idx);
   return;
  }
 }
 FUNC_0(VAR_1, 0, VAR_3->am_entry[0].idx);
}
