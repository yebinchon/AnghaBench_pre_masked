
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int ext_mic_present; scalar_t__ dc_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 if (VAR_3->dc_enable)
  return;

 VAR_4 = FUNC_1(VAR_2, 0x1a, 0,
         VAR_0, 0) & 0x80000000;
 if (VAR_4)
  FUNC_3("CXT5066: external microphone detected\n");
 else
  FUNC_3("CXT5066: external microphone absent\n");

 FUNC_2(VAR_2, 0x17, 0, VAR_1,
  VAR_4 ? 0 : 1);
 VAR_3->ext_mic_present = !!VAR_4;

 FUNC_0(VAR_2);
}
