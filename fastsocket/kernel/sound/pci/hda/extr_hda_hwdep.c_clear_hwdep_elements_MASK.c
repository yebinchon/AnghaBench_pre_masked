
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hda_hint {int key; } ;
struct TYPE_3__ {int used; } ;
struct hda_codec {TYPE_1__ user_pins; TYPE_1__ hints; TYPE_1__ init_verbs; } ;


 int FUNC_0 (int ) ;
 struct hda_hint* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 int VAR_1;


 FUNC_2(&VAR_0->init_verbs);

 for (VAR_1 = 0; VAR_1 < VAR_0->hints.used; VAR_1++) {
  struct hda_hint *VAR_2 = FUNC_1(&VAR_0->hints, VAR_1);
  FUNC_0(VAR_2->key);
 }
 FUNC_2(&VAR_0->hints);
 FUNC_2(&VAR_0->user_pins);
}
