
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_verb {int member_0; int const member_2; int const member_1; } ;
struct hda_codec {int dummy; } ;





 unsigned int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,struct hda_verb const*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_0)
{
 static const struct hda_verb VAR_1[] = {
  {0x15, 130, 129},
  {0x17, 130, 128},
  {}
 };
 static const struct hda_verb VAR_2[] = {
  {0x17, 130, 129},
  {0x15, 130, 128},
  {}
 };
 unsigned int VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0x15);
 if (VAR_3)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_2);
}
