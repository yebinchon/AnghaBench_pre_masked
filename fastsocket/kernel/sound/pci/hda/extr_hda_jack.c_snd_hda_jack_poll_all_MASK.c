
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_jack_tbl {int pin_sense; scalar_t__ phantom_jack; int jack_dirty; int nid; } ;
struct TYPE_2__ {int used; struct hda_jack_tbl* list; } ;
struct hda_codec {TYPE_1__ jacktbl; } ;


 int FUNC_0 (struct hda_codec*,struct hda_jack_tbl*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (struct hda_codec*,struct hda_jack_tbl*) ;
 int FUNC_3 (struct hda_codec*) ;

void FUNC_4(struct hda_codec *VAR_0)
{
 struct hda_jack_tbl *VAR_1 = VAR_0->jacktbl.list;
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->jacktbl.used; VAR_2++, VAR_1++) {
  unsigned int VAR_4;
  if (!VAR_1->nid || !VAR_1->jack_dirty || VAR_1->phantom_jack)
   continue;
  VAR_4 = FUNC_1(VAR_1->pin_sense);
  FUNC_2(VAR_0, VAR_1);
  if (VAR_4 == FUNC_1(VAR_1->pin_sense))
   continue;
  VAR_3 = 1;
  FUNC_0(VAR_0, VAR_1);
 }
 if (VAR_3)
  FUNC_3(VAR_0);
}
