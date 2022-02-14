
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_verb {int member_0; int member_2; int member_1; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,struct hda_verb const*) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_3)
{
 const struct hda_verb VAR_4[] = {

  {0x17, VAR_0, VAR_2},


  {0x17, VAR_1, 3},
  {}
 };


 FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_3);
}
