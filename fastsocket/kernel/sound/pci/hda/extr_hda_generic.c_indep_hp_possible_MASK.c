
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nid_path {int dummy; } ;
struct auto_pin_cfg {scalar_t__ line_out_type; int line_outs; int speaker_outs; } ;
struct hda_gen_spec {int* out_paths; int* hp_paths; int* speaker_paths; int mixer_nid; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct nid_path*,int ) ;
 struct nid_path* FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_1)
{
 struct hda_gen_spec *VAR_2 = VAR_1->spec;
 struct auto_pin_cfg *VAR_3 = &VAR_2->autocfg;
 struct nid_path *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3->line_out_type == VAR_0)
  VAR_6 = VAR_2->out_paths[0];
 else
  VAR_6 = VAR_2->hp_paths[0];
 VAR_4 = FUNC_1(VAR_1, VAR_6);
 if (!VAR_4)
  return 0;


 if (!VAR_2->mixer_nid || !FUNC_0(VAR_4, VAR_2->mixer_nid))
  return 1;


 for (VAR_5 = 0; VAR_5 < VAR_3->line_outs; VAR_5++) {
  if (VAR_2->out_paths[VAR_5] == VAR_6)
   break;
  VAR_4 = FUNC_1(VAR_1, VAR_2->out_paths[VAR_5]);
  if (VAR_4 && FUNC_0(VAR_4, VAR_2->mixer_nid))
   return 0;
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->speaker_outs; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1, VAR_2->speaker_paths[VAR_5]);
  if (VAR_4 && FUNC_0(VAR_4, VAR_2->mixer_nid))
   return 0;
 }

 return 1;
}
