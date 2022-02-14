
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct alc_spec* spec; } ;
struct alc_spec {scalar_t__ codec_variant; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 struct alc_spec *VAR_2 = VAR_1->spec;
 int VAR_3;

 if (VAR_2->codec_variant != VAR_0)
  return;

 if ((FUNC_0(VAR_1) & 0x00ff) < 0x015) {
  FUNC_2(VAR_1, 0xf, 0x960b);
  FUNC_2(VAR_1, 0xe, 0x8817);
 }

 if ((FUNC_0(VAR_1) & 0x00ff) == 0x016) {
  FUNC_2(VAR_1, 0xf, 0x960b);
  FUNC_2(VAR_1, 0xe, 0x8814);
 }

 if ((FUNC_0(VAR_1) & 0x00ff) == 0x017) {
  VAR_3 = FUNC_1(VAR_1, 0x04);

  FUNC_2(VAR_1, 0x04, VAR_3 | (1<<11));
 }

 if ((FUNC_0(VAR_1) & 0x00ff) == 0x018) {
  VAR_3 = FUNC_1(VAR_1, 0xd);
  if ((VAR_3 & 0x0c00) >> 10 != 0x1) {

   FUNC_2(VAR_1, 0xd, VAR_3 | (1<<10));
  }
  VAR_3 = FUNC_1(VAR_1, 0x17);
  if ((VAR_3 & 0x01c0) >> 6 != 0x4) {

   FUNC_2(VAR_1, 0x17, VAR_3 | (1<<7));
  }
 }

 VAR_3 = FUNC_1(VAR_1, 0xd);
 FUNC_2(VAR_1, 0xd, VAR_3 | (1<<14));

 VAR_3 = FUNC_1(VAR_1, 0x4);
 FUNC_2(VAR_1, 0x4, VAR_3 | (1<<11));
}
