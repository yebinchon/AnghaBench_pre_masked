
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_verb {int member_0; int member_2; int const member_1; } ;
struct hda_codec {int dummy; } ;






 unsigned int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,struct hda_verb const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 static const struct hda_verb VAR_3[] = {
  {0x14, 131, 0},
  {0x17, 131, 1},
  {0x1b, 130, 128},
  {0x23, 130, 0},
  {0x1a, 130, 0},
  {}
 };
 static const struct hda_verb VAR_4[] = {
  {0x14, 131, 0},
  {0x17, 131, 0},
  {0x1a, 130, 128},
  {0x23, 130, 0},
  {0x1b, 130, 0},
  {}
 };
 static const struct hda_verb VAR_5[] = {
  {0x14, 131, 2},
  {0x23, 130, 129},
  {0x1b, 130, 0},
  {0x1a, 130, 0},
  {}
 };

 VAR_1 = FUNC_0(VAR_0, 0x1b);
 VAR_2 = FUNC_0(VAR_0, 0x1a);
 if (VAR_1) {
  FUNC_2("CXT5066: external microphone detected\n");
  FUNC_1(VAR_0, VAR_3);
 } else if (VAR_2) {
  FUNC_2("CXT5066: dock microphone detected\n");
  FUNC_1(VAR_0, VAR_4);
 } else {
  FUNC_2("CXT5066: external microphone absent\n");
  FUNC_1(VAR_0, VAR_5);
 }
}
