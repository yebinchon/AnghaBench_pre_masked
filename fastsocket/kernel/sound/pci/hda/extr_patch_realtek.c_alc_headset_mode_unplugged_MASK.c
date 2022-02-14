
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int vendor_id; } ;


 int FUNC_0 (struct hda_codec*,int) ;
 int FUNC_1 (struct hda_codec*,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_0)
{
 int VAR_1;

 switch (VAR_0->vendor_id) {
 case 0x10ec0283:
  FUNC_1(VAR_0, 0x1b, 0x0c0b);
  FUNC_1(VAR_0, 0x45, 0xc429);
  VAR_1 = FUNC_0(VAR_0, 0x35);
  FUNC_1(VAR_0, 0x35, VAR_1 & 0xbfff);
  FUNC_1(VAR_0, 0x06, 0x2104);
  FUNC_1(VAR_0, 0x1a, 0x0001);
  FUNC_1(VAR_0, 0x26, 0x0004);
  FUNC_1(VAR_0, 0x32, 0x42a3);
  break;
 case 0x10ec0292:
  FUNC_1(VAR_0, 0x76, 0x000e);
  FUNC_1(VAR_0, 0x6c, 0x2400);
  FUNC_1(VAR_0, 0x18, 0x7308);
  FUNC_1(VAR_0, 0x6b, 0xc429);
  break;
 case 0x10ec0668:
  FUNC_1(VAR_0, 0x15, 0x0d40);
  FUNC_1(VAR_0, 0xb7, 0x802b);
  break;
 }
 FUNC_2("Headset jack set to unplugged mode.\n");
}
