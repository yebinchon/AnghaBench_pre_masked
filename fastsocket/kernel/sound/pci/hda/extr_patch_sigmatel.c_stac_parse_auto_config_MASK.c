
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hook; } ;
struct TYPE_6__ {scalar_t__ beep_nid; TYPE_2__ vmaster_mute; int * vmaster_tlv; int autocfg; int mic_autoswitch_hook; int line_automute_hook; int hp_automute_hook; int automute_hook; int pcm_capture_hook; int pcm_playback_hook; } ;
struct sigmatel_spec {scalar_t__ anabeep_nid; scalar_t__ have_spdif_mux; scalar_t__ aloopback_ctl; TYPE_3__ gen; scalar_t__ gpio_led; int linear_tone_beep; scalar_t__ headset_jack; } ;
struct hda_codec {TYPE_1__* beep; struct sigmatel_spec* spec; } ;
typedef scalar_t__ hda_nid_t ;
struct TYPE_4__ {int linear_tone; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct hda_codec*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,int *,scalar_t__) ;
 int FUNC_2 (struct hda_codec*,int *) ;
 int FUNC_3 (struct hda_codec*,char*) ;
 int FUNC_4 (struct hda_codec*,int *,int *,int) ;
 int FUNC_5 (struct hda_codec*,scalar_t__) ;
 int FUNC_6 (struct hda_codec*) ;
 int VAR_5 ;
 int FUNC_7 (struct hda_codec*) ;
 int VAR_6 ;
 int FUNC_8 (struct hda_codec*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_9(struct hda_codec *VAR_12)
{
 struct sigmatel_spec *VAR_13 = VAR_12->spec;
 int VAR_14;
 int VAR_15 = 0;

 if (VAR_13->headset_jack)
  VAR_15 |= VAR_3;

 VAR_14 = FUNC_4(VAR_12, &VAR_13->gen.autocfg, ((void*)0), VAR_15);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_13->gen.pcm_playback_hook = VAR_9;
 VAR_13->gen.pcm_capture_hook = VAR_5;

 VAR_13->gen.automute_hook = VAR_10;
 VAR_13->gen.hp_automute_hook = VAR_6;
 VAR_13->gen.line_automute_hook = VAR_7;
 VAR_13->gen.mic_autoswitch_hook = VAR_8;

 VAR_14 = FUNC_2(VAR_12, &VAR_13->gen.autocfg);
 if (VAR_14 < 0)
  return VAR_14;


 VAR_13->gen.vmaster_tlv[3] |= VAR_4;


 if (VAR_13->anabeep_nid > 0) {
  VAR_14 = FUNC_5(VAR_12,
       VAR_13->anabeep_nid);
  if (VAR_14 < 0)
   return VAR_14;
 }
 if (VAR_13->gpio_led)
  VAR_13->gen.vmaster_mute.hook = VAR_11;

 if (VAR_13->aloopback_ctl &&
     FUNC_3(VAR_12, "loopback") == 1) {
  if (!FUNC_1(&VAR_13->gen, ((void*)0), VAR_13->aloopback_ctl))
   return -VAR_1;
 }

 if (VAR_13->have_spdif_mux) {
  VAR_14 = FUNC_7(VAR_12);
  if (VAR_14 < 0)
   return VAR_14;
 }

 FUNC_8(VAR_12);

 return 0;
}
