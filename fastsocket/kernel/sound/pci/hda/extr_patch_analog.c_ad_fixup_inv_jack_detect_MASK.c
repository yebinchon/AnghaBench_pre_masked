
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_fixup {int dummy; } ;
struct hda_codec {int inv_jack_detect; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct hda_codec *VAR_1,
         const struct hda_fixup *VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0)
  VAR_1->inv_jack_detect = 1;
}
