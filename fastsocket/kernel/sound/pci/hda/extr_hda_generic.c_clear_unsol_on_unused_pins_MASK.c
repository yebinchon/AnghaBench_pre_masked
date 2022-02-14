
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_pincfg {int nid; } ;
struct TYPE_2__ {int used; } ;
struct hda_codec {TYPE_1__ init_pins; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ) ;
 struct hda_pincfg* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->init_pins.used; VAR_2++) {
  struct hda_pincfg *VAR_3 = FUNC_1(&VAR_1->init_pins, VAR_2);
  hda_nid_t VAR_4 = VAR_3->nid;
  if (FUNC_0(VAR_1, VAR_4) &&
      !FUNC_3(VAR_1, VAR_4))
   FUNC_2(VAR_1, VAR_4, 0,
     VAR_0, 0);
 }
}
