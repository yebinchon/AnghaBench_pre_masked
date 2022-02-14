
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct hda_verb {int member_0; int member_2; int const member_1; } const hda_verb ;
struct hda_codec {int dummy; } ;





 int VAR_0 ;
 unsigned int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,struct hda_verb const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_1)
{
 unsigned int VAR_2;

 struct hda_verb VAR_3[] = {

  {0x1a, 129, VAR_0},


  {0x17, 130, 0},
  {0x14, 130, 0},


  {0x23, 129, 0},
  {}
 };
 static const struct hda_verb VAR_4[] = {

  {0x23, 129, 128},


  {0x14, 130, 2},


  {0x1a, 129, 0},
  {}
 };

 VAR_2 = FUNC_0(VAR_1, 0x1a);
 if (VAR_2) {
  FUNC_2("CXT5066: external microphone detected\n");
  FUNC_1(VAR_1, VAR_3);
 } else {
  FUNC_2("CXT5066: external microphone absent\n");
  FUNC_1(VAR_1, VAR_4);
 }
}
