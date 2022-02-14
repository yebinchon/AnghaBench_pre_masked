
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dig_outs; scalar_t__ dig_in_pin; } ;
struct hda_gen_spec {int digin_path; TYPE_1__ autocfg; int * digout_paths; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;


 int FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 int VAR_2;
 hda_nid_t VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->autocfg.dig_outs; VAR_2++)
  FUNC_2(VAR_0, VAR_1->digout_paths[VAR_2]);
 VAR_3 = VAR_1->autocfg.dig_in_pin;
 if (VAR_3) {
  FUNC_0(VAR_0, VAR_3);
  FUNC_1(VAR_0, VAR_1->digin_path);
 }
}
