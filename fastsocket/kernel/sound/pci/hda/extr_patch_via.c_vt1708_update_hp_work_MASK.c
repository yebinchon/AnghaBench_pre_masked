
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hp_outs; } ;
struct TYPE_6__ {TYPE_2__ autocfg; } ;
struct via_spec {scalar_t__ codec_type; int hp_work_active; scalar_t__ vt1708_jack_detect; TYPE_3__ gen; } ;
struct hda_codec {int jackpoll_work; TYPE_1__* bus; int jackpoll_interval; struct via_spec* spec; } ;
struct TYPE_4__ {int workq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct hda_codec*,int,int ,int,int ) ;
 int FUNC_4 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_1)
{
 struct via_spec *VAR_2 = VAR_1->spec;
 if (VAR_2->codec_type != VAR_0 || !VAR_2->gen.autocfg.hp_outs)
  return;
 if (VAR_2->vt1708_jack_detect) {
  if (!VAR_2->hp_work_active) {
   VAR_1->jackpoll_interval = FUNC_1(100);
   FUNC_3(VAR_1, 0x1, 0, 0xf81, 0);
   FUNC_2(VAR_1->bus->workq,
        &VAR_1->jackpoll_work, 0);
   VAR_2->hp_work_active = 1;
  }
 } else if (!FUNC_0(VAR_1))
  FUNC_4(VAR_1);
}
