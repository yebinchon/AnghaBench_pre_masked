
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ line_out_type; int line_outs; int speaker_outs; int * speaker_pins; int * line_out_pins; } ;
struct TYPE_3__ {TYPE_2__ autocfg; } ;
struct sigmatel_spec {TYPE_1__ gen; } ;
struct hda_codec {struct sigmatel_spec* spec; } ;
typedef int hda_nid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct hda_codec*,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct hda_codec *VAR_2)
{
 struct sigmatel_spec *VAR_3 = VAR_2->spec;
 hda_nid_t *VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3->gen.autocfg.line_out_type == VAR_0) {
  VAR_4 = VAR_3->gen.autocfg.line_out_pins;
  VAR_5 = VAR_3->gen.autocfg.line_outs;
 } else {
  VAR_4 = VAR_3->gen.autocfg.speaker_pins;
  VAR_5 = VAR_3->gen.autocfg.speaker_outs;
 }

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  unsigned int VAR_7 = FUNC_0(VAR_2, VAR_4[VAR_6]);
  if (FUNC_1(VAR_7) == VAR_1)
   return 1;
 }
 return 0;
}
