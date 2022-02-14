
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ indep_hp_enabled; } ;
struct via_spec {scalar_t__ codec_type; TYPE_1__ gen; } ;
struct hda_codec {struct via_spec* spec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct hda_codec*) ;
 int FUNC_1 (struct hda_codec*,int,unsigned int*) ;
 int FUNC_2 (struct hda_codec*,int,int ,int ,int) ;
 unsigned int FUNC_3 (struct hda_codec*,int) ;
 int FUNC_4 (struct hda_codec*,int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct hda_codec *VAR_4)
{
 struct via_spec *VAR_5 = VAR_4->spec;
 int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_6 =
 FUNC_2(VAR_4, 0x1e, 0, VAR_2, 0x00) == 3;


 VAR_7 = VAR_1;
 FUNC_1(VAR_4, 0x29, &VAR_7);
 FUNC_1(VAR_4, 0x2a, &VAR_7);
 FUNC_1(VAR_4, 0x2b, &VAR_7);
 VAR_7 = VAR_0;

 FUNC_4(VAR_4, 0x1e, VAR_7);
 FUNC_4(VAR_4, 0x1f, VAR_7);
 FUNC_4(VAR_4, 0x10, VAR_7);
 FUNC_4(VAR_4, 0x11, VAR_7);



 FUNC_4(VAR_4, 0x8, VAR_7);

 if (VAR_5->codec_type == VAR_3) {

  VAR_7 = VAR_1;
  FUNC_1(VAR_4, 0x28, &VAR_7);
  FUNC_4(VAR_4, 0x18, VAR_7);
  FUNC_4(VAR_4, 0x38, VAR_7);
 } else {

  VAR_7 = VAR_1;
  FUNC_1(VAR_4, 0x26, &VAR_7);
  FUNC_4(VAR_4, 0x1c, VAR_7);
  FUNC_4(VAR_4, 0x37, VAR_7);
 }

 if (VAR_5->codec_type == VAR_3) {

  VAR_7 = VAR_1;
  FUNC_1(VAR_4, 0x25, &VAR_7);
  FUNC_4(VAR_4, 0x15, VAR_7);
  FUNC_4(VAR_4, 0x35, VAR_7);
 } else {

  VAR_7 = VAR_1;
  FUNC_1(VAR_4, 0x25, &VAR_7);
  FUNC_4(VAR_4, 0x19, VAR_7);
  FUNC_4(VAR_4, 0x35, VAR_7);
 }

 if (VAR_5->gen.indep_hp_enabled)
  FUNC_4(VAR_4, 0x9, VAR_0);



 VAR_8 = FUNC_3(VAR_4, 0x25);

 VAR_7 = VAR_1;
 FUNC_1(VAR_4, 0x24, &VAR_7);
 VAR_7 = VAR_8 ? VAR_1 : VAR_0;
 if (VAR_5->codec_type == VAR_3)
  FUNC_4(VAR_4, 0x14, VAR_7);
 else
  FUNC_4(VAR_4, 0x18, VAR_7);
 FUNC_4(VAR_4, 0x34, VAR_7);


 VAR_8 = FUNC_3(VAR_4, 0x26);

 VAR_7 = VAR_8 ? VAR_1 : VAR_0;
 if (VAR_5->codec_type == VAR_3) {

  FUNC_4(VAR_4, 0x33, VAR_7);
  FUNC_4(VAR_4, 0x1c, VAR_7);
  FUNC_4(VAR_4, 0x3c, VAR_7);
 } else {

  FUNC_4(VAR_4, 0x31, VAR_7);
  FUNC_4(VAR_4, 0x17, VAR_7);
  FUNC_4(VAR_4, 0x3b, VAR_7);
 }

 if (VAR_6 || !FUNC_0(VAR_4))
  FUNC_4(VAR_4, 0x21, VAR_0);
 else
  FUNC_4(VAR_4, 0x21, VAR_1);
}
