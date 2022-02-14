
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {int codec_variant; } ;
typedef int hda_nid_t ;
 int FUNC_0 (struct hda_codec*,int const*,int const*) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_0)
{
 static const hda_nid_t VAR_1[] = { 0x1d, 0 };
 static const hda_nid_t VAR_2[] = { 0, 0x1b, 0x14, 0x21 };
 static const hda_nid_t VAR_3[] = { 0x15, 0x1b, 0x14, 0 };
 struct alc_spec *VAR_4 = VAR_0->spec;
 const hda_nid_t *VAR_5;

 switch (VAR_4->codec_variant) {
 case 135:
 case 133:
 case 131:
 case 129:
  VAR_5 = VAR_3;
  break;
 case 134:
 case 132:
 case 130:
 case 128:
  VAR_5 = VAR_2;
  break;
 default:
  VAR_5 = VAR_2;
  break;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_5);
}
