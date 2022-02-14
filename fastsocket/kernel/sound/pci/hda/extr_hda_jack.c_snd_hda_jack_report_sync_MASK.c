
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_jack_tbl {int type; scalar_t__ jack; int kctl; int pin_sense; scalar_t__ nid; } ;
struct TYPE_3__ {int used; struct hda_jack_tbl* list; } ;
struct hda_codec {TYPE_2__* bus; TYPE_1__ jacktbl; } ;
struct TYPE_4__ {int card; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hda_codec*,struct hda_jack_tbl*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct hda_codec *VAR_0)
{
 struct hda_jack_tbl *VAR_1;
 int VAR_2, VAR_3;


 VAR_1 = VAR_0->jacktbl.list;
 for (VAR_2 = 0; VAR_2 < VAR_0->jacktbl.used; VAR_2++, VAR_1++)
  if (VAR_1->nid)
   FUNC_1(VAR_0, VAR_1);




 VAR_1 = VAR_0->jacktbl.list;
 for (VAR_2 = 0; VAR_2 < VAR_0->jacktbl.used; VAR_2++, VAR_1++)
  if (VAR_1->nid) {
   if (!VAR_1->kctl)
    continue;
   VAR_3 = FUNC_0(VAR_1->pin_sense);
   FUNC_3(VAR_0->bus->card, VAR_1->kctl, VAR_3);





  }
}
