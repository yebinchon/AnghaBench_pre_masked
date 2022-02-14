
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_verb {int member_0; int member_2; int member_1; } ;
struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {scalar_t__ ext_mic_present; scalar_t__ dc_enable; int recording; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,struct hda_verb const*) ;
 int FUNC_2 (struct hda_codec*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_4)
{
 struct conexant_spec *VAR_5 = VAR_4->spec;
 if (!VAR_5->recording)
  return;

 if (VAR_5->dc_enable) {


  const struct hda_verb VAR_6[] = {

   {0x1b, VAR_0, 0},


   {0x1e, VAR_0, VAR_2},
   {},
  };

  FUNC_1(VAR_4, VAR_6);

  FUNC_0(VAR_4);
  return;
 }


 FUNC_2(VAR_4, 0x1e, 0);


 FUNC_2(VAR_4, 0x1a,
  VAR_5->ext_mic_present ? VAR_1 : 0);


 FUNC_2(VAR_4, 0x1b,
  VAR_5->ext_mic_present ? 0 : VAR_3);
}
