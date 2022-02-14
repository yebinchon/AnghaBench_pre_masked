
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_nid_item {int kctl; } ;
struct TYPE_4__ {int used; struct hda_nid_item* list; } ;
struct hda_codec {TYPE_2__ nids; TYPE_2__ mixers; TYPE_1__* bus; } ;
struct TYPE_3__ {int card; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct hda_codec *VAR_0)
{
 int VAR_1;
 struct hda_nid_item *VAR_2 = VAR_0->mixers.list;
 for (VAR_1 = 0; VAR_1 < VAR_0->mixers.used; VAR_1++)
  FUNC_1(VAR_0->bus->card, VAR_2[VAR_1].kctl);
 FUNC_0(&VAR_0->mixers);
 FUNC_0(&VAR_0->nids);
}
