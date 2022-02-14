
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* free ) (struct hda_codec*) ;} ;
struct hda_codec {size_t addr; struct hda_codec* wcaps; struct hda_codec* modelname; struct hda_codec* chip_name; struct hda_codec* vendor_name; int cmd_cache; int amp_cache; int owner; TYPE_2__* bus; int pm_down_notified; TYPE_1__ patch_ops; int spdif_out; int cvt_setups; int nids; int mixers; int list; int power_work; int jackpoll_work; } ;
struct TYPE_4__ {int ** caddr_tbl; int workq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct hda_codec*) ;
 int FUNC_12 (struct hda_codec*) ;

__attribute__((used)) static void FUNC_13(struct hda_codec *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_1(&VAR_0->jackpoll_work);
 FUNC_11(VAR_0);
 FUNC_4(VAR_0);




 FUNC_7(&VAR_0->list);
 FUNC_10(&VAR_0->mixers);
 FUNC_10(&VAR_0->nids);
 FUNC_10(&VAR_0->cvt_setups);
 FUNC_10(&VAR_0->spdif_out);
 FUNC_9(VAR_0);
 VAR_0->bus->caddr_tbl[VAR_0->addr] = ((void*)0);
 if (VAR_0->patch_ops.free)
  VAR_0->patch_ops.free(VAR_0);




 FUNC_8(VAR_0->owner);
 FUNC_3(&VAR_0->amp_cache);
 FUNC_3(&VAR_0->cmd_cache);
 FUNC_6(VAR_0->vendor_name);
 FUNC_6(VAR_0->chip_name);
 FUNC_6(VAR_0->modelname);
 FUNC_6(VAR_0->wcaps);
 FUNC_6(VAR_0);
}
