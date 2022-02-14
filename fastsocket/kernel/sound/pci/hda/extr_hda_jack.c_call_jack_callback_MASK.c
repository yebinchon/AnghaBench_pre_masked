
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_jack_tbl {int (* callback ) (struct hda_codec*,struct hda_jack_tbl*) ;scalar_t__ gated_jack; } ;
struct hda_codec {int dummy; } ;


 struct hda_jack_tbl* FUNC_0 (struct hda_codec*,scalar_t__) ;
 int FUNC_1 (struct hda_codec*,struct hda_jack_tbl*) ;
 int FUNC_2 (struct hda_codec*,struct hda_jack_tbl*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0,
          struct hda_jack_tbl *VAR_1)
{
 if (VAR_1->callback)
  VAR_1->callback(VAR_0, VAR_1);
 if (VAR_1->gated_jack) {
  struct hda_jack_tbl *VAR_2 =
   FUNC_0(VAR_0, VAR_1->gated_jack);
  if (VAR_2 && VAR_2->callback)
   VAR_2->callback(VAR_0, VAR_2);
 }
}
