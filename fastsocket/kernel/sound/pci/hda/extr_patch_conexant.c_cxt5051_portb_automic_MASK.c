
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct conexant_spec* spec; } ;
struct conexant_spec {int auto_mic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int,int ,int ,int) ;
 unsigned int FUNC_1 (struct hda_codec*,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_2)
{
 struct conexant_spec *VAR_3 = VAR_2->spec;
 unsigned int VAR_4;

 if (!(VAR_3->auto_mic & VAR_1))
  return;
 VAR_4 = FUNC_1(VAR_2, 0x17);
 FUNC_0(VAR_2, 0x14, 0,
       VAR_0,
       VAR_4 ? 0x01 : 0x00);
}
