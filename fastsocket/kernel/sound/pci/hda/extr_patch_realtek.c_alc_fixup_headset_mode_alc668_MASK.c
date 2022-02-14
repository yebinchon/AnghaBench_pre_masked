
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,struct hda_fixup const*,int) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,int,int) ;
 int FUNC_3 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_1,
    const struct hda_fixup *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0) {
  int VAR_4;
  FUNC_2(VAR_1, 0xc4, 0x8000);
  VAR_4 = FUNC_1(VAR_1, 0xc2);
  FUNC_2(VAR_1, 0xc2, VAR_4 & 0xfe);
  FUNC_3(VAR_1, 0x18, 0);
 }
 FUNC_0(VAR_1, VAR_2, VAR_3);
}
