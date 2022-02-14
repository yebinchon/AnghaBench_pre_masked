
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int speaker_outs; } ;
struct hda_gen_spec {int speaker_paths; TYPE_1__ autocfg; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 return FUNC_0(VAR_0, VAR_1->autocfg.speaker_outs,
     VAR_1->speaker_paths,
     "Speaker");
}
