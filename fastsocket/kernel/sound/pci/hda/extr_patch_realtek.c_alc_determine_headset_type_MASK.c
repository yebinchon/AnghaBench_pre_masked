
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int vendor_id; struct alc_spec* spec; } ;
struct alc_spec {int current_headset_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_2)
{
 int VAR_3;
 bool VAR_4 = 0;
 struct alc_spec *VAR_5 = VAR_2->spec;

 switch (VAR_2->vendor_id) {
 case 0x10ec0283:
  FUNC_1(VAR_2, 0x45, 0xd029);
  FUNC_2(300);
  VAR_3 = FUNC_0(VAR_2, 0x46);
  VAR_4 = (VAR_3 & 0x0070) == 0x0070;
  break;
 case 0x10ec0292:
  FUNC_1(VAR_2, 0x6b, 0xd429);
  FUNC_2(300);
  VAR_3 = FUNC_0(VAR_2, 0x6c);
  VAR_4 = (VAR_3 & 0x001c) == 0x001c;
  break;
 case 0x10ec0668:
  FUNC_1(VAR_2, 0x11, 0x0001);
  FUNC_1(VAR_2, 0xb7, 0x802b);
  FUNC_1(VAR_2, 0x15, 0x0d60);
  FUNC_1(VAR_2, 0xc3, 0x0c00);
  FUNC_2(300);
  VAR_3 = FUNC_0(VAR_2, 0xbe);
  VAR_4 = (VAR_3 & 0x1c02) == 0x1c02;
  break;
 }

 FUNC_3("Headset jack detected iPhone-style headset: %s\n",
      VAR_4 ? "yes" : "no");
 VAR_5->current_headset_type = VAR_4 ? VAR_0 : VAR_1;
}
