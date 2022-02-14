
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_gen_spec {int suppress_auto_mute; int suppress_auto_mic; int line_in_auto_switch; int auto_mute_via_amp; int need_dac_fix; int no_primary_hp; int multi_cap_vol; int inv_dmic_split; int indep_hp; int add_stereo_mix_input; int add_jack_modes; int power_down_unused; int hp_mic; int suppress_hp_mic_detect; int mixer_nid; } ;
struct hda_codec {int no_jack_detect; int inv_jack_detect; int no_trigger_sense; int inv_eapd; int pcm_format_first; int no_sticky_stream; int spdif_status_reset; int pin_amp_workaround; int single_adc_amp; struct hda_gen_spec* spec; } ;


 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,char*,int*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 struct hda_gen_spec *VAR_1 = VAR_0->spec;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, "jack_detect");
 if (VAR_2 >= 0)
  VAR_0->no_jack_detect = !VAR_2;
 VAR_2 = FUNC_0(VAR_0, "inv_jack_detect");
 if (VAR_2 >= 0)
  VAR_0->inv_jack_detect = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "trigger_sense");
 if (VAR_2 >= 0)
  VAR_0->no_trigger_sense = !VAR_2;
 VAR_2 = FUNC_0(VAR_0, "inv_eapd");
 if (VAR_2 >= 0)
  VAR_0->inv_eapd = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "pcm_format_first");
 if (VAR_2 >= 0)
  VAR_0->pcm_format_first = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "sticky_stream");
 if (VAR_2 >= 0)
  VAR_0->no_sticky_stream = !VAR_2;
 VAR_2 = FUNC_0(VAR_0, "spdif_status_reset");
 if (VAR_2 >= 0)
  VAR_0->spdif_status_reset = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "pin_amp_workaround");
 if (VAR_2 >= 0)
  VAR_0->pin_amp_workaround = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "single_adc_amp");
 if (VAR_2 >= 0)
  VAR_0->single_adc_amp = !!VAR_2;

 VAR_2 = FUNC_0(VAR_0, "auto_mute");
 if (VAR_2 >= 0)
  VAR_1->suppress_auto_mute = !VAR_2;
 VAR_2 = FUNC_0(VAR_0, "auto_mic");
 if (VAR_2 >= 0)
  VAR_1->suppress_auto_mic = !VAR_2;
 VAR_2 = FUNC_0(VAR_0, "line_in_auto_switch");
 if (VAR_2 >= 0)
  VAR_1->line_in_auto_switch = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "auto_mute_via_amp");
 if (VAR_2 >= 0)
  VAR_1->auto_mute_via_amp = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "need_dac_fix");
 if (VAR_2 >= 0)
  VAR_1->need_dac_fix = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "primary_hp");
 if (VAR_2 >= 0)
  VAR_1->no_primary_hp = !VAR_2;
 VAR_2 = FUNC_0(VAR_0, "multi_cap_vol");
 if (VAR_2 >= 0)
  VAR_1->multi_cap_vol = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "inv_dmic_split");
 if (VAR_2 >= 0)
  VAR_1->inv_dmic_split = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "indep_hp");
 if (VAR_2 >= 0)
  VAR_1->indep_hp = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "add_stereo_mix_input");
 if (VAR_2 >= 0)
  VAR_1->add_stereo_mix_input = !!VAR_2;

 VAR_2 = FUNC_0(VAR_0, "add_out_jack_modes");
 if (VAR_2 >= 0)
  VAR_1->add_jack_modes = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "add_in_jack_modes");
 if (VAR_2 >= 0)
  VAR_1->add_jack_modes = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "add_jack_modes");
 if (VAR_2 >= 0)
  VAR_1->add_jack_modes = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "power_down_unused");
 if (VAR_2 >= 0)
  VAR_1->power_down_unused = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "add_hp_mic");
 if (VAR_2 >= 0)
  VAR_1->hp_mic = !!VAR_2;
 VAR_2 = FUNC_0(VAR_0, "hp_mic_detect");
 if (VAR_2 >= 0)
  VAR_1->suppress_hp_mic_detect = !VAR_2;

 if (!FUNC_1(VAR_0, "mixer_nid", &VAR_2))
  VAR_1->mixer_nid = VAR_2;
}
