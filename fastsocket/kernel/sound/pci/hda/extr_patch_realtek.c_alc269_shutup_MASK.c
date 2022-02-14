
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ codec_variant; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 struct alc_spec *VAR_2 = VAR_1->spec;

 if (VAR_2->codec_variant != VAR_0)
  return;

 if (VAR_2->codec_variant == VAR_0)
  FUNC_0(VAR_1, 0);
 if (VAR_2->codec_variant == VAR_0 &&
   (FUNC_1(VAR_1) & 0x00ff) == 0x018) {
  FUNC_2(150);
 }
}
