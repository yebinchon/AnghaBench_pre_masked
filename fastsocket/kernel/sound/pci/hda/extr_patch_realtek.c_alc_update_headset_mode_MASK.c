
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hda_codec {struct alc_spec* spec; } ;
struct TYPE_3__ {scalar_t__* hp_pins; } ;
struct TYPE_4__ {scalar_t__* imux_pins; size_t* cur_mux; int hp_jack_present; TYPE_1__ autocfg; } ;
struct alc_spec {scalar_t__ headset_mic_pin; scalar_t__ headphone_mic_pin; int current_headset_mode; TYPE_2__ gen; int current_headset_type; } ;
typedef scalar_t__ hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*,scalar_t__) ;
 int FUNC_8 (struct hda_codec*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(struct hda_codec *VAR_6)
{
 struct alc_spec *VAR_7 = VAR_6->spec;

 hda_nid_t VAR_8 = VAR_7->gen.imux_pins[VAR_7->gen.cur_mux[0]];
 hda_nid_t VAR_9 = VAR_7->gen.autocfg.hp_pins[0];

 int VAR_10;

 if (!FUNC_7(VAR_6, VAR_9))
  VAR_10 = 128;
 else if (VAR_8 == VAR_7->headset_mic_pin)
  VAR_10 = 130;
 else if (VAR_8 == VAR_7->headphone_mic_pin)
  VAR_10 = 129;
 else
  VAR_10 = 131;

 if (VAR_10 == VAR_7->current_headset_mode)
  return;

 switch (VAR_10) {
 case 128:
  FUNC_5(VAR_6);
  VAR_7->gen.hp_jack_present = 0;
  break;
 case 130:
  if (VAR_7->current_headset_type == VAR_4)
   FUNC_0(VAR_6);
  if (VAR_7->current_headset_type == VAR_2)
   FUNC_1(VAR_6);
  else if (VAR_7->current_headset_type == VAR_3)
   FUNC_4(VAR_6);
  VAR_7->gen.hp_jack_present = 1;
  break;
 case 129:
  FUNC_3(VAR_6, VAR_9, VAR_7->headphone_mic_pin);
  VAR_7->gen.hp_jack_present = 0;
  break;
 case 131:
  FUNC_2(VAR_6);
  VAR_7->gen.hp_jack_present = 1;
  break;
 }
 if (VAR_10 != 129) {
  FUNC_8(VAR_6, VAR_9,
       VAR_1 | VAR_0);
  if (VAR_7->headphone_mic_pin)
   FUNC_8(VAR_6, VAR_7->headphone_mic_pin,
        VAR_5);
 }
 VAR_7->current_headset_mode = VAR_10;

 FUNC_6(VAR_6);
}
