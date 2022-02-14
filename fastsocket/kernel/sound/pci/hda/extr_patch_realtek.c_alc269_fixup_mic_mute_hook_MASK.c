
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ mute_led_nid; scalar_t__ mute_led_polarity; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct hda_codec*,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_1(void *VAR_3, int VAR_4)
{
 struct hda_codec *VAR_5 = VAR_3;
 struct alc_spec *VAR_6 = VAR_5->spec;
 unsigned int VAR_7;

 if (VAR_6->mute_led_polarity)
  VAR_4 = !VAR_4;
 VAR_7 = VAR_0 |
  (VAR_4 ? VAR_2 : VAR_1);
 if (VAR_6->mute_led_nid)
  FUNC_0(VAR_5, VAR_6->mute_led_nid, VAR_7);
}
