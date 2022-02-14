
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active_streams; } ;
struct via_spec {int alc_mode; int codec_type; TYPE_1__ gen; scalar_t__ no_pin_power_ctl; } ;
struct hda_codec {int afg; struct via_spec* spec; } ;
 scalar_t__ FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0, bool VAR_1)
{
 struct via_spec *VAR_2 = VAR_0->spec;
 bool VAR_3;
 unsigned int VAR_4, VAR_5;

 if (VAR_2->no_pin_power_ctl)
  VAR_3 = 0;
 else
  VAR_3 = FUNC_0(VAR_0) && !VAR_2->gen.active_streams;
 if (VAR_3 == VAR_2->alc_mode && !VAR_1)
  return;
 VAR_2->alc_mode = VAR_3;


 switch (VAR_2->codec_type) {
 case 135:
 case 136:
  VAR_4 = 0xf70;
  VAR_5 = VAR_3 ? 0x02 : 0x00;
  break;
 case 134:
 case 132:
 case 133:
  VAR_4 = 0xf73;
  VAR_5 = VAR_3 ? 0x51 : 0xe1;
  break;
 case 138:
  VAR_4 = 0xf73;
  VAR_5 = VAR_3 ? 0x01 : 0x1d;
  break;
 case 128:
 case 129:
 case 131:
  VAR_4 = 0xf93;
  VAR_5 = VAR_3 ? 0x00 : 0xe0;
  break;
 case 137:
 case 130:
  VAR_4 = 0xf82;
  VAR_5 = VAR_3 ? 0x00 : 0xe0;
  break;
 default:
  return;
 }

 FUNC_1(VAR_0, VAR_0->afg, 0, VAR_4, VAR_5);
}
