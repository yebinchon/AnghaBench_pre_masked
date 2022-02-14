
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int jack_dirty; scalar_t__ gated_jack; int pin_sense; scalar_t__ gating_jack; int nid; scalar_t__ phantom_jack; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*,scalar_t__) ;
 struct hda_jack_tbl* FUNC_2 (struct hda_codec*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1,
          struct hda_jack_tbl *VAR_2)
{
 if (!VAR_2->jack_dirty)
  return;

 if (VAR_2->phantom_jack)
  VAR_2->pin_sense = VAR_0;
 else
  VAR_2->pin_sense = FUNC_0(VAR_1, VAR_2->nid);


 if (VAR_2->gating_jack && !FUNC_1(VAR_1, VAR_2->gating_jack))
  VAR_2->pin_sense &= ~VAR_0;

 VAR_2->jack_dirty = 0;


 if (VAR_2->gated_jack) {
  struct hda_jack_tbl *VAR_3 =
   FUNC_2(VAR_1, VAR_2->gated_jack);
  if (VAR_3) {
   VAR_3->jack_dirty = 1;
   FUNC_3(VAR_1, VAR_3);
  }
 }
}
