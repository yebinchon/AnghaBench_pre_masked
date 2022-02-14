
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_card {int dummy; } ;
struct TYPE_4__ {int (* free ) (struct hda_codec*) ;} ;
struct hda_codec {int num_pcms; int * owner; scalar_t__ spdif_status_reset; int * slave_dig_outs; int * preset; TYPE_1__* pcm_info; int verbs; int spdif_out; int cvt_setups; int driver_pins; int cmd_cache; int amp_cache; int * spec; int * proc_widget_hook; TYPE_2__ patch_ops; int power_jiffies; scalar_t__ power_transition; scalar_t__ power_on; int power_work; int jackpoll_work; struct hda_bus* bus; } ;
struct hda_cache_head {int dummy; } ;
struct hda_bus {int pcm_dev_bits; int workq; struct snd_card* card; } ;
struct hda_amp_info {int dummy; } ;
struct TYPE_3__ {int device; scalar_t__ pcm; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct snd_card*,scalar_t__) ;
 int FUNC_9 (struct hda_codec*) ;
 int FUNC_10 (struct hda_codec*) ;
 scalar_t__ FUNC_11 (struct hda_bus*) ;
 int FUNC_12 (struct hda_bus*) ;
 int FUNC_13 (struct hda_codec*) ;

int FUNC_14(struct hda_codec *VAR_2)
{
 struct hda_bus *VAR_3 = VAR_2->bus;
 struct snd_card *VAR_4 = VAR_3->card;
 int VAR_5;

 if (FUNC_11(VAR_3) < 0)
  return -VAR_0;


 FUNC_0(&VAR_2->jackpoll_work);







 FUNC_9(VAR_2);

 for (VAR_5 = 0; VAR_5 < VAR_2->num_pcms; VAR_5++) {
  if (VAR_2->pcm_info[VAR_5].pcm) {
   FUNC_8(VAR_4, VAR_2->pcm_info[VAR_5].pcm);
   FUNC_1(VAR_2->pcm_info[VAR_5].device,
      VAR_3->pcm_dev_bits);
  }
 }
 if (VAR_2->patch_ops.free)
  VAR_2->patch_ops.free(VAR_2);
 FUNC_5(&VAR_2->patch_ops, 0, sizeof(VAR_2->patch_ops));
 FUNC_10(VAR_2);
 VAR_2->proc_widget_hook = ((void*)0);
 VAR_2->spec = ((void*)0);
 FUNC_3(&VAR_2->amp_cache);
 FUNC_3(&VAR_2->cmd_cache);
 FUNC_4(&VAR_2->amp_cache, sizeof(struct hda_amp_info));
 FUNC_4(&VAR_2->cmd_cache, sizeof(struct hda_cache_head));

 FUNC_7(&VAR_2->driver_pins);
 FUNC_7(&VAR_2->cvt_setups);
 FUNC_7(&VAR_2->spdif_out);
 FUNC_7(&VAR_2->verbs);
 VAR_2->num_pcms = 0;
 VAR_2->pcm_info = ((void*)0);
 VAR_2->preset = ((void*)0);
 VAR_2->slave_dig_outs = ((void*)0);
 VAR_2->spdif_status_reset = 0;
 FUNC_6(VAR_2->owner);
 VAR_2->owner = ((void*)0);


 FUNC_12(VAR_3);
 return 0;
}
