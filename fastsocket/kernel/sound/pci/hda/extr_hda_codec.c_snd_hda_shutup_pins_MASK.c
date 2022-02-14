
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_pincfg {int nid; } ;
struct TYPE_4__ {int used; } ;
struct hda_codec {int pins_shutup; TYPE_2__ init_pins; TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ shutdown; } ;


 int VAR_0 ;
 struct hda_pincfg* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;

void FUNC_2(struct hda_codec *VAR_1)
{
 int VAR_2;



 if (VAR_1->bus->shutdown)
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1->init_pins.used; VAR_2++) {
  struct hda_pincfg *VAR_3 = FUNC_0(&VAR_1->init_pins, VAR_2);

  FUNC_1(VAR_1, VAR_3->nid, 0,
       VAR_0, 0);
 }
 VAR_1->pins_shutup = 1;
}
