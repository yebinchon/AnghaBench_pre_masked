
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int,int*) ;

__attribute__((used)) static void FUNC_1(struct hda_codec *VAR_2,
       const struct hda_fixup *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_0) {

  hda_nid_t VAR_5[2] = { 0x0c, 0x0d };
  hda_nid_t VAR_6[2] = { 0x0e, 0x0f };
  FUNC_0(VAR_2, 0x14, 2, VAR_5);
  FUNC_0(VAR_2, 0x15, 2, VAR_5);
  FUNC_0(VAR_2, 0x18, 2, VAR_6);
  FUNC_0(VAR_2, 0x1a, 2, VAR_6);
 } else if (VAR_4 == VAR_1) {

  hda_nid_t VAR_7[5] = { 0x0c, 0x0d, 0x0e, 0x0f, 0x26 };
  FUNC_0(VAR_2, 0x14, 5, VAR_7);
  FUNC_0(VAR_2, 0x15, 5, VAR_7);
  FUNC_0(VAR_2, 0x18, 5, VAR_7);
  FUNC_0(VAR_2, 0x1a, 5, VAR_7);
 }
}
