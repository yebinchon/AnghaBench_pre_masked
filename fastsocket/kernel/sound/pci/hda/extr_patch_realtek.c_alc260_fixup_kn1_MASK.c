
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_pintbl {int member_0; int member_1; } ;
struct hda_fixup {int dummy; } ;
struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int init_amp; } ;


 int VAR_0 ;


 int FUNC_0 (struct hda_codec*,struct hda_pintbl const*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_1,
        const struct hda_fixup *VAR_2, int VAR_3)
{
 struct alc_spec *VAR_4 = VAR_1->spec;
 static const struct hda_pintbl VAR_5[] = {
  { 0x0f, 0x02214000 },
  { 0x12, 0x90a60160 },
  { 0x13, 0x02a19000 },
  { 0x18, 0x01446000 },

  { 0x10, 0x411111f0 },
  { 0x11, 0x411111f0 },
  { 0x14, 0x411111f0 },
  { 0x15, 0x411111f0 },
  { 0x16, 0x411111f0 },
  { 0x17, 0x411111f0 },
  { 0x19, 0x411111f0 },
  { }
 };

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_1, VAR_5);
  break;
 case 128:
  VAR_4->init_amp = VAR_0;
  break;
 }
}
