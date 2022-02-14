
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ hook; } ;
struct TYPE_3__ {int num_dacs; int * extra_out_nid; int * hp_out_nid; } ;
struct auto_pin_cfg {int line_outs; int line_out_type; scalar_t__ speaker_outs; scalar_t__ hp_outs; } ;
struct hda_gen_spec {scalar_t__ multi_ios; int * speaker_paths; int * hp_paths; TYPE_2__ vmaster_mute; TYPE_1__ multiout; int mixer_nid; struct auto_pin_cfg autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (char const**) ;


 char const** VAR_0 ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static const char *FUNC_3(struct hda_codec *VAR_1, int VAR_2,
        int *VAR_3, int VAR_4)
{
 struct hda_gen_spec *VAR_5 = VAR_1->spec;
 struct auto_pin_cfg *VAR_6 = &VAR_5->autocfg;

 *VAR_3 = 0;
 if (VAR_6->line_outs == 1 && !VAR_5->multi_ios &&
     !VAR_6->hp_outs && !VAR_6->speaker_outs)
  return VAR_5->vmaster_mute.hook ? "PCM" : "Master";




 if (VAR_5->multiout.num_dacs == 1 && !VAR_5->mixer_nid &&
     !VAR_5->multiout.hp_out_nid[0] && !VAR_5->multiout.extra_out_nid[0])
  return VAR_5->vmaster_mute.hook ? "PCM" : "Master";


 if (VAR_2 >= VAR_6->line_outs)
  return VAR_0[VAR_2];

 switch (VAR_6->line_out_type) {
 case 128:



  if (!VAR_2 && VAR_6->hp_outs &&
      !FUNC_1(VAR_1, VAR_5->hp_paths[0], VAR_4))
   break;
  if (VAR_6->line_outs == 1)
   return "Speaker";
  if (VAR_6->line_outs == 2)
   return VAR_2 ? "Bass Speaker" : "Speaker";
  break;
 case 129:



  if (!VAR_2 && VAR_6->speaker_outs &&
      !FUNC_1(VAR_1, VAR_5->speaker_paths[0], VAR_4))
   break;

  if (VAR_2 && VAR_5->multi_ios)
   break;
  *VAR_3 = VAR_2;
  return "Headphone";
 }


 if (VAR_6->line_outs == 1 && !VAR_5->multi_ios)
  return "PCM";

 if (VAR_2 >= FUNC_0(VAR_0)) {
  FUNC_2();
  return "PCM";
 }

 return VAR_0[VAR_2];
}
